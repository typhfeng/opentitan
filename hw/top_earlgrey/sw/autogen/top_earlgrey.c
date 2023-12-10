// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "hw\top_earlgrey\sw\autogen\top_earlgrey.h"

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_plic_irq_id_t` to
 * `top_earlgrey_plic_peripheral_t`.
 */
const top_earlgrey_plic_peripheral_t
    top_earlgrey_plic_interrupt_for_peripheral[92] = {
  [kTopEarlgreyPlicIrqIdNone] = kTopEarlgreyPlicPeripheralUnknown,
  [kTopEarlgreyPlicIrqIdUart0TxWatermark] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdUart0RxWatermark] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdUart0TxEmpty] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdUart0RxOverflow] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdUart0RxFrameErr] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdUart0RxBreakErr] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdUart0RxTimeout] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdUart0RxParityErr] = kTopEarlgreyPlicPeripheralUart0,
  [kTopEarlgreyPlicIrqIdGpioGpio0] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio1] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio2] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio3] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio4] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio5] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio6] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio7] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio8] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio9] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio10] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio11] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio12] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio13] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio14] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio15] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio16] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio17] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio18] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio19] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio20] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio21] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio22] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio23] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio24] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio25] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio26] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio27] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio28] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio29] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio30] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio31] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdSpiDeviceGenericRxFull] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceGenericRxWatermark] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceGenericTxWatermark] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceGenericRxError] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceGenericRxOverflow] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceGenericTxUnderflow] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceUploadCmdfifoNotEmpty] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceUploadPayloadNotEmpty] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceUploadPayloadOverflow] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceReadbufWatermark] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceReadbufFlip] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceTpmHeaderNotEmpty] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdI2c0FmtThreshold] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0RxThreshold] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0FmtOverflow] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0RxOverflow] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0Nak] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0SclInterference] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0SdaInterference] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0StretchTimeout] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0SdaUnstable] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0CmdComplete] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0TxStretch] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0TxOverflow] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0AcqFull] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0UnexpStop] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0HostTimeout] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdPattgenDoneCh0] = kTopEarlgreyPlicPeripheralPattgen,
  [kTopEarlgreyPlicIrqIdPattgenDoneCh1] = kTopEarlgreyPlicPeripheralPattgen,
  [kTopEarlgreyPlicIrqIdRvTimerTimerExpiredHart0Timer0] = kTopEarlgreyPlicPeripheralRvTimer,
  [kTopEarlgreyPlicIrqIdOtpCtrlOtpOperationDone] = kTopEarlgreyPlicPeripheralOtpCtrl,
  [kTopEarlgreyPlicIrqIdOtpCtrlOtpError] = kTopEarlgreyPlicPeripheralOtpCtrl,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassa] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassb] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassc] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassd] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdSpiHost0Error] = kTopEarlgreyPlicPeripheralSpiHost0,
  [kTopEarlgreyPlicIrqIdSpiHost0SpiEvent] = kTopEarlgreyPlicPeripheralSpiHost0,
  [kTopEarlgreyPlicIrqIdPwrmgrAonWakeup] = kTopEarlgreyPlicPeripheralPwrmgrAon,
  [kTopEarlgreyPlicIrqIdSysrstCtrlAonEventDetected] = kTopEarlgreyPlicPeripheralSysrstCtrlAon,
  [kTopEarlgreyPlicIrqIdAdcCtrlAonMatchDone] = kTopEarlgreyPlicPeripheralAdcCtrlAon,
  [kTopEarlgreyPlicIrqIdAonTimerAonWkupTimerExpired] = kTopEarlgreyPlicPeripheralAonTimerAon,
  [kTopEarlgreyPlicIrqIdAonTimerAonWdogTimerBark] = kTopEarlgreyPlicPeripheralAonTimerAon,
  [kTopEarlgreyPlicIrqIdSensorCtrlAonIoStatusChange] = kTopEarlgreyPlicPeripheralSensorCtrlAon,
  [kTopEarlgreyPlicIrqIdSensorCtrlAonInitStatusChange] = kTopEarlgreyPlicPeripheralSensorCtrlAon,
  [kTopEarlgreyPlicIrqIdFlashCtrlProgEmpty] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlProgLvl] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlRdFull] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlRdLvl] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlOpDone] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlCorrErr] = kTopEarlgreyPlicPeripheralFlashCtrl,
};


/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_alert_id_t` to
 * `top_earlgrey_alert_peripheral_t`.
 */
