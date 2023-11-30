// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Generated by topgen.py

parameter string LIST_OF_ALERTS[] = {
  "uart0_fatal_fault",
  "uart1_fatal_fault",
  "uart2_fatal_fault",
  "uart3_fatal_fault",
  "gpio_fatal_fault",
  "spi_device_fatal_fault",
  "i2c0_fatal_fault",
  "i2c1_fatal_fault",
  "i2c2_fatal_fault",
  "pattgen_fatal_fault",
  "rv_timer_fatal_fault",
  "otp_ctrl_fatal_macro_error",
  "otp_ctrl_fatal_check_error",
  "otp_ctrl_fatal_bus_integ_error",
  "otp_ctrl_fatal_prim_otp_alert",
  "otp_ctrl_recov_prim_otp_alert",
  "lc_ctrl_fatal_prog_error",
  "lc_ctrl_fatal_state_error",
  "lc_ctrl_fatal_bus_integ_error",
  "spi_host0_fatal_fault",
  "spi_host1_fatal_fault",
  "pwrmgr_aon_fatal_fault",
  "rstmgr_aon_fatal_fault",
  "rstmgr_aon_fatal_cnsty_fault",
  "clkmgr_aon_recov_fault",
  "clkmgr_aon_fatal_fault",
  "sysrst_ctrl_aon_fatal_fault",
  "adc_ctrl_aon_fatal_fault",
  "pwm_aon_fatal_fault",
  "pinmux_aon_fatal_fault",
  "aon_timer_aon_fatal_fault",
  "sensor_ctrl_aon_recov_alert",
  "sensor_ctrl_aon_fatal_alert",
  "sram_ctrl_ret_aon_fatal_error",
  "flash_ctrl_recov_err",
  "flash_ctrl_fatal_std_err",
  "flash_ctrl_fatal_err",
  "flash_ctrl_fatal_prim_flash_alert",
  "flash_ctrl_recov_prim_flash_alert",
  "rv_dm_fatal_fault",
  "rv_plic_fatal_fault",
  "aes_recov_ctrl_update_err",
  "aes_fatal_fault",
  "hmac_fatal_fault",
  "kmac_recov_operation_err",
  "kmac_fatal_fault_err",
  "otbn_fatal",
  "otbn_recov",
  "keymgr_recov_operation_err",
  "keymgr_fatal_fault_err",
  "csrng_recov_alert",
  "csrng_fatal_alert",
  "entropy_src_recov_alert",
  "entropy_src_fatal_alert",
  "edn0_recov_alert",
  "edn0_fatal_alert",
  "edn1_recov_alert",
  "edn1_fatal_alert",
  "sram_ctrl_main_fatal_error",
  "rom_ctrl_fatal",
  "rv_core_ibex_fatal_sw_err",
  "rv_core_ibex_recov_sw_err",
  "rv_core_ibex_fatal_hw_err",
  "rv_core_ibex_recov_hw_err"
};

parameter uint NUM_ALERTS = 64;
