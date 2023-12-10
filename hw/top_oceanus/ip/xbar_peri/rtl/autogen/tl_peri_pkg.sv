// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// tl_peri package generated by `tlgen.py` tool

package tl_peri_pkg;

  localparam logic [31:0] ADDR_SPACE_UART0                   = 32'h 40000000;
  localparam logic [31:0] ADDR_SPACE_I2C0                    = 32'h 40080000;
  localparam logic [31:0] ADDR_SPACE_PWM_AON                 = 32'h 40450000;
  localparam logic [31:0] ADDR_SPACE_GPIO                    = 32'h 40040000;
  localparam logic [31:0] ADDR_SPACE_SPI_DEVICE              = 32'h 40050000;
  localparam logic [31:0] ADDR_SPACE_RV_TIMER                = 32'h 40100000;
  localparam logic [31:0] ADDR_SPACE_PWRMGR_AON              = 32'h 40400000;
  localparam logic [31:0] ADDR_SPACE_RSTMGR_AON              = 32'h 40410000;
  localparam logic [31:0] ADDR_SPACE_CLKMGR_AON              = 32'h 40420000;
  localparam logic [31:0] ADDR_SPACE_PINMUX_AON              = 32'h 40460000;
  localparam logic [31:0] ADDR_SPACE_OTP_CTRL__CORE          = 32'h 40130000;
  localparam logic [31:0] ADDR_SPACE_OTP_CTRL__PRIM          = 32'h 40132000;
  localparam logic [31:0] ADDR_SPACE_LC_CTRL                 = 32'h 40140000;
  localparam logic [31:0] ADDR_SPACE_SRAM_CTRL_RET_AON__REGS = 32'h 40500000;
  localparam logic [31:0] ADDR_SPACE_SRAM_CTRL_RET_AON__RAM  = 32'h 40600000;
  localparam logic [31:0] ADDR_SPACE_AON_TIMER_AON           = 32'h 40470000;
  localparam logic [31:0] ADDR_SPACE_SYSRST_CTRL_AON         = 32'h 40430000;
  localparam logic [31:0] ADDR_SPACE_ADC_CTRL_AON            = 32'h 40440000;
  localparam logic [31:0] ADDR_SPACE_AST                     = 32'h 40480000;

  localparam logic [31:0] ADDR_MASK_UART0                   = 32'h 0000003f;
  localparam logic [31:0] ADDR_MASK_I2C0                    = 32'h 0000007f;
  localparam logic [31:0] ADDR_MASK_PWM_AON                 = 32'h 0000007f;
  localparam logic [31:0] ADDR_MASK_GPIO                    = 32'h 0000003f;
  localparam logic [31:0] ADDR_MASK_SPI_DEVICE              = 32'h 00001fff;
  localparam logic [31:0] ADDR_MASK_RV_TIMER                = 32'h 000001ff;
  localparam logic [31:0] ADDR_MASK_PWRMGR_AON              = 32'h 0000007f;
  localparam logic [31:0] ADDR_MASK_RSTMGR_AON              = 32'h 0000007f;
  localparam logic [31:0] ADDR_MASK_CLKMGR_AON              = 32'h 0000007f;
  localparam logic [31:0] ADDR_MASK_PINMUX_AON              = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_OTP_CTRL__CORE          = 32'h 00001fff;
  localparam logic [31:0] ADDR_MASK_OTP_CTRL__PRIM          = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_LC_CTRL                 = 32'h 000000ff;
  localparam logic [31:0] ADDR_MASK_SRAM_CTRL_RET_AON__REGS = 32'h 0000001f;
  localparam logic [31:0] ADDR_MASK_SRAM_CTRL_RET_AON__RAM  = 32'h 000fffff;
  localparam logic [31:0] ADDR_MASK_AON_TIMER_AON           = 32'h 0000003f;
  localparam logic [31:0] ADDR_MASK_SYSRST_CTRL_AON         = 32'h 000000ff;
  localparam logic [31:0] ADDR_MASK_ADC_CTRL_AON            = 32'h 0000007f;
  localparam logic [31:0] ADDR_MASK_AST                     = 32'h 000003ff;

  localparam int N_HOST   = 1;
  localparam int N_DEVICE = 19;

  typedef enum int {
    TlUart0 = 0,
    TlI2C0 = 1,
    TlPwmAon = 2,
    TlGpio = 3,
    TlSpiDevice = 4,
    TlRvTimer = 5,
    TlPwrmgrAon = 6,
    TlRstmgrAon = 7,
    TlClkmgrAon = 8,
    TlPinmuxAon = 9,
    TlOtpCtrlCore = 10,
    TlOtpCtrlPrim = 11,
    TlLcCtrl = 12,
    TlSramCtrlRetAonRegs = 13,
    TlSramCtrlRetAonRam = 14,
    TlAonTimerAon = 15,
    TlSysrstCtrlAon = 16,
    TlAdcCtrlAon = 17,
    TlAst = 18
  } tl_device_e;

  typedef enum int {
    TlMain = 0
  } tl_host_e;

endpackage
