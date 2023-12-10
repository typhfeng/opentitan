// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// tb__xbar_connect generated by `topgen.py` tool

// This file must be `included in `hw/top_<toplevel>/dv/tb/tb.sv.

`define DRIVE_CHIP_TL_HOST_IF(tl_name, inst_name, sig_name) \
     force ``tl_name``_tl_if.d2h = dut.top_earlgrey.u_``inst_name``.``sig_name``_i; \
     force dut.top_earlgrey.u_``inst_name``.``sig_name``_o = ``tl_name``_tl_if.h2d; \
     force dut.top_earlgrey.u_``inst_name``.clk_i = 0; \
     uvm_config_db#(virtual tl_if)::set(null, $sformatf("*env.%0s_agent", `"tl_name`"), "vif", \
                                        ``tl_name``_tl_if);

`define DRIVE_CHIP_TL_DEVICE_IF(tl_name, inst_name, sig_name) \
     force ``tl_name``_tl_if.h2d = dut.top_earlgrey.u_``inst_name``.``sig_name``_i; \
     force dut.top_earlgrey.u_``inst_name``.``sig_name``_o = ``tl_name``_tl_if.d2h; \
     force dut.top_earlgrey.u_``inst_name``.clk_i = 0; \
     uvm_config_db#(virtual tl_if)::set(null, $sformatf("*env.%0s_agent", `"tl_name`"), "vif", \
                                        ``tl_name``_tl_if);

`define DRIVE_CHIP_TL_EXT_DEVICE_IF(tl_name, inst_name, port_name) \
     force ``tl_name``_tl_if.h2d = dut.u_``inst_name``.``port_name``_i; \
     force dut.u_``inst_name``.``port_name``_o = ``tl_name``_tl_if.d2h; \
     uvm_config_db#(virtual tl_if)::set(null, $sformatf("*env.%0s_agent", `"tl_name`"), "vif", \
                                        ``tl_name``_tl_if);

wire clk_main;
clk_rst_if clk_rst_if_main(.clk(clk_main), .rst_n(rst_n));
wire clk_io;
clk_rst_if clk_rst_if_io(.clk(clk_io), .rst_n(rst_n));
wire clk_io_div4;
clk_rst_if clk_rst_if_io_div4(.clk(clk_io_div4), .rst_n(rst_n));

tl_if rv_core_ibex__corei_tl_if(clk_main, rst_n);
tl_if rv_core_ibex__cored_tl_if(clk_main, rst_n);
tl_if rv_dm__sba_tl_if(clk_main, rst_n);

tl_if rv_dm__regs_tl_if(clk_main, rst_n);
tl_if rv_dm__mem_tl_if(clk_main, rst_n);
tl_if rom_ctrl__rom_tl_if(clk_main, rst_n);
tl_if rom_ctrl__regs_tl_if(clk_main, rst_n);
tl_if spi_host0_tl_if(clk_io, rst_n);
tl_if flash_ctrl__core_tl_if(clk_main, rst_n);
tl_if flash_ctrl__prim_tl_if(clk_main, rst_n);
tl_if flash_ctrl__mem_tl_if(clk_main, rst_n);
tl_if rv_plic_tl_if(clk_main, rst_n);
tl_if rv_core_ibex__cfg_tl_if(clk_main, rst_n);
tl_if sram_ctrl_main__regs_tl_if(clk_main, rst_n);
tl_if sram_ctrl_main__ram_tl_if(clk_main, rst_n);
tl_if uart0_tl_if(clk_io_div4, rst_n);
tl_if i2c0_tl_if(clk_io_div4, rst_n);
tl_if pwm_aon_tl_if(clk_io_div4, rst_n);
tl_if gpio_tl_if(clk_io_div4, rst_n);
tl_if spi_device_tl_if(clk_io_div4, rst_n);
tl_if rv_timer_tl_if(clk_io_div4, rst_n);
tl_if pwrmgr_aon_tl_if(clk_io_div4, rst_n);
tl_if rstmgr_aon_tl_if(clk_io_div4, rst_n);
tl_if clkmgr_aon_tl_if(clk_io_div4, rst_n);
tl_if pinmux_aon_tl_if(clk_io_div4, rst_n);
tl_if otp_ctrl__core_tl_if(clk_io_div4, rst_n);
tl_if otp_ctrl__prim_tl_if(clk_io_div4, rst_n);
tl_if lc_ctrl_tl_if(clk_io_div4, rst_n);
tl_if sram_ctrl_ret_aon__regs_tl_if(clk_io_div4, rst_n);
tl_if sram_ctrl_ret_aon__ram_tl_if(clk_io_div4, rst_n);
tl_if aon_timer_aon_tl_if(clk_io_div4, rst_n);
tl_if sysrst_ctrl_aon_tl_if(clk_io_div4, rst_n);
tl_if adc_ctrl_aon_tl_if(clk_io_div4, rst_n);
tl_if ast_tl_if(clk_io_div4, rst_n);

