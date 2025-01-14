// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// tl_main package generated by `tlgen.py` tool

package tl_main_pkg;

  localparam logic [31:0] ADDR_SPACE_RV_DM__REGS             = 32'h 60300000;
  localparam logic [31:0] ADDR_SPACE_RV_DM__MEM              = 32'h 00010000;
  localparam logic [31:0] ADDR_SPACE_ROM_CTRL__ROM           = 32'h 00008000;
  localparam logic [31:0] ADDR_SPACE_ROM_CTRL__REGS          = 32'h 60600000;
  localparam logic [1:0][31:0] ADDR_SPACE_PERI                    = {
    32'h 80000000,
    32'h 40480000
  };
  localparam logic [31:0] ADDR_SPACE_SPI_HOST0               = 32'h 70100000;
  localparam logic [31:0] ADDR_SPACE_RV_PLIC                 = 32'h 48000000;
  localparam logic [31:0] ADDR_SPACE_RV_CORE_IBEX__CFG       = 32'h 60700000;
  localparam logic [31:0] ADDR_SPACE_SRAM_CTRL_MAIN__REGS    = 32'h 60200000;
  localparam logic [31:0] ADDR_SPACE_SRAM_CTRL_MAIN__RAM     = 32'h 10000000;
  localparam logic [31:0] ADDR_SPACE_SRAM_CTRL_RET_AON__REGS = 32'h 60400000;
  localparam logic [31:0] ADDR_SPACE_SRAM_CTRL_RET_AON__RAM  = 32'h 60000000;

  localparam logic [31:0] ADDR_MASK_RV_DM__REGS             = 32'h 00000003;
  localparam logic [31:0] ADDR_MASK_RV_DM__MEM              = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_ROM_CTRL__ROM           = 32'h 00007fff;
  localparam logic [31:0] ADDR_MASK_ROM_CTRL__REGS          = 32'h 0000007f;
  localparam logic [1:0][31:0] ADDR_MASK_PERI                    = {
    32'h 3fffffff,
    32'h 000003ff
  };
  localparam logic [31:0] ADDR_MASK_SPI_HOST0               = 32'h 0000003f;
  localparam logic [31:0] ADDR_MASK_RV_PLIC                 = 32'h 07ffffff;
  localparam logic [31:0] ADDR_MASK_RV_CORE_IBEX__CFG       = 32'h 000000ff;
  localparam logic [31:0] ADDR_MASK_SRAM_CTRL_MAIN__REGS    = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_SRAM_CTRL_MAIN__RAM     = 32'h 0001ffff;
  localparam logic [31:0] ADDR_MASK_SRAM_CTRL_RET_AON__REGS = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_SRAM_CTRL_RET_AON__RAM  = 32'h 00000fff;

  localparam int N_HOST   = 3;
  localparam int N_DEVICE = 12;

  typedef enum int {
    TlRvDmRegs = 0,
    TlRvDmMem = 1,
    TlRomCtrlRom = 2,
    TlRomCtrlRegs = 3,
    TlPeri = 4,
    TlSpiHost0 = 5,
    TlRvPlic = 6,
    TlRvCoreIbexCfg = 7,
    TlSramCtrlMainRegs = 8,
    TlSramCtrlMainRam = 9,
    TlSramCtrlRetAonRegs = 10,
    TlSramCtrlRetAonRam = 11
  } tl_device_e;

  typedef enum int {
    TlRvCoreIbexCorei = 0,
    TlRvCoreIbexCored = 1,
    TlRvDmSba = 2
  } tl_host_e;

endpackage
