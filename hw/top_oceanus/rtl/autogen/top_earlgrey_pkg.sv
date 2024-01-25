// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// ------------------- W A R N I N G: A U T O - G E N E R A T E D   C O D E !! -------------------//
// PLEASE DO NOT HAND-EDIT THIS FILE. IT HAS BEEN AUTO-GENERATED WITH THE FOLLOWING COMMAND:
//
// util/topgen.py -t hw/top_earlgrey/data/top_earlgrey.hjson \
//                -o hw/top_earlgrey/ \
//                --rnd_cnst_seed \
//                1017106219537032642877583828875051302543807092889754935647094601236425074047

package top_earlgrey_pkg;
  /**
   * Peripheral base address for data_proc in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_DATA_PROC_BASE_ADDR = 32'h60500000;

  /**
   * Peripheral size in bytes for data_proc in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_DATA_PROC_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for uart0 in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_UART0_BASE_ADDR = 32'h80000000;

  /**
   * Peripheral size in bytes for uart0 in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_UART0_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for gpio in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_GPIO_BASE_ADDR = 32'h80010000;

  /**
   * Peripheral size in bytes for gpio in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_GPIO_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for spi_device in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SPI_DEVICE_BASE_ADDR = 32'h80020000;

  /**
   * Peripheral size in bytes for spi_device in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SPI_DEVICE_SIZE_BYTES = 32'h2000;

  /**
   * Peripheral base address for i2c0 in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_I2C0_BASE_ADDR = 32'h80030000;

  /**
   * Peripheral size in bytes for i2c0 in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_I2C0_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for pattgen in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PATTGEN_BASE_ADDR = 32'h90000000;

  /**
   * Peripheral size in bytes for pattgen in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PATTGEN_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for rv_timer in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_TIMER_BASE_ADDR = 32'h90010000;

  /**
   * Peripheral size in bytes for rv_timer in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_TIMER_SIZE_BYTES = 32'h200;

  /**
   * Peripheral base address for core device on otp_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_OTP_CTRL_CORE_BASE_ADDR = 32'hA0000000;

  /**
   * Peripheral size in bytes for core device on otp_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_OTP_CTRL_CORE_SIZE_BYTES = 32'h2000;

  /**
   * Peripheral base address for prim device on otp_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_OTP_CTRL_PRIM_BASE_ADDR = 32'hB0001000;

  /**
   * Peripheral size in bytes for prim device on otp_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_OTP_CTRL_PRIM_SIZE_BYTES = 32'h20;

  /**
   * Peripheral base address for spi_host0 in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SPI_HOST0_BASE_ADDR = 32'h70100000;

  /**
   * Peripheral size in bytes for spi_host0 in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SPI_HOST0_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for pwrmgr_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PWRMGR_AON_BASE_ADDR = 32'h80040000;

  /**
   * Peripheral size in bytes for pwrmgr_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PWRMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for rstmgr_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RSTMGR_AON_BASE_ADDR = 32'h80050000;

  /**
   * Peripheral size in bytes for rstmgr_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RSTMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for clkmgr_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_CLKMGR_AON_BASE_ADDR = 32'h80060000;

  /**
   * Peripheral size in bytes for clkmgr_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_CLKMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for sysrst_ctrl_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR = 32'h80070000;

  /**
   * Peripheral size in bytes for sysrst_ctrl_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SYSRST_CTRL_AON_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for adc_ctrl_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ADC_CTRL_AON_BASE_ADDR = 32'h80080000;

  /**
   * Peripheral size in bytes for adc_ctrl_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ADC_CTRL_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for pwm_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PWM_AON_BASE_ADDR = 32'h80090000;

  /**
   * Peripheral size in bytes for pwm_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PWM_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for pinmux_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PINMUX_AON_BASE_ADDR = 32'h800A0000;

  /**
   * Peripheral size in bytes for pinmux_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_PINMUX_AON_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for aon_timer_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_AON_TIMER_AON_BASE_ADDR = 32'h800B0000;

  /**
   * Peripheral size in bytes for aon_timer_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_AON_TIMER_AON_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for lc_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_LC_CTRL_BASE_ADDR = 32'h800C0000;

  /**
   * Peripheral size in bytes for lc_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_LC_CTRL_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for ast in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_AST_BASE_ADDR = 32'h40480000;

  /**
   * Peripheral size in bytes for ast in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_AST_SIZE_BYTES = 32'h400;

  /**
   * Peripheral base address for regs device on sram_ctrl_ret_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR = 32'h60400000;

  /**
   * Peripheral size in bytes for regs device on sram_ctrl_ret_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES = 32'h20;

  /**
   * Peripheral base address for ram device on sram_ctrl_ret_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR = 32'h60000000;

  /**
   * Peripheral size in bytes for ram device on sram_ctrl_ret_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for regs device on rv_dm in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_DM_REGS_BASE_ADDR = 32'h60300000;

  /**
   * Peripheral size in bytes for regs device on rv_dm in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_DM_REGS_SIZE_BYTES = 32'h4;

  /**
   * Peripheral base address for mem device on rv_dm in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_DM_MEM_BASE_ADDR = 32'h10000;

  /**
   * Peripheral size in bytes for mem device on rv_dm in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_DM_MEM_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for rv_plic in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_PLIC_BASE_ADDR = 32'h48000000;

  /**
   * Peripheral size in bytes for rv_plic in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_PLIC_SIZE_BYTES = 32'h8000000;

  /**
   * Peripheral base address for regs device on sram_ctrl_main in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR = 32'h60200000;

  /**
   * Peripheral size in bytes for regs device on sram_ctrl_main in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_MAIN_REGS_SIZE_BYTES = 32'h20;

  /**
   * Peripheral base address for ram device on sram_ctrl_main in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR = 32'h10000000;

  /**
   * Peripheral size in bytes for ram device on sram_ctrl_main in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_SRAM_CTRL_MAIN_RAM_SIZE_BYTES = 32'h20000;

  /**
   * Peripheral base address for regs device on rom_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ROM_CTRL_REGS_BASE_ADDR = 32'h60600000;

  /**
   * Peripheral size in bytes for regs device on rom_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ROM_CTRL_REGS_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for rom device on rom_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ROM_CTRL_ROM_BASE_ADDR = 32'h8000;

  /**
   * Peripheral size in bytes for rom device on rom_ctrl in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ROM_CTRL_ROM_SIZE_BYTES = 32'h8000;

  /**
   * Peripheral base address for cfg device on rv_core_ibex in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR = 32'h60700000;

  /**
   * Peripheral size in bytes for cfg device on rv_core_ibex in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RV_CORE_IBEX_CFG_SIZE_BYTES = 32'h100;

  /**
   * Memory base address for ram_ret_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RAM_RET_AON_BASE_ADDR = 32'h60000000;

  /**
   * Memory size for ram_ret_aon in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RAM_RET_AON_SIZE_BYTES = 32'h1000;

  /**
   * Memory base address for ram_main in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RAM_MAIN_BASE_ADDR = 32'h10000000;

  /**
   * Memory size for ram_main in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_RAM_MAIN_SIZE_BYTES = 32'h20000;

  /**
   * Memory base address for rom in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ROM_BASE_ADDR = 32'h8000;

  /**
   * Memory size for rom in top earlgrey.
   */
  parameter int unsigned TOP_EARLGREY_ROM_SIZE_BYTES = 32'h8000;


  // Enumeration of alert modules
  typedef enum int unsigned {
    TopEarlgreyAlertPeripheralDataProc = 0,
    TopEarlgreyAlertPeripheralUart0 = 1,
    TopEarlgreyAlertPeripheralGpio = 2,
    TopEarlgreyAlertPeripheralSpiDevice = 3,
    TopEarlgreyAlertPeripheralI2c0 = 4,
    TopEarlgreyAlertPeripheralPattgen = 5,
    TopEarlgreyAlertPeripheralRvTimer = 6,
    TopEarlgreyAlertPeripheralOtpCtrl = 7,
    TopEarlgreyAlertPeripheralSpiHost0 = 8,
    TopEarlgreyAlertPeripheralPwrmgrAon = 9,
    TopEarlgreyAlertPeripheralRstmgrAon = 10,
    TopEarlgreyAlertPeripheralClkmgrAon = 11,
    TopEarlgreyAlertPeripheralSysrstCtrlAon = 12,
    TopEarlgreyAlertPeripheralAdcCtrlAon = 13,
    TopEarlgreyAlertPeripheralPwmAon = 14,
    TopEarlgreyAlertPeripheralPinmuxAon = 15,
    TopEarlgreyAlertPeripheralAonTimerAon = 16,
    TopEarlgreyAlertPeripheralLcCtrl = 17,
    TopEarlgreyAlertPeripheralSramCtrlRetAon = 18,
    TopEarlgreyAlertPeripheralRvDm = 19,
    TopEarlgreyAlertPeripheralRvPlic = 20,
    TopEarlgreyAlertPeripheralSramCtrlMain = 21,
    TopEarlgreyAlertPeripheralRomCtrl = 22,
    TopEarlgreyAlertPeripheralRvCoreIbex = 23,
    TopEarlgreyAlertPeripheralCount
  } alert_peripheral_e;

  // Enumeration of alerts
  typedef enum int unsigned {
    TopEarlgreyAlertIdDataProcFatalFault = 0,
    TopEarlgreyAlertIdUart0FatalFault = 1,
    TopEarlgreyAlertIdGpioFatalFault = 2,
    TopEarlgreyAlertIdSpiDeviceFatalFault = 3,
    TopEarlgreyAlertIdI2c0FatalFault = 4,
    TopEarlgreyAlertIdPattgenFatalFault = 5,
    TopEarlgreyAlertIdRvTimerFatalFault = 6,
    TopEarlgreyAlertIdOtpCtrlFatalMacroError = 7,
    TopEarlgreyAlertIdOtpCtrlFatalCheckError = 8,
    TopEarlgreyAlertIdOtpCtrlFatalBusIntegError = 9,
    TopEarlgreyAlertIdOtpCtrlFatalPrimOtpAlert = 10,
    TopEarlgreyAlertIdOtpCtrlRecovPrimOtpAlert = 11,
    TopEarlgreyAlertIdSpiHost0FatalFault = 12,
    TopEarlgreyAlertIdPwrmgrAonFatalFault = 13,
    TopEarlgreyAlertIdRstmgrAonFatalFault = 14,
    TopEarlgreyAlertIdRstmgrAonFatalCnstyFault = 15,
    TopEarlgreyAlertIdClkmgrAonRecovFault = 16,
    TopEarlgreyAlertIdClkmgrAonFatalFault = 17,
    TopEarlgreyAlertIdSysrstCtrlAonFatalFault = 18,
    TopEarlgreyAlertIdAdcCtrlAonFatalFault = 19,
    TopEarlgreyAlertIdPwmAonFatalFault = 20,
    TopEarlgreyAlertIdPinmuxAonFatalFault = 21,
    TopEarlgreyAlertIdAonTimerAonFatalFault = 22,
    TopEarlgreyAlertIdLcCtrlFatalProgError = 23,
    TopEarlgreyAlertIdLcCtrlFatalStateError = 24,
    TopEarlgreyAlertIdLcCtrlFatalBusIntegError = 25,
    TopEarlgreyAlertIdSramCtrlRetAonFatalError = 26,
    TopEarlgreyAlertIdRvDmFatalFault = 27,
    TopEarlgreyAlertIdRvPlicFatalFault = 28,
    TopEarlgreyAlertIdSramCtrlMainFatalError = 29,
    TopEarlgreyAlertIdRomCtrlFatal = 30,
    TopEarlgreyAlertIdRvCoreIbexFatalSwErr = 31,
    TopEarlgreyAlertIdRvCoreIbexRecovSwErr = 32,
    TopEarlgreyAlertIdRvCoreIbexFatalHwErr = 33,
    TopEarlgreyAlertIdRvCoreIbexRecovHwErr = 34,
    TopEarlgreyAlertIdCount
  } alert_id_e;

  // Enumeration of IO power domains.
  // Only used in ASIC target.
  typedef enum logic [2:0] {
    IoBankVcc = 0,
    IoBankAvcc = 1,
    IoBankVioa = 2,
    IoBankViob = 3,
    IoBankCount = 4
  } pwr_dom_e;

  // Enumeration for MIO signals on the top-level.
  typedef enum int unsigned {
    MioInGpioGpio0 = 0,
    MioInGpioGpio1 = 1,
    MioInGpioGpio2 = 2,
    MioInGpioGpio3 = 3,
    MioInGpioGpio4 = 4,
    MioInGpioGpio5 = 5,
    MioInGpioGpio6 = 6,
    MioInGpioGpio7 = 7,
    MioInGpioGpio8 = 8,
    MioInGpioGpio9 = 9,
    MioInGpioGpio10 = 10,
    MioInGpioGpio11 = 11,
    MioInGpioGpio12 = 12,
    MioInGpioGpio13 = 13,
    MioInGpioGpio14 = 14,
    MioInGpioGpio15 = 15,
    MioInGpioGpio16 = 16,
    MioInGpioGpio17 = 17,
    MioInGpioGpio18 = 18,
    MioInGpioGpio19 = 19,
    MioInGpioGpio20 = 20,
    MioInGpioGpio21 = 21,
    MioInGpioGpio22 = 22,
    MioInGpioGpio23 = 23,
    MioInGpioGpio24 = 24,
    MioInGpioGpio25 = 25,
    MioInGpioGpio26 = 26,
    MioInGpioGpio27 = 27,
    MioInGpioGpio28 = 28,
    MioInGpioGpio29 = 29,
    MioInGpioGpio30 = 30,
    MioInGpioGpio31 = 31,
    MioInI2c0Sda = 32,
    MioInI2c0Scl = 33,
    MioInUart0Rx = 34,
    MioInSpiDeviceTpmCsb = 35,
    MioInSysrstCtrlAonAcPresent = 36,
    MioInSysrstCtrlAonKey0In = 37,
    MioInSysrstCtrlAonKey1In = 38,
    MioInSysrstCtrlAonKey2In = 39,
    MioInSysrstCtrlAonPwrbIn = 40,
    MioInSysrstCtrlAonLidOpen = 41,
    MioInCount = 42
  } mio_in_e;

  typedef enum {
    MioOutGpioGpio0 = 0,
    MioOutGpioGpio1 = 1,
    MioOutGpioGpio2 = 2,
    MioOutGpioGpio3 = 3,
    MioOutGpioGpio4 = 4,
    MioOutGpioGpio5 = 5,
    MioOutGpioGpio6 = 6,
    MioOutGpioGpio7 = 7,
    MioOutGpioGpio8 = 8,
    MioOutGpioGpio9 = 9,
    MioOutGpioGpio10 = 10,
    MioOutGpioGpio11 = 11,
    MioOutGpioGpio12 = 12,
    MioOutGpioGpio13 = 13,
    MioOutGpioGpio14 = 14,
    MioOutGpioGpio15 = 15,
    MioOutGpioGpio16 = 16,
    MioOutGpioGpio17 = 17,
    MioOutGpioGpio18 = 18,
    MioOutGpioGpio19 = 19,
    MioOutGpioGpio20 = 20,
    MioOutGpioGpio21 = 21,
    MioOutGpioGpio22 = 22,
    MioOutGpioGpio23 = 23,
    MioOutGpioGpio24 = 24,
    MioOutGpioGpio25 = 25,
    MioOutGpioGpio26 = 26,
    MioOutGpioGpio27 = 27,
    MioOutGpioGpio28 = 28,
    MioOutGpioGpio29 = 29,
    MioOutGpioGpio30 = 30,
    MioOutGpioGpio31 = 31,
    MioOutI2c0Sda = 32,
    MioOutI2c0Scl = 33,
    MioOutUart0Tx = 34,
    MioOutOtpCtrlTest0 = 35,
    MioOutSysrstCtrlAonBatDisable = 36,
    MioOutSysrstCtrlAonKey0Out = 37,
    MioOutSysrstCtrlAonKey1Out = 38,
    MioOutSysrstCtrlAonKey2Out = 39,
    MioOutSysrstCtrlAonPwrbOut = 40,
    MioOutSysrstCtrlAonZ3Wakeup = 41,
    MioOutCount = 42
  } mio_out_e;

  // Enumeration for DIO signals, used on both the top and chip-levels.
  typedef enum int unsigned {
    DioSpiHost0Sd0 = 0,
    DioSpiHost0Sd1 = 1,
    DioSpiHost0Sd2 = 2,
    DioSpiHost0Sd3 = 3,
    DioSpiDeviceSd0 = 4,
    DioSpiDeviceSd1 = 5,
    DioSpiDeviceSd2 = 6,
    DioSpiDeviceSd3 = 7,
    DioSysrstCtrlAonEcRstL = 8,
    DioSpiDeviceSck = 9,
    DioSpiDeviceCsb = 10,
    DioSpiHost0Sck = 11,
    DioSpiHost0Csb = 12,
    DioCount = 13
  } dio_e;

  // Enumeration for the types of pads.
  typedef enum {
    MioPad,
    DioPad
  } pad_type_e;

  // Raw MIO/DIO input array indices on chip-level.
  // TODO: Does not account for target specific stubbed/added pads.
  // Need to make a target-specific package for those.
  typedef enum int unsigned {
    MioPadIoa0 = 0,
    MioPadIoa1 = 1,
    MioPadIoa2 = 2,
    MioPadIoa3 = 3,
    MioPadIoa4 = 4,
    MioPadIoa5 = 5,
    MioPadIoa6 = 6,
    MioPadIoa7 = 7,
    MioPadIoa8 = 8,
    MioPadIob0 = 9,
    MioPadIob1 = 10,
    MioPadIob2 = 11,
    MioPadIob3 = 12,
    MioPadIob4 = 13,
    MioPadIob5 = 14,
    MioPadIob6 = 15,
    MioPadIob7 = 16,
    MioPadIob8 = 17,
    MioPadIob9 = 18,
    MioPadIob10 = 19,
    MioPadIob11 = 20,
    MioPadIob12 = 21,
    MioPadIoc0 = 22,
    MioPadIoc1 = 23,
    MioPadIoc2 = 24,
    MioPadIoc3 = 25,
    MioPadIoc4 = 26,
    MioPadIoc5 = 27,
    MioPadIoc6 = 28,
    MioPadIoc7 = 29,
    MioPadIoc8 = 30,
    MioPadIoc9 = 31,
    MioPadIoc10 = 32,
    MioPadIoc11 = 33,
    MioPadIoc12 = 34,
    MioPadIor0 = 35,
    MioPadIor1 = 36,
    MioPadIor2 = 37,
    MioPadIor3 = 38,
    MioPadIor4 = 39,
    MioPadIor5 = 40,
    MioPadIor6 = 41,
    MioPadIor7 = 42,
    MioPadIor9 = 43,
    MioPadIor10 = 44,
    MioPadIor11 = 45,
    MioPadIor12 = 46,
    MioPadIor13 = 47,
    MioPadCount
  } mio_pad_e;

  typedef enum int unsigned {
    DioPadPorN = 0,
    DioPadCc1 = 1,
    DioPadCc2 = 2,
    DioPadOtpExtVolt = 3,
    DioPadSpiHostD0 = 4,
    DioPadSpiHostD1 = 5,
    DioPadSpiHostD2 = 6,
    DioPadSpiHostD3 = 7,
    DioPadSpiHostClk = 8,
    DioPadSpiHostCsL = 9,
    DioPadSpiDevD0 = 10,
    DioPadSpiDevD1 = 11,
    DioPadSpiDevD2 = 12,
    DioPadSpiDevD3 = 13,
    DioPadSpiDevClk = 14,
    DioPadSpiDevCsL = 15,
    DioPadIor8 = 16,
    DioPadCount
  } dio_pad_e;

  // List of peripheral instantiated in this chip.
  typedef enum {
    PeripheralAdcCtrlAon,
    PeripheralAonTimerAon,
    PeripheralAst,
    PeripheralClkmgrAon,
    PeripheralDataProc,
    PeripheralGpio,
    PeripheralI2c0,
    PeripheralLcCtrl,
    PeripheralOtpCtrl,
    PeripheralPattgen,
    PeripheralPinmuxAon,
    PeripheralPwmAon,
    PeripheralPwrmgrAon,
    PeripheralRomCtrl,
    PeripheralRstmgrAon,
    PeripheralRvCoreIbex,
    PeripheralRvDm,
    PeripheralRvPlic,
    PeripheralRvTimer,
    PeripheralSpiDevice,
    PeripheralSpiHost0,
    PeripheralSramCtrlMain,
    PeripheralSramCtrlRetAon,
    PeripheralSysrstCtrlAon,
    PeripheralUart0,
    PeripheralCount
  } peripheral_e;

  // TODO: Enumeration for PLIC Interrupt source peripheral.
  // TODO: Enumeration for PLIC Interrupt Ids.

// MACROs for AST analog simulation support
`ifdef ANALOGSIM
  `define INOUT_AI input ast_pkg::awire_t
  `define INOUT_AO output ast_pkg::awire_t
`else
  `define INOUT_AI inout
  `define INOUT_AO inout
`endif

endpackage