initial begin
  wait (xbar_mode !== 1'bx);
  if (xbar_mode) begin
    // only enable assertions in xbar as many pins are unconnected
    $assertoff(0, tb);
    $asserton(0, tb.dut.top_earlgrey.u_xbar_main);
    $asserton(0, tb.dut.top_earlgrey.u_xbar_peri);


    // These are all zero-time: anything that consumes time go at the end.

    // bypass clkmgr, force clocks directly
    force tb.dut.top_earlgrey.u_xbar_main.clk_main_i = clk_main;
    force tb.dut.top_earlgrey.u_xbar_main.clk_fixed_i = clk_io_div4;
    force tb.dut.top_earlgrey.u_xbar_main.clk_spi_host0_i = clk_io;
    force tb.dut.top_earlgrey.u_xbar_peri.clk_peri_i = clk_io_div4;

    // bypass rstmgr, force resets directly
    force tb.dut.top_earlgrey.u_xbar_main.rst_main_ni = rst_n;
    force tb.dut.top_earlgrey.u_xbar_main.rst_fixed_ni = rst_n;
    force tb.dut.top_earlgrey.u_xbar_main.rst_spi_host0_ni = rst_n;
    force tb.dut.top_earlgrey.u_xbar_peri.rst_peri_ni = rst_n;

`ifndef GATE_LEVEL
    `DRIVE_CHIP_TL_HOST_IF(rv_core_ibex__corei, rv_core_ibex, corei_tl_h)
    `DRIVE_CHIP_TL_HOST_IF(rv_core_ibex__cored, rv_core_ibex, cored_tl_h)
    `DRIVE_CHIP_TL_HOST_IF(rv_dm__sba, rv_dm, sba_tl_h)
    `DRIVE_CHIP_TL_DEVICE_IF(rv_dm__regs, rv_dm, regs_tl_d)
    `DRIVE_CHIP_TL_DEVICE_IF(rv_dm__mem, rv_dm, mem_tl_d)
    `DRIVE_CHIP_TL_DEVICE_IF(rom_ctrl__rom, rom_ctrl, rom_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(rom_ctrl__regs, rom_ctrl, regs_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(spi_host0, spi_host0, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(flash_ctrl__core, flash_ctrl, core_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(flash_ctrl__prim, flash_ctrl, prim_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(flash_ctrl__mem, flash_ctrl, mem_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(rv_plic, rv_plic, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(rv_core_ibex__cfg, rv_core_ibex, cfg_tl_d)
    `DRIVE_CHIP_TL_DEVICE_IF(sram_ctrl_main__regs, sram_ctrl_main, regs_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(sram_ctrl_main__ram, sram_ctrl_main, ram_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(uart0, uart0, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(i2c0, i2c0, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(pwm_aon, pwm_aon, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(gpio, gpio, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(spi_device, spi_device, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(rv_timer, rv_timer, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(pwrmgr_aon, pwrmgr_aon, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(rstmgr_aon, rstmgr_aon, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(clkmgr_aon, clkmgr_aon, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(pinmux_aon, pinmux_aon, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(otp_ctrl__core, otp_ctrl, core_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(otp_ctrl__prim, otp_ctrl, prim_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(lc_ctrl, lc_ctrl, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(sram_ctrl_ret_aon__regs, sram_ctrl_ret_aon, regs_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(sram_ctrl_ret_aon__ram, sram_ctrl_ret_aon, ram_tl)
    `DRIVE_CHIP_TL_DEVICE_IF(aon_timer_aon, aon_timer_aon, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(sysrst_ctrl_aon, sysrst_ctrl_aon, tl)
    `DRIVE_CHIP_TL_DEVICE_IF(adc_ctrl_aon, adc_ctrl_aon, tl)
    `DRIVE_CHIP_TL_EXT_DEVICE_IF(ast, ast, tl)
`endif

    // And this can consume time, so they go at the end of this block.

    // Wait for a negedge of rst_n, or else we will have clock edges before
    // reset, which could capture 'X values.
    xbar_clk_rst_if.wait_for_reset(.wait_posedge(1'b0));

    clk_rst_if_main.set_active(.drive_rst_n_val(0));
    clk_rst_if_main.set_freq_khz(300000000 / 1000);
    clk_rst_if_io.set_active(.drive_rst_n_val(0));
    clk_rst_if_io.set_freq_khz(96000000 / 1000);
    clk_rst_if_io_div4.set_active(.drive_rst_n_val(0));
    clk_rst_if_io_div4.set_freq_khz(24000000 / 1000);

  end
end

`undef DRIVE_CHIP_TL_HOST_IF
`undef DRIVE_CHIP_TL_DEVICE_IF
`undef DRIVE_CHIP_TL_EXT_DEVICE_IF