const top_earlgrey_alert_peripheral_t
    top_earlgrey_alert_for_peripheral[41] = {
  [kTopEarlgreyAlertIdUart0FatalFault] = kTopEarlgreyAlertPeripheralUart0,
  [kTopEarlgreyAlertIdGpioFatalFault] = kTopEarlgreyAlertPeripheralGpio,
  [kTopEarlgreyAlertIdSpiDeviceFatalFault] = kTopEarlgreyAlertPeripheralSpiDevice,
  [kTopEarlgreyAlertIdI2c0FatalFault] = kTopEarlgreyAlertPeripheralI2c0,
  [kTopEarlgreyAlertIdPattgenFatalFault] = kTopEarlgreyAlertPeripheralPattgen,
  [kTopEarlgreyAlertIdRvTimerFatalFault] = kTopEarlgreyAlertPeripheralRvTimer,
  [kTopEarlgreyAlertIdOtpCtrlFatalMacroError] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlFatalCheckError] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlFatalBusIntegError] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlFatalPrimOtpAlert] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlRecovPrimOtpAlert] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdLcCtrlFatalProgError] = kTopEarlgreyAlertPeripheralLcCtrl,
  [kTopEarlgreyAlertIdLcCtrlFatalStateError] = kTopEarlgreyAlertPeripheralLcCtrl,
  [kTopEarlgreyAlertIdLcCtrlFatalBusIntegError] = kTopEarlgreyAlertPeripheralLcCtrl,
  [kTopEarlgreyAlertIdSpiHost0FatalFault] = kTopEarlgreyAlertPeripheralSpiHost0,
  [kTopEarlgreyAlertIdPwrmgrAonFatalFault] = kTopEarlgreyAlertPeripheralPwrmgrAon,
  [kTopEarlgreyAlertIdRstmgrAonFatalFault] = kTopEarlgreyAlertPeripheralRstmgrAon,
  [kTopEarlgreyAlertIdRstmgrAonFatalCnstyFault] = kTopEarlgreyAlertPeripheralRstmgrAon,
  [kTopEarlgreyAlertIdClkmgrAonRecovFault] = kTopEarlgreyAlertPeripheralClkmgrAon,
  [kTopEarlgreyAlertIdClkmgrAonFatalFault] = kTopEarlgreyAlertPeripheralClkmgrAon,
  [kTopEarlgreyAlertIdSysrstCtrlAonFatalFault] = kTopEarlgreyAlertPeripheralSysrstCtrlAon,
  [kTopEarlgreyAlertIdAdcCtrlAonFatalFault] = kTopEarlgreyAlertPeripheralAdcCtrlAon,
  [kTopEarlgreyAlertIdPwmAonFatalFault] = kTopEarlgreyAlertPeripheralPwmAon,
  [kTopEarlgreyAlertIdPinmuxAonFatalFault] = kTopEarlgreyAlertPeripheralPinmuxAon,
  [kTopEarlgreyAlertIdAonTimerAonFatalFault] = kTopEarlgreyAlertPeripheralAonTimerAon,
  [kTopEarlgreyAlertIdSensorCtrlAonRecovAlert] = kTopEarlgreyAlertPeripheralSensorCtrlAon,
  [kTopEarlgreyAlertIdSensorCtrlAonFatalAlert] = kTopEarlgreyAlertPeripheralSensorCtrlAon,
  [kTopEarlgreyAlertIdSramCtrlRetAonFatalError] = kTopEarlgreyAlertPeripheralSramCtrlRetAon,
  [kTopEarlgreyAlertIdFlashCtrlRecovErr] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlFatalStdErr] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlFatalErr] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlFatalPrimFlashAlert] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlRecovPrimFlashAlert] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdRvDmFatalFault] = kTopEarlgreyAlertPeripheralRvDm,
  [kTopEarlgreyAlertIdRvPlicFatalFault] = kTopEarlgreyAlertPeripheralRvPlic,
  [kTopEarlgreyAlertIdSramCtrlMainFatalError] = kTopEarlgreyAlertPeripheralSramCtrlMain,
  [kTopEarlgreyAlertIdRomCtrlFatal] = kTopEarlgreyAlertPeripheralRomCtrl,
  [kTopEarlgreyAlertIdRvCoreIbexFatalSwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
  [kTopEarlgreyAlertIdRvCoreIbexRecovSwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
  [kTopEarlgreyAlertIdRvCoreIbexFatalHwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
  [kTopEarlgreyAlertIdRvCoreIbexRecovHwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
};
