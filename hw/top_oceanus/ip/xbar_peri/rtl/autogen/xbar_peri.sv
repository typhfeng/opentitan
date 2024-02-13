// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// xbar_peri module generated by `tlgen.py` tool
// all reset signals should be generated from one reset signal to not make any deadlock
//
// Interconnect
// main
//   -> s1n_18
//     -> uart0
//     -> i2c0
//     -> gpio
//     -> spi_device
//     -> rv_timer
//     -> pwrmgr_aon
//     -> rstmgr_aon
//     -> clkmgr_aon
//     -> pinmux_aon
//     -> otp_ctrl.core
//     -> otp_ctrl.prim
//     -> lc_ctrl
//     -> ast
//     -> aon_timer_aon
//     -> adc_ctrl_aon
//     -> sysrst_ctrl_aon
//     -> pwm_aon

module xbar_peri (
  input clk_peri_i,
  input rst_peri_ni,

  // Host interfaces
  input  tlul_pkg::tl_h2d_t tl_main_i,
  output tlul_pkg::tl_d2h_t tl_main_o,

  // Device interfaces
  output tlul_pkg::tl_h2d_t tl_uart0_o,
  input  tlul_pkg::tl_d2h_t tl_uart0_i,
  output tlul_pkg::tl_h2d_t tl_i2c0_o,
  input  tlul_pkg::tl_d2h_t tl_i2c0_i,
  output tlul_pkg::tl_h2d_t tl_pwm_aon_o,
  input  tlul_pkg::tl_d2h_t tl_pwm_aon_i,
  output tlul_pkg::tl_h2d_t tl_gpio_o,
  input  tlul_pkg::tl_d2h_t tl_gpio_i,
  output tlul_pkg::tl_h2d_t tl_spi_device_o,
  input  tlul_pkg::tl_d2h_t tl_spi_device_i,
  output tlul_pkg::tl_h2d_t tl_rv_timer_o,
  input  tlul_pkg::tl_d2h_t tl_rv_timer_i,
  output tlul_pkg::tl_h2d_t tl_pwrmgr_aon_o,
  input  tlul_pkg::tl_d2h_t tl_pwrmgr_aon_i,
  output tlul_pkg::tl_h2d_t tl_rstmgr_aon_o,
  input  tlul_pkg::tl_d2h_t tl_rstmgr_aon_i,
  output tlul_pkg::tl_h2d_t tl_clkmgr_aon_o,
  input  tlul_pkg::tl_d2h_t tl_clkmgr_aon_i,
  output tlul_pkg::tl_h2d_t tl_pinmux_aon_o,
  input  tlul_pkg::tl_d2h_t tl_pinmux_aon_i,
  output tlul_pkg::tl_h2d_t tl_otp_ctrl__core_o,
  input  tlul_pkg::tl_d2h_t tl_otp_ctrl__core_i,
  output tlul_pkg::tl_h2d_t tl_otp_ctrl__prim_o,
  input  tlul_pkg::tl_d2h_t tl_otp_ctrl__prim_i,
  output tlul_pkg::tl_h2d_t tl_lc_ctrl_o,
  input  tlul_pkg::tl_d2h_t tl_lc_ctrl_i,
  output tlul_pkg::tl_h2d_t tl_aon_timer_aon_o,
  input  tlul_pkg::tl_d2h_t tl_aon_timer_aon_i,
  output tlul_pkg::tl_h2d_t tl_sysrst_ctrl_aon_o,
  input  tlul_pkg::tl_d2h_t tl_sysrst_ctrl_aon_i,
  output tlul_pkg::tl_h2d_t tl_adc_ctrl_aon_o,
  input  tlul_pkg::tl_d2h_t tl_adc_ctrl_aon_i,
  output tlul_pkg::tl_h2d_t tl_ast_o,
  input  tlul_pkg::tl_d2h_t tl_ast_i,

  input prim_mubi_pkg::mubi4_t scanmode_i
);

  import tlul_pkg::*;
  import tl_peri_pkg::*;

  // scanmode_i is currently not used, but provisioned for future use
  // this assignment prevents lint warnings
  logic unused_scanmode;
  assign unused_scanmode = ^scanmode_i;

  tl_h2d_t tl_s1n_18_us_h2d ;
  tl_d2h_t tl_s1n_18_us_d2h ;


  tl_h2d_t tl_s1n_18_ds_h2d [17];
  tl_d2h_t tl_s1n_18_ds_d2h [17];

  // Create steering signal
  logic [4:0] dev_sel_s1n_18;



  assign tl_uart0_o = tl_s1n_18_ds_h2d[0];
  assign tl_s1n_18_ds_d2h[0] = tl_uart0_i;

  assign tl_i2c0_o = tl_s1n_18_ds_h2d[1];
  assign tl_s1n_18_ds_d2h[1] = tl_i2c0_i;

  assign tl_gpio_o = tl_s1n_18_ds_h2d[2];
  assign tl_s1n_18_ds_d2h[2] = tl_gpio_i;

  assign tl_spi_device_o = tl_s1n_18_ds_h2d[3];
  assign tl_s1n_18_ds_d2h[3] = tl_spi_device_i;

  assign tl_rv_timer_o = tl_s1n_18_ds_h2d[4];
  assign tl_s1n_18_ds_d2h[4] = tl_rv_timer_i;

  assign tl_pwrmgr_aon_o = tl_s1n_18_ds_h2d[5];
  assign tl_s1n_18_ds_d2h[5] = tl_pwrmgr_aon_i;

  assign tl_rstmgr_aon_o = tl_s1n_18_ds_h2d[6];
  assign tl_s1n_18_ds_d2h[6] = tl_rstmgr_aon_i;

  assign tl_clkmgr_aon_o = tl_s1n_18_ds_h2d[7];
  assign tl_s1n_18_ds_d2h[7] = tl_clkmgr_aon_i;

  assign tl_pinmux_aon_o = tl_s1n_18_ds_h2d[8];
  assign tl_s1n_18_ds_d2h[8] = tl_pinmux_aon_i;

  assign tl_otp_ctrl__core_o = tl_s1n_18_ds_h2d[9];
  assign tl_s1n_18_ds_d2h[9] = tl_otp_ctrl__core_i;

  assign tl_otp_ctrl__prim_o = tl_s1n_18_ds_h2d[10];
  assign tl_s1n_18_ds_d2h[10] = tl_otp_ctrl__prim_i;

  assign tl_lc_ctrl_o = tl_s1n_18_ds_h2d[11];
  assign tl_s1n_18_ds_d2h[11] = tl_lc_ctrl_i;

  assign tl_ast_o = tl_s1n_18_ds_h2d[12];
  assign tl_s1n_18_ds_d2h[12] = tl_ast_i;

  assign tl_aon_timer_aon_o = tl_s1n_18_ds_h2d[13];
  assign tl_s1n_18_ds_d2h[13] = tl_aon_timer_aon_i;

  assign tl_adc_ctrl_aon_o = tl_s1n_18_ds_h2d[14];
  assign tl_s1n_18_ds_d2h[14] = tl_adc_ctrl_aon_i;

  assign tl_sysrst_ctrl_aon_o = tl_s1n_18_ds_h2d[15];
  assign tl_s1n_18_ds_d2h[15] = tl_sysrst_ctrl_aon_i;

  assign tl_pwm_aon_o = tl_s1n_18_ds_h2d[16];
  assign tl_s1n_18_ds_d2h[16] = tl_pwm_aon_i;

  assign tl_s1n_18_us_h2d = tl_main_i;
  assign tl_main_o = tl_s1n_18_us_d2h;

  always_comb begin
    // default steering to generate error response if address is not within the range
    dev_sel_s1n_18 = 5'd17;
    if ((tl_s1n_18_us_h2d.a_address &
         ~(ADDR_MASK_UART0)) == ADDR_SPACE_UART0) begin
      dev_sel_s1n_18 = 5'd0;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_I2C0)) == ADDR_SPACE_I2C0) begin
      dev_sel_s1n_18 = 5'd1;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_GPIO)) == ADDR_SPACE_GPIO) begin
      dev_sel_s1n_18 = 5'd2;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_SPI_DEVICE)) == ADDR_SPACE_SPI_DEVICE) begin
      dev_sel_s1n_18 = 5'd3;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_RV_TIMER)) == ADDR_SPACE_RV_TIMER) begin
      dev_sel_s1n_18 = 5'd4;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_PWRMGR_AON)) == ADDR_SPACE_PWRMGR_AON) begin
      dev_sel_s1n_18 = 5'd5;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_RSTMGR_AON)) == ADDR_SPACE_RSTMGR_AON) begin
      dev_sel_s1n_18 = 5'd6;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_CLKMGR_AON)) == ADDR_SPACE_CLKMGR_AON) begin
      dev_sel_s1n_18 = 5'd7;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_PINMUX_AON)) == ADDR_SPACE_PINMUX_AON) begin
      dev_sel_s1n_18 = 5'd8;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_OTP_CTRL__CORE)) == ADDR_SPACE_OTP_CTRL__CORE) begin
      dev_sel_s1n_18 = 5'd9;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_OTP_CTRL__PRIM)) == ADDR_SPACE_OTP_CTRL__PRIM) begin
      dev_sel_s1n_18 = 5'd10;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_LC_CTRL)) == ADDR_SPACE_LC_CTRL) begin
      dev_sel_s1n_18 = 5'd11;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_AST)) == ADDR_SPACE_AST) begin
      dev_sel_s1n_18 = 5'd12;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_AON_TIMER_AON)) == ADDR_SPACE_AON_TIMER_AON) begin
      dev_sel_s1n_18 = 5'd13;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_ADC_CTRL_AON)) == ADDR_SPACE_ADC_CTRL_AON) begin
      dev_sel_s1n_18 = 5'd14;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_SYSRST_CTRL_AON)) == ADDR_SPACE_SYSRST_CTRL_AON) begin
      dev_sel_s1n_18 = 5'd15;

    end else if ((tl_s1n_18_us_h2d.a_address &
                  ~(ADDR_MASK_PWM_AON)) == ADDR_SPACE_PWM_AON) begin
      dev_sel_s1n_18 = 5'd16;
end
  end


  // Instantiation phase
  tlul_socket_1n #(
    .HReqDepth (4'h0),
    .HRspDepth (4'h0),
    .DReqDepth (68'h0),
    .DRspDepth (68'h0),
    .N         (17)
  ) u_s1n_18 (
    .clk_i        (clk_peri_i),
    .rst_ni       (rst_peri_ni),
    .tl_h_i       (tl_s1n_18_us_h2d),
    .tl_h_o       (tl_s1n_18_us_d2h),
    .tl_d_o       (tl_s1n_18_ds_h2d),
    .tl_d_i       (tl_s1n_18_ds_d2h),
    .dev_select_i (dev_sel_s1n_18)
  );

endmodule