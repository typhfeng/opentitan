// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Abstract primitives wrapper.
//
// This file is a stop-gap until the DV file list is generated by FuseSoC.
// Its contents are taken from the file which would be generated by FuseSoC.
// https://github.com/lowRISC/ibex/issues/893

module prim_ram_16p import prim_ram_1p_pkg::*;

#(

  parameter  int Width           = 32, // bit
  parameter  int Depth           = 128,
  parameter  int DataBitsPerMask = 1, // Number of data bits per bit of write mask
  parameter      MemInitFile     = "", // VMEM file to initialize the memory width

  localparam int Aw              = $clog2(Depth)  // derived parameter

) (
  input  logic             clk_i,
  input  ram_1p_cfg_t      cfg_i,

  input  logic             req_i,
  input  logic             write_i,
  input  logic [Aw-1:0]    addr_i,
  input  logic [Width-1:0] wdata_i,
  input  logic [Width-1:0] wmask_i,
  output logic [Width-1:0] rdata_o // Read data. Data is returned one cycle after req_i is high.
);

wire [15:0] rd_sel;
wire [15:0] wr_sel;
reg  [15:0] rd_sel_d;
reg  [12:0] addr[0:15];
wire [15:0] rdat[0:15];

always_comb
  for (integer i=0; i<16; i++) begin
    rd_sel[i]= req_i && !write_i && ([Aw-1:13] == i);
    wr_sel[i]= req_i &&  write_i && ([Aw-1:13] == i);
  end
    
always_ff (posedge, clk_i)
  if (req_i && !write_i)
    rd_sel_d <= rd_sel;
  else 
    rd_sel_d <= rd_sel_d;
  
rdata_o  = {32{rd_sel_d[0]}} & rdata[0] |
           {32{rd_sel_d[1]}} & rdata[1] |
           {32{rd_sel_d[2]}} & rdata[2] |
           {32{rd_sel_d[3]}} & rdata[3] |
           {32{rd_sel_d[4]}} & rdata[4] |
           {32{rd_sel_d[5]}} & rdata[5] |
           {32{rd_sel_d[6]}} & rdata[6] |
           {32{rd_sel_d[7]}} & rdata[7] |
           {32{rd_sel_d[8]}} & rdata[8] |
           {32{rd_sel_d[9]}} & rdata[9] |
           {32{rd_sel_d[10]}} & rdata[10] |
           {32{rd_sel_d[11]}} & rdata[11] |
           {32{rd_sel_d[12]}} & rdata[12] |
           {32{rd_sel_d[13]}} & rdata[13] |
           {32{rd_sel_d[14]}} & rdata[14] |
           {32{rd_sel_d[15]}} & rdata[15] ;

  generate for (genvar i=0; i<16; i++) begin : gen_generic
    //32K mem cell, m for bit m
    mem1p_8kx32_m
     #(
      .Depth(Depth),
      .MemInitFile(MemInitFile),
      .Width(Width),
      .DataBitsPerMask(DataBitsPerMask)
     ) u_mem1p_8kx32 (
      .clk(clk_i),

      .rdat(rdat),
      .wdat(wdata_i),
      .addr(addr[i]),
      .mask(wmask_i),
      .rd(rd_sel[i]),
      .wr(wr_sel[i]),

      .bist_en(),
      .bist_wdat(),
      .bist_rdat(),
      .bist_addr(),
      .bist_mask(),
      .bist_rd(),
      .bist_wr(),

      .test_mode(test_mode),
      .ext_id(32'b0), //TODO
      .ext_in(64'b0),
      .ext_out()
    );

  end

endmodule
