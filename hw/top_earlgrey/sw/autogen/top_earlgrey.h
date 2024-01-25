// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENTITAN_HW\TOP_EARLGREY\SW\AUTOGEN_TOP_EARLGREY_H_
#define OPENTITAN_HW\TOP_EARLGREY\SW\AUTOGEN_TOP_EARLGREY_H_

/**
 * @file
 * @brief Top-specific Definitions
 *
 * This file contains preprocessor and type definitions for use within the
 * device C/C++ codebase.
 *
 * These definitions are for information that depends on the top-specific chip
 * configuration, which includes:
 * - Device Memory Information (for Peripherals and Memory)
 * - PLIC Interrupt ID Names and Source Mappings
 * - Alert ID Names and Source Mappings
 * - Pinmux Pin/Select Names
 * - Power Manager Wakeups
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Peripheral base address for data_proc in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_DATA_PROC_BASE_ADDR 0x60500000u

/**
 * Peripheral size for data_proc in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_DATA_PROC_BASE_ADDR and
 * `TOP_EARLGREY_DATA_PROC_BASE_ADDR + TOP_EARLGREY_DATA_PROC_SIZE_BYTES`.
 */
#define TOP_EARLGREY_DATA_PROC_SIZE_BYTES 0x40u

/**
 * Peripheral base address for uart0 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_UART0_BASE_ADDR 0x80000000u

/**
 * Peripheral size for uart0 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_UART0_BASE_ADDR and
 * `TOP_EARLGREY_UART0_BASE_ADDR + TOP_EARLGREY_UART0_SIZE_BYTES`.
 */
#define TOP_EARLGREY_UART0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for gpio in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_GPIO_BASE_ADDR 0x80010000u

/**
 * Peripheral size for gpio in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_GPIO_BASE_ADDR and
 * `TOP_EARLGREY_GPIO_BASE_ADDR + TOP_EARLGREY_GPIO_SIZE_BYTES`.
 */
#define TOP_EARLGREY_GPIO_SIZE_BYTES 0x40u

/**
 * Peripheral base address for spi_device in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SPI_DEVICE_BASE_ADDR 0x80020000u

/**
 * Peripheral size for spi_device in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_SPI_DEVICE_BASE_ADDR and
 * `TOP_EARLGREY_SPI_DEVICE_BASE_ADDR + TOP_EARLGREY_SPI_DEVICE_SIZE_BYTES`.
 */
#define TOP_EARLGREY_SPI_DEVICE_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for i2c0 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_I2C0_BASE_ADDR 0x80030000u

/**
 * Peripheral size for i2c0 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_I2C0_BASE_ADDR and
 * `TOP_EARLGREY_I2C0_BASE_ADDR + TOP_EARLGREY_I2C0_SIZE_BYTES`.
 */
#define TOP_EARLGREY_I2C0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pattgen in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PATTGEN_BASE_ADDR 0x90000000u

/**
 * Peripheral size for pattgen in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_PATTGEN_BASE_ADDR and
 * `TOP_EARLGREY_PATTGEN_BASE_ADDR + TOP_EARLGREY_PATTGEN_SIZE_BYTES`.
 */
#define TOP_EARLGREY_PATTGEN_SIZE_BYTES 0x40u

/**
 * Peripheral base address for rv_timer in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RV_TIMER_BASE_ADDR 0x90010000u

/**
 * Peripheral size for rv_timer in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_RV_TIMER_BASE_ADDR and
 * `TOP_EARLGREY_RV_TIMER_BASE_ADDR + TOP_EARLGREY_RV_TIMER_SIZE_BYTES`.
 */
#define TOP_EARLGREY_RV_TIMER_SIZE_BYTES 0x200u

/**
 * Peripheral base address for core device on otp_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_OTP_CTRL_CORE_BASE_ADDR 0xA0000000u

/**
 * Peripheral size for core device on otp_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_OTP_CTRL_CORE_BASE_ADDR and
 * `TOP_EARLGREY_OTP_CTRL_CORE_BASE_ADDR + TOP_EARLGREY_OTP_CTRL_CORE_SIZE_BYTES`.
 */
#define TOP_EARLGREY_OTP_CTRL_CORE_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for prim device on otp_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_OTP_CTRL_PRIM_BASE_ADDR 0xB0001000u

/**
 * Peripheral size for prim device on otp_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_OTP_CTRL_PRIM_BASE_ADDR and
 * `TOP_EARLGREY_OTP_CTRL_PRIM_BASE_ADDR + TOP_EARLGREY_OTP_CTRL_PRIM_SIZE_BYTES`.
 */
#define TOP_EARLGREY_OTP_CTRL_PRIM_SIZE_BYTES 0x20u

/**
 * Peripheral base address for spi_host0 in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SPI_HOST0_BASE_ADDR 0x70100000u

/**
 * Peripheral size for spi_host0 in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_SPI_HOST0_BASE_ADDR and
 * `TOP_EARLGREY_SPI_HOST0_BASE_ADDR + TOP_EARLGREY_SPI_HOST0_SIZE_BYTES`.
 */
#define TOP_EARLGREY_SPI_HOST0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for pwrmgr_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PWRMGR_AON_BASE_ADDR 0x80040000u

/**
 * Peripheral size for pwrmgr_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_PWRMGR_AON_BASE_ADDR and
 * `TOP_EARLGREY_PWRMGR_AON_BASE_ADDR + TOP_EARLGREY_PWRMGR_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_PWRMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rstmgr_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RSTMGR_AON_BASE_ADDR 0x80050000u

/**
 * Peripheral size for rstmgr_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_RSTMGR_AON_BASE_ADDR and
 * `TOP_EARLGREY_RSTMGR_AON_BASE_ADDR + TOP_EARLGREY_RSTMGR_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_RSTMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for clkmgr_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_CLKMGR_AON_BASE_ADDR 0x80060000u

/**
 * Peripheral size for clkmgr_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_CLKMGR_AON_BASE_ADDR and
 * `TOP_EARLGREY_CLKMGR_AON_BASE_ADDR + TOP_EARLGREY_CLKMGR_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_CLKMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for sysrst_ctrl_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR 0x80070000u

/**
 * Peripheral size for sysrst_ctrl_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR and
 * `TOP_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR + TOP_EARLGREY_SYSRST_CTRL_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_SYSRST_CTRL_AON_SIZE_BYTES 0x100u

/**
 * Peripheral base address for adc_ctrl_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_ADC_CTRL_AON_BASE_ADDR 0x80080000u

/**
 * Peripheral size for adc_ctrl_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_ADC_CTRL_AON_BASE_ADDR and
 * `TOP_EARLGREY_ADC_CTRL_AON_BASE_ADDR + TOP_EARLGREY_ADC_CTRL_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_ADC_CTRL_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pwm_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PWM_AON_BASE_ADDR 0x80090000u

/**
 * Peripheral size for pwm_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_PWM_AON_BASE_ADDR and
 * `TOP_EARLGREY_PWM_AON_BASE_ADDR + TOP_EARLGREY_PWM_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_PWM_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pinmux_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_PINMUX_AON_BASE_ADDR 0x800A0000u

/**
 * Peripheral size for pinmux_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_PINMUX_AON_BASE_ADDR and
 * `TOP_EARLGREY_PINMUX_AON_BASE_ADDR + TOP_EARLGREY_PINMUX_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_PINMUX_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for aon_timer_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_AON_TIMER_AON_BASE_ADDR 0x800B0000u

/**
 * Peripheral size for aon_timer_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_AON_TIMER_AON_BASE_ADDR and
 * `TOP_EARLGREY_AON_TIMER_AON_BASE_ADDR + TOP_EARLGREY_AON_TIMER_AON_SIZE_BYTES`.
 */
#define TOP_EARLGREY_AON_TIMER_AON_SIZE_BYTES 0x40u

/**
 * Peripheral base address for lc_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_LC_CTRL_BASE_ADDR 0x800C0000u

/**
 * Peripheral size for lc_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_LC_CTRL_BASE_ADDR and
 * `TOP_EARLGREY_LC_CTRL_BASE_ADDR + TOP_EARLGREY_LC_CTRL_SIZE_BYTES`.
 */
#define TOP_EARLGREY_LC_CTRL_SIZE_BYTES 0x100u

/**
 * Peripheral base address for ast in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_AST_BASE_ADDR 0x40480000u

/**
 * Peripheral size for ast in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_AST_BASE_ADDR and
 * `TOP_EARLGREY_AST_BASE_ADDR + TOP_EARLGREY_AST_SIZE_BYTES`.
 */
#define TOP_EARLGREY_AST_SIZE_BYTES 0x400u

/**
 * Peripheral base address for regs device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR 0x60400000u

/**
 * Peripheral size for regs device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR and
 * `TOP_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR + TOP_EARLGREY_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES`.
 */
#define TOP_EARLGREY_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR 0x60000000u

/**
 * Peripheral size for ram device on sram_ctrl_ret_aon in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR and
 * `TOP_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR + TOP_EARLGREY_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES`.
 */
#define TOP_EARLGREY_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for regs device on rv_dm in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RV_DM_REGS_BASE_ADDR 0x60300000u

/**
 * Peripheral size for regs device on rv_dm in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_RV_DM_REGS_BASE_ADDR and
 * `TOP_EARLGREY_RV_DM_REGS_BASE_ADDR + TOP_EARLGREY_RV_DM_REGS_SIZE_BYTES`.
 */
#define TOP_EARLGREY_RV_DM_REGS_SIZE_BYTES 0x4u

/**
 * Peripheral base address for mem device on rv_dm in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RV_DM_MEM_BASE_ADDR 0x10000u

/**
 * Peripheral size for mem device on rv_dm in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_RV_DM_MEM_BASE_ADDR and
 * `TOP_EARLGREY_RV_DM_MEM_BASE_ADDR + TOP_EARLGREY_RV_DM_MEM_SIZE_BYTES`.
 */
#define TOP_EARLGREY_RV_DM_MEM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for rv_plic in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RV_PLIC_BASE_ADDR 0x48000000u

/**
 * Peripheral size for rv_plic in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_RV_PLIC_BASE_ADDR and
 * `TOP_EARLGREY_RV_PLIC_BASE_ADDR + TOP_EARLGREY_RV_PLIC_SIZE_BYTES`.
 */
#define TOP_EARLGREY_RV_PLIC_SIZE_BYTES 0x8000000u

/**
 * Peripheral base address for regs device on sram_ctrl_main in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR 0x60200000u

/**
 * Peripheral size for regs device on sram_ctrl_main in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR and
 * `TOP_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR + TOP_EARLGREY_SRAM_CTRL_MAIN_REGS_SIZE_BYTES`.
 */
#define TOP_EARLGREY_SRAM_CTRL_MAIN_REGS_SIZE_BYTES 0x20u

/**
 * Peripheral base address for ram device on sram_ctrl_main in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR 0x10000000u

/**
 * Peripheral size for ram device on sram_ctrl_main in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR and
 * `TOP_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR + TOP_EARLGREY_SRAM_CTRL_MAIN_RAM_SIZE_BYTES`.
 */
#define TOP_EARLGREY_SRAM_CTRL_MAIN_RAM_SIZE_BYTES 0x20000u

/**
 * Peripheral base address for regs device on rom_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_ROM_CTRL_REGS_BASE_ADDR 0x60600000u

/**
 * Peripheral size for regs device on rom_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_ROM_CTRL_REGS_BASE_ADDR and
 * `TOP_EARLGREY_ROM_CTRL_REGS_BASE_ADDR + TOP_EARLGREY_ROM_CTRL_REGS_SIZE_BYTES`.
 */
#define TOP_EARLGREY_ROM_CTRL_REGS_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rom device on rom_ctrl in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_ROM_CTRL_ROM_BASE_ADDR 0x8000u

/**
 * Peripheral size for rom device on rom_ctrl in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_ROM_CTRL_ROM_BASE_ADDR and
 * `TOP_EARLGREY_ROM_CTRL_ROM_BASE_ADDR + TOP_EARLGREY_ROM_CTRL_ROM_SIZE_BYTES`.
 */
#define TOP_EARLGREY_ROM_CTRL_ROM_SIZE_BYTES 0x8000u

/**
 * Peripheral base address for cfg device on rv_core_ibex in top earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR 0x60700000u

/**
 * Peripheral size for cfg device on rv_core_ibex in top earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR and
 * `TOP_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR + TOP_EARLGREY_RV_CORE_IBEX_CFG_SIZE_BYTES`.
 */
#define TOP_EARLGREY_RV_CORE_IBEX_CFG_SIZE_BYTES 0x100u


/**
 * Memory base address for ram_ret_aon in top earlgrey.
 */
#define TOP_EARLGREY_RAM_RET_AON_BASE_ADDR 0x60000000u

/**
 * Memory size for ram_ret_aon in top earlgrey.
 */
#define TOP_EARLGREY_RAM_RET_AON_SIZE_BYTES 0x1000u

/**
 * Memory base address for ram_main in top earlgrey.
 */
#define TOP_EARLGREY_RAM_MAIN_BASE_ADDR 0x10000000u

/**
 * Memory size for ram_main in top earlgrey.
 */
#define TOP_EARLGREY_RAM_MAIN_SIZE_BYTES 0x20000u

/**
 * Memory base address for rom in top earlgrey.
 */
#define TOP_EARLGREY_ROM_BASE_ADDR 0x8000u

/**
 * Memory size for rom in top earlgrey.
 */
#define TOP_EARLGREY_ROM_SIZE_BYTES 0x8000u


/**
 * PLIC Interrupt Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * interrupt.
 */
typedef enum top_earlgrey_plic_peripheral {
  kTopEarlgreyPlicPeripheralUnknown = 0, /**< Unknown Peripheral */
  kTopEarlgreyPlicPeripheralDataProc = 1, /**< data_proc */
  kTopEarlgreyPlicPeripheralUart0 = 2, /**< uart0 */
  kTopEarlgreyPlicPeripheralGpio = 3, /**< gpio */
  kTopEarlgreyPlicPeripheralSpiDevice = 4, /**< spi_device */
  kTopEarlgreyPlicPeripheralI2c0 = 5, /**< i2c0 */
  kTopEarlgreyPlicPeripheralPattgen = 6, /**< pattgen */
  kTopEarlgreyPlicPeripheralRvTimer = 7, /**< rv_timer */
  kTopEarlgreyPlicPeripheralOtpCtrl = 8, /**< otp_ctrl */
  kTopEarlgreyPlicPeripheralSpiHost0 = 9, /**< spi_host0 */
  kTopEarlgreyPlicPeripheralPwrmgrAon = 10, /**< pwrmgr_aon */
  kTopEarlgreyPlicPeripheralSysrstCtrlAon = 11, /**< sysrst_ctrl_aon */
  kTopEarlgreyPlicPeripheralAdcCtrlAon = 12, /**< adc_ctrl_aon */
  kTopEarlgreyPlicPeripheralAonTimerAon = 13, /**< aon_timer_aon */
  kTopEarlgreyPlicPeripheralLast = 13, /**< \internal Final PLIC peripheral */
} top_earlgrey_plic_peripheral_t;

/**
 * PLIC Interrupt Source.
 *
 * Enumeration of all PLIC interrupt sources. The interrupt sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_earlgrey_plic_irq_id {
  kTopEarlgreyPlicIrqIdNone = 0, /**< No Interrupt */
  kTopEarlgreyPlicIrqIdDataProcTxWatermark = 1, /**< data_proc_tx_watermark */
  kTopEarlgreyPlicIrqIdDataProcRxWatermark = 2, /**< data_proc_rx_watermark */
  kTopEarlgreyPlicIrqIdDataProcTxEmpty = 3, /**< data_proc_tx_empty */
  kTopEarlgreyPlicIrqIdDataProcRxOverflow = 4, /**< data_proc_rx_overflow */
  kTopEarlgreyPlicIrqIdDataProcRxFrameErr = 5, /**< data_proc_rx_frame_err */
  kTopEarlgreyPlicIrqIdDataProcRxBreakErr = 6, /**< data_proc_rx_break_err */
  kTopEarlgreyPlicIrqIdDataProcRxTimeout = 7, /**< data_proc_rx_timeout */
  kTopEarlgreyPlicIrqIdDataProcRxParityErr = 8, /**< data_proc_rx_parity_err */
  kTopEarlgreyPlicIrqIdUart0TxWatermark = 9, /**< uart0_tx_watermark */
  kTopEarlgreyPlicIrqIdUart0RxWatermark = 10, /**< uart0_rx_watermark */
  kTopEarlgreyPlicIrqIdUart0TxEmpty = 11, /**< uart0_tx_empty */
  kTopEarlgreyPlicIrqIdUart0RxOverflow = 12, /**< uart0_rx_overflow */
  kTopEarlgreyPlicIrqIdUart0RxFrameErr = 13, /**< uart0_rx_frame_err */
  kTopEarlgreyPlicIrqIdUart0RxBreakErr = 14, /**< uart0_rx_break_err */
  kTopEarlgreyPlicIrqIdUart0RxTimeout = 15, /**< uart0_rx_timeout */
  kTopEarlgreyPlicIrqIdUart0RxParityErr = 16, /**< uart0_rx_parity_err */
  kTopEarlgreyPlicIrqIdGpioGpio0 = 17, /**< gpio_gpio 0 */
  kTopEarlgreyPlicIrqIdGpioGpio1 = 18, /**< gpio_gpio 1 */
  kTopEarlgreyPlicIrqIdGpioGpio2 = 19, /**< gpio_gpio 2 */
  kTopEarlgreyPlicIrqIdGpioGpio3 = 20, /**< gpio_gpio 3 */
  kTopEarlgreyPlicIrqIdGpioGpio4 = 21, /**< gpio_gpio 4 */
  kTopEarlgreyPlicIrqIdGpioGpio5 = 22, /**< gpio_gpio 5 */
  kTopEarlgreyPlicIrqIdGpioGpio6 = 23, /**< gpio_gpio 6 */
  kTopEarlgreyPlicIrqIdGpioGpio7 = 24, /**< gpio_gpio 7 */
  kTopEarlgreyPlicIrqIdGpioGpio8 = 25, /**< gpio_gpio 8 */
  kTopEarlgreyPlicIrqIdGpioGpio9 = 26, /**< gpio_gpio 9 */
  kTopEarlgreyPlicIrqIdGpioGpio10 = 27, /**< gpio_gpio 10 */
  kTopEarlgreyPlicIrqIdGpioGpio11 = 28, /**< gpio_gpio 11 */
  kTopEarlgreyPlicIrqIdGpioGpio12 = 29, /**< gpio_gpio 12 */
  kTopEarlgreyPlicIrqIdGpioGpio13 = 30, /**< gpio_gpio 13 */
  kTopEarlgreyPlicIrqIdGpioGpio14 = 31, /**< gpio_gpio 14 */
  kTopEarlgreyPlicIrqIdGpioGpio15 = 32, /**< gpio_gpio 15 */
  kTopEarlgreyPlicIrqIdGpioGpio16 = 33, /**< gpio_gpio 16 */
  kTopEarlgreyPlicIrqIdGpioGpio17 = 34, /**< gpio_gpio 17 */
  kTopEarlgreyPlicIrqIdGpioGpio18 = 35, /**< gpio_gpio 18 */
  kTopEarlgreyPlicIrqIdGpioGpio19 = 36, /**< gpio_gpio 19 */
  kTopEarlgreyPlicIrqIdGpioGpio20 = 37, /**< gpio_gpio 20 */
  kTopEarlgreyPlicIrqIdGpioGpio21 = 38, /**< gpio_gpio 21 */
  kTopEarlgreyPlicIrqIdGpioGpio22 = 39, /**< gpio_gpio 22 */
  kTopEarlgreyPlicIrqIdGpioGpio23 = 40, /**< gpio_gpio 23 */
  kTopEarlgreyPlicIrqIdGpioGpio24 = 41, /**< gpio_gpio 24 */
  kTopEarlgreyPlicIrqIdGpioGpio25 = 42, /**< gpio_gpio 25 */
  kTopEarlgreyPlicIrqIdGpioGpio26 = 43, /**< gpio_gpio 26 */
  kTopEarlgreyPlicIrqIdGpioGpio27 = 44, /**< gpio_gpio 27 */
  kTopEarlgreyPlicIrqIdGpioGpio28 = 45, /**< gpio_gpio 28 */
  kTopEarlgreyPlicIrqIdGpioGpio29 = 46, /**< gpio_gpio 29 */
  kTopEarlgreyPlicIrqIdGpioGpio30 = 47, /**< gpio_gpio 30 */
  kTopEarlgreyPlicIrqIdGpioGpio31 = 48, /**< gpio_gpio 31 */
  kTopEarlgreyPlicIrqIdSpiDeviceGenericRxFull = 49, /**< spi_device_generic_rx_full */
  kTopEarlgreyPlicIrqIdSpiDeviceGenericRxWatermark = 50, /**< spi_device_generic_rx_watermark */
  kTopEarlgreyPlicIrqIdSpiDeviceGenericTxWatermark = 51, /**< spi_device_generic_tx_watermark */
  kTopEarlgreyPlicIrqIdSpiDeviceGenericRxError = 52, /**< spi_device_generic_rx_error */
  kTopEarlgreyPlicIrqIdSpiDeviceGenericRxOverflow = 53, /**< spi_device_generic_rx_overflow */
  kTopEarlgreyPlicIrqIdSpiDeviceGenericTxUnderflow = 54, /**< spi_device_generic_tx_underflow */
  kTopEarlgreyPlicIrqIdSpiDeviceUploadCmdfifoNotEmpty = 55, /**< spi_device_upload_cmdfifo_not_empty */
  kTopEarlgreyPlicIrqIdSpiDeviceUploadPayloadNotEmpty = 56, /**< spi_device_upload_payload_not_empty */
  kTopEarlgreyPlicIrqIdSpiDeviceUploadPayloadOverflow = 57, /**< spi_device_upload_payload_overflow */
  kTopEarlgreyPlicIrqIdSpiDeviceReadbufWatermark = 58, /**< spi_device_readbuf_watermark */
  kTopEarlgreyPlicIrqIdSpiDeviceReadbufFlip = 59, /**< spi_device_readbuf_flip */
  kTopEarlgreyPlicIrqIdSpiDeviceTpmHeaderNotEmpty = 60, /**< spi_device_tpm_header_not_empty */
  kTopEarlgreyPlicIrqIdI2c0FmtThreshold = 61, /**< i2c0_fmt_threshold */
  kTopEarlgreyPlicIrqIdI2c0RxThreshold = 62, /**< i2c0_rx_threshold */
  kTopEarlgreyPlicIrqIdI2c0FmtOverflow = 63, /**< i2c0_fmt_overflow */
  kTopEarlgreyPlicIrqIdI2c0RxOverflow = 64, /**< i2c0_rx_overflow */
  kTopEarlgreyPlicIrqIdI2c0Nak = 65, /**< i2c0_nak */
  kTopEarlgreyPlicIrqIdI2c0SclInterference = 66, /**< i2c0_scl_interference */
  kTopEarlgreyPlicIrqIdI2c0SdaInterference = 67, /**< i2c0_sda_interference */
  kTopEarlgreyPlicIrqIdI2c0StretchTimeout = 68, /**< i2c0_stretch_timeout */
  kTopEarlgreyPlicIrqIdI2c0SdaUnstable = 69, /**< i2c0_sda_unstable */
  kTopEarlgreyPlicIrqIdI2c0CmdComplete = 70, /**< i2c0_cmd_complete */
  kTopEarlgreyPlicIrqIdI2c0TxStretch = 71, /**< i2c0_tx_stretch */
  kTopEarlgreyPlicIrqIdI2c0TxOverflow = 72, /**< i2c0_tx_overflow */
  kTopEarlgreyPlicIrqIdI2c0AcqFull = 73, /**< i2c0_acq_full */
  kTopEarlgreyPlicIrqIdI2c0UnexpStop = 74, /**< i2c0_unexp_stop */
  kTopEarlgreyPlicIrqIdI2c0HostTimeout = 75, /**< i2c0_host_timeout */
  kTopEarlgreyPlicIrqIdPattgenDoneCh0 = 76, /**< pattgen_done_ch0 */
  kTopEarlgreyPlicIrqIdPattgenDoneCh1 = 77, /**< pattgen_done_ch1 */
  kTopEarlgreyPlicIrqIdRvTimerTimerExpiredHart0Timer0 = 78, /**< rv_timer_timer_expired_hart0_timer0 */
  kTopEarlgreyPlicIrqIdOtpCtrlOtpOperationDone = 79, /**< otp_ctrl_otp_operation_done */
  kTopEarlgreyPlicIrqIdOtpCtrlOtpError = 80, /**< otp_ctrl_otp_error */
  kTopEarlgreyPlicIrqIdSpiHost0Error = 81, /**< spi_host0_error */
  kTopEarlgreyPlicIrqIdSpiHost0SpiEvent = 82, /**< spi_host0_spi_event */
  kTopEarlgreyPlicIrqIdPwrmgrAonWakeup = 83, /**< pwrmgr_aon_wakeup */
  kTopEarlgreyPlicIrqIdSysrstCtrlAonEventDetected = 84, /**< sysrst_ctrl_aon_event_detected */
  kTopEarlgreyPlicIrqIdAdcCtrlAonMatchDone = 85, /**< adc_ctrl_aon_match_done */
  kTopEarlgreyPlicIrqIdAonTimerAonWkupTimerExpired = 86, /**< aon_timer_aon_wkup_timer_expired */
  kTopEarlgreyPlicIrqIdAonTimerAonWdogTimerBark = 87, /**< aon_timer_aon_wdog_timer_bark */
  kTopEarlgreyPlicIrqIdLast = 87, /**< \internal The Last Valid Interrupt ID. */
} top_earlgrey_plic_irq_id_t;

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_plic_irq_id_t` to
 * `top_earlgrey_plic_peripheral_t`.
 */
extern const top_earlgrey_plic_peripheral_t
    top_earlgrey_plic_interrupt_for_peripheral[88];

/**
 * PLIC Interrupt Target.
 *
 * Enumeration used to determine which set of IE, CC, threshold registers to
 * access for a given interrupt target.
 */
typedef enum top_earlgrey_plic_target {
  kTopEarlgreyPlicTargetIbex0 = 0, /**< Ibex Core 0 */
  kTopEarlgreyPlicTargetLast = 0, /**< \internal Final PLIC target */
} top_earlgrey_plic_target_t;

/**
 * Alert Handler Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * alert.
 */
typedef enum top_earlgrey_alert_peripheral {
  kTopEarlgreyAlertPeripheralDataProc = 0, /**< data_proc */
  kTopEarlgreyAlertPeripheralUart0 = 1, /**< uart0 */
  kTopEarlgreyAlertPeripheralGpio = 2, /**< gpio */
  kTopEarlgreyAlertPeripheralSpiDevice = 3, /**< spi_device */
  kTopEarlgreyAlertPeripheralI2c0 = 4, /**< i2c0 */
  kTopEarlgreyAlertPeripheralPattgen = 5, /**< pattgen */
  kTopEarlgreyAlertPeripheralRvTimer = 6, /**< rv_timer */
  kTopEarlgreyAlertPeripheralOtpCtrl = 7, /**< otp_ctrl */
  kTopEarlgreyAlertPeripheralSpiHost0 = 8, /**< spi_host0 */
  kTopEarlgreyAlertPeripheralPwrmgrAon = 9, /**< pwrmgr_aon */
  kTopEarlgreyAlertPeripheralRstmgrAon = 10, /**< rstmgr_aon */
  kTopEarlgreyAlertPeripheralClkmgrAon = 11, /**< clkmgr_aon */
  kTopEarlgreyAlertPeripheralSysrstCtrlAon = 12, /**< sysrst_ctrl_aon */
  kTopEarlgreyAlertPeripheralAdcCtrlAon = 13, /**< adc_ctrl_aon */
  kTopEarlgreyAlertPeripheralPwmAon = 14, /**< pwm_aon */
  kTopEarlgreyAlertPeripheralPinmuxAon = 15, /**< pinmux_aon */
  kTopEarlgreyAlertPeripheralAonTimerAon = 16, /**< aon_timer_aon */
  kTopEarlgreyAlertPeripheralLcCtrl = 17, /**< lc_ctrl */
  kTopEarlgreyAlertPeripheralSramCtrlRetAon = 18, /**< sram_ctrl_ret_aon */
  kTopEarlgreyAlertPeripheralRvDm = 19, /**< rv_dm */
  kTopEarlgreyAlertPeripheralRvPlic = 20, /**< rv_plic */
  kTopEarlgreyAlertPeripheralSramCtrlMain = 21, /**< sram_ctrl_main */
  kTopEarlgreyAlertPeripheralRomCtrl = 22, /**< rom_ctrl */
  kTopEarlgreyAlertPeripheralRvCoreIbex = 23, /**< rv_core_ibex */
  kTopEarlgreyAlertPeripheralLast = 23, /**< \internal Final Alert peripheral */
} top_earlgrey_alert_peripheral_t;

/**
 * Alert Handler Alert Source.
 *
 * Enumeration of all Alert Handler Alert Sources. The alert sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_earlgrey_alert_id {
  kTopEarlgreyAlertIdDataProcFatalFault = 0, /**< data_proc_fatal_fault */
  kTopEarlgreyAlertIdUart0FatalFault = 1, /**< uart0_fatal_fault */
  kTopEarlgreyAlertIdGpioFatalFault = 2, /**< gpio_fatal_fault */
  kTopEarlgreyAlertIdSpiDeviceFatalFault = 3, /**< spi_device_fatal_fault */
  kTopEarlgreyAlertIdI2c0FatalFault = 4, /**< i2c0_fatal_fault */
  kTopEarlgreyAlertIdPattgenFatalFault = 5, /**< pattgen_fatal_fault */
  kTopEarlgreyAlertIdRvTimerFatalFault = 6, /**< rv_timer_fatal_fault */
  kTopEarlgreyAlertIdOtpCtrlFatalMacroError = 7, /**< otp_ctrl_fatal_macro_error */
  kTopEarlgreyAlertIdOtpCtrlFatalCheckError = 8, /**< otp_ctrl_fatal_check_error */
  kTopEarlgreyAlertIdOtpCtrlFatalBusIntegError = 9, /**< otp_ctrl_fatal_bus_integ_error */
  kTopEarlgreyAlertIdOtpCtrlFatalPrimOtpAlert = 10, /**< otp_ctrl_fatal_prim_otp_alert */
  kTopEarlgreyAlertIdOtpCtrlRecovPrimOtpAlert = 11, /**< otp_ctrl_recov_prim_otp_alert */
  kTopEarlgreyAlertIdSpiHost0FatalFault = 12, /**< spi_host0_fatal_fault */
  kTopEarlgreyAlertIdPwrmgrAonFatalFault = 13, /**< pwrmgr_aon_fatal_fault */
  kTopEarlgreyAlertIdRstmgrAonFatalFault = 14, /**< rstmgr_aon_fatal_fault */
  kTopEarlgreyAlertIdRstmgrAonFatalCnstyFault = 15, /**< rstmgr_aon_fatal_cnsty_fault */
  kTopEarlgreyAlertIdClkmgrAonRecovFault = 16, /**< clkmgr_aon_recov_fault */
  kTopEarlgreyAlertIdClkmgrAonFatalFault = 17, /**< clkmgr_aon_fatal_fault */
  kTopEarlgreyAlertIdSysrstCtrlAonFatalFault = 18, /**< sysrst_ctrl_aon_fatal_fault */
  kTopEarlgreyAlertIdAdcCtrlAonFatalFault = 19, /**< adc_ctrl_aon_fatal_fault */
  kTopEarlgreyAlertIdPwmAonFatalFault = 20, /**< pwm_aon_fatal_fault */
  kTopEarlgreyAlertIdPinmuxAonFatalFault = 21, /**< pinmux_aon_fatal_fault */
  kTopEarlgreyAlertIdAonTimerAonFatalFault = 22, /**< aon_timer_aon_fatal_fault */
  kTopEarlgreyAlertIdLcCtrlFatalProgError = 23, /**< lc_ctrl_fatal_prog_error */
  kTopEarlgreyAlertIdLcCtrlFatalStateError = 24, /**< lc_ctrl_fatal_state_error */
  kTopEarlgreyAlertIdLcCtrlFatalBusIntegError = 25, /**< lc_ctrl_fatal_bus_integ_error */
  kTopEarlgreyAlertIdSramCtrlRetAonFatalError = 26, /**< sram_ctrl_ret_aon_fatal_error */
  kTopEarlgreyAlertIdRvDmFatalFault = 27, /**< rv_dm_fatal_fault */
  kTopEarlgreyAlertIdRvPlicFatalFault = 28, /**< rv_plic_fatal_fault */
  kTopEarlgreyAlertIdSramCtrlMainFatalError = 29, /**< sram_ctrl_main_fatal_error */
  kTopEarlgreyAlertIdRomCtrlFatal = 30, /**< rom_ctrl_fatal */
  kTopEarlgreyAlertIdRvCoreIbexFatalSwErr = 31, /**< rv_core_ibex_fatal_sw_err */
  kTopEarlgreyAlertIdRvCoreIbexRecovSwErr = 32, /**< rv_core_ibex_recov_sw_err */
  kTopEarlgreyAlertIdRvCoreIbexFatalHwErr = 33, /**< rv_core_ibex_fatal_hw_err */
  kTopEarlgreyAlertIdRvCoreIbexRecovHwErr = 34, /**< rv_core_ibex_recov_hw_err */
  kTopEarlgreyAlertIdLast = 34, /**< \internal The Last Valid Alert ID. */
} top_earlgrey_alert_id_t;

/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_alert_id_t` to
 * `top_earlgrey_alert_peripheral_t`.
 */
extern const top_earlgrey_alert_peripheral_t
    top_earlgrey_alert_for_peripheral[35];

#define PINMUX_MIO_PERIPH_INSEL_IDX_OFFSET 2

// PERIPH_INSEL ranges from 0 to NUM_MIO_PADS + 2 -1}
//  0 and 1 are tied to value 0 and 1
#define NUM_MIO_PADS 48
#define NUM_DIO_PADS 13

#define PINMUX_PERIPH_OUTSEL_IDX_OFFSET 3

/**
 * Pinmux Peripheral Input.
 */
typedef enum top_earlgrey_pinmux_peripheral_in {
  kTopEarlgreyPinmuxPeripheralInGpioGpio0 = 0, /**< Peripheral Input 0 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio1 = 1, /**< Peripheral Input 1 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio2 = 2, /**< Peripheral Input 2 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio3 = 3, /**< Peripheral Input 3 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio4 = 4, /**< Peripheral Input 4 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio5 = 5, /**< Peripheral Input 5 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio6 = 6, /**< Peripheral Input 6 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio7 = 7, /**< Peripheral Input 7 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio8 = 8, /**< Peripheral Input 8 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio9 = 9, /**< Peripheral Input 9 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio10 = 10, /**< Peripheral Input 10 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio11 = 11, /**< Peripheral Input 11 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio12 = 12, /**< Peripheral Input 12 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio13 = 13, /**< Peripheral Input 13 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio14 = 14, /**< Peripheral Input 14 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio15 = 15, /**< Peripheral Input 15 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio16 = 16, /**< Peripheral Input 16 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio17 = 17, /**< Peripheral Input 17 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio18 = 18, /**< Peripheral Input 18 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio19 = 19, /**< Peripheral Input 19 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio20 = 20, /**< Peripheral Input 20 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio21 = 21, /**< Peripheral Input 21 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio22 = 22, /**< Peripheral Input 22 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio23 = 23, /**< Peripheral Input 23 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio24 = 24, /**< Peripheral Input 24 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio25 = 25, /**< Peripheral Input 25 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio26 = 26, /**< Peripheral Input 26 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio27 = 27, /**< Peripheral Input 27 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio28 = 28, /**< Peripheral Input 28 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio29 = 29, /**< Peripheral Input 29 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio30 = 30, /**< Peripheral Input 30 */
  kTopEarlgreyPinmuxPeripheralInGpioGpio31 = 31, /**< Peripheral Input 31 */
  kTopEarlgreyPinmuxPeripheralInI2c0Sda = 32, /**< Peripheral Input 32 */
  kTopEarlgreyPinmuxPeripheralInI2c0Scl = 33, /**< Peripheral Input 33 */
  kTopEarlgreyPinmuxPeripheralInUart0Rx = 34, /**< Peripheral Input 34 */
  kTopEarlgreyPinmuxPeripheralInSpiDeviceTpmCsb = 35, /**< Peripheral Input 35 */
  kTopEarlgreyPinmuxPeripheralInSysrstCtrlAonAcPresent = 36, /**< Peripheral Input 36 */
  kTopEarlgreyPinmuxPeripheralInSysrstCtrlAonKey0In = 37, /**< Peripheral Input 37 */
  kTopEarlgreyPinmuxPeripheralInSysrstCtrlAonKey1In = 38, /**< Peripheral Input 38 */
  kTopEarlgreyPinmuxPeripheralInSysrstCtrlAonKey2In = 39, /**< Peripheral Input 39 */
  kTopEarlgreyPinmuxPeripheralInSysrstCtrlAonPwrbIn = 40, /**< Peripheral Input 40 */
  kTopEarlgreyPinmuxPeripheralInSysrstCtrlAonLidOpen = 41, /**< Peripheral Input 41 */
  kTopEarlgreyPinmuxPeripheralInLast = 41, /**< \internal Last valid peripheral input */
} top_earlgrey_pinmux_peripheral_in_t;

/**
 * Pinmux MIO Input Selector.
 */
typedef enum top_earlgrey_pinmux_insel {
  kTopEarlgreyPinmuxInselConstantZero = 0, /**< Tie constantly to zero */
  kTopEarlgreyPinmuxInselConstantOne = 1, /**< Tie constantly to one */
  kTopEarlgreyPinmuxInselIoa0 = 2, /**< MIO Pad 0 */
  kTopEarlgreyPinmuxInselIoa1 = 3, /**< MIO Pad 1 */
  kTopEarlgreyPinmuxInselIoa2 = 4, /**< MIO Pad 2 */
  kTopEarlgreyPinmuxInselIoa3 = 5, /**< MIO Pad 3 */
  kTopEarlgreyPinmuxInselIoa4 = 6, /**< MIO Pad 4 */
  kTopEarlgreyPinmuxInselIoa5 = 7, /**< MIO Pad 5 */
  kTopEarlgreyPinmuxInselIoa6 = 8, /**< MIO Pad 6 */
  kTopEarlgreyPinmuxInselIoa7 = 9, /**< MIO Pad 7 */
  kTopEarlgreyPinmuxInselIoa8 = 10, /**< MIO Pad 8 */
  kTopEarlgreyPinmuxInselIob0 = 11, /**< MIO Pad 9 */
  kTopEarlgreyPinmuxInselIob1 = 12, /**< MIO Pad 10 */
  kTopEarlgreyPinmuxInselIob2 = 13, /**< MIO Pad 11 */
  kTopEarlgreyPinmuxInselIob3 = 14, /**< MIO Pad 12 */
  kTopEarlgreyPinmuxInselIob4 = 15, /**< MIO Pad 13 */
  kTopEarlgreyPinmuxInselIob5 = 16, /**< MIO Pad 14 */
  kTopEarlgreyPinmuxInselIob6 = 17, /**< MIO Pad 15 */
  kTopEarlgreyPinmuxInselIob7 = 18, /**< MIO Pad 16 */
  kTopEarlgreyPinmuxInselIob8 = 19, /**< MIO Pad 17 */
  kTopEarlgreyPinmuxInselIob9 = 20, /**< MIO Pad 18 */
  kTopEarlgreyPinmuxInselIob10 = 21, /**< MIO Pad 19 */
  kTopEarlgreyPinmuxInselIob11 = 22, /**< MIO Pad 20 */
  kTopEarlgreyPinmuxInselIob12 = 23, /**< MIO Pad 21 */
  kTopEarlgreyPinmuxInselIoc0 = 24, /**< MIO Pad 22 */
  kTopEarlgreyPinmuxInselIoc1 = 25, /**< MIO Pad 23 */
  kTopEarlgreyPinmuxInselIoc2 = 26, /**< MIO Pad 24 */
  kTopEarlgreyPinmuxInselIoc3 = 27, /**< MIO Pad 25 */
  kTopEarlgreyPinmuxInselIoc4 = 28, /**< MIO Pad 26 */
  kTopEarlgreyPinmuxInselIoc5 = 29, /**< MIO Pad 27 */
  kTopEarlgreyPinmuxInselIoc6 = 30, /**< MIO Pad 28 */
  kTopEarlgreyPinmuxInselIoc7 = 31, /**< MIO Pad 29 */
  kTopEarlgreyPinmuxInselIoc8 = 32, /**< MIO Pad 30 */
  kTopEarlgreyPinmuxInselIoc9 = 33, /**< MIO Pad 31 */
  kTopEarlgreyPinmuxInselIoc10 = 34, /**< MIO Pad 32 */
  kTopEarlgreyPinmuxInselIoc11 = 35, /**< MIO Pad 33 */
  kTopEarlgreyPinmuxInselIoc12 = 36, /**< MIO Pad 34 */
  kTopEarlgreyPinmuxInselIor0 = 37, /**< MIO Pad 35 */
  kTopEarlgreyPinmuxInselIor1 = 38, /**< MIO Pad 36 */
  kTopEarlgreyPinmuxInselIor2 = 39, /**< MIO Pad 37 */
  kTopEarlgreyPinmuxInselIor3 = 40, /**< MIO Pad 38 */
  kTopEarlgreyPinmuxInselIor4 = 41, /**< MIO Pad 39 */
  kTopEarlgreyPinmuxInselIor5 = 42, /**< MIO Pad 40 */
  kTopEarlgreyPinmuxInselIor6 = 43, /**< MIO Pad 41 */
  kTopEarlgreyPinmuxInselIor7 = 44, /**< MIO Pad 42 */
  kTopEarlgreyPinmuxInselIor9 = 45, /**< MIO Pad 43 */
  kTopEarlgreyPinmuxInselIor10 = 46, /**< MIO Pad 44 */
  kTopEarlgreyPinmuxInselIor11 = 47, /**< MIO Pad 45 */
  kTopEarlgreyPinmuxInselIor12 = 48, /**< MIO Pad 46 */
  kTopEarlgreyPinmuxInselIor13 = 49, /**< MIO Pad 47 */
  kTopEarlgreyPinmuxInselLast = 49, /**< \internal Last valid insel value */
} top_earlgrey_pinmux_insel_t;

/**
 * Pinmux MIO Output.
 */
typedef enum top_earlgrey_pinmux_mio_out {
  kTopEarlgreyPinmuxMioOutIoa0 = 0, /**< MIO Pad 0 */
  kTopEarlgreyPinmuxMioOutIoa1 = 1, /**< MIO Pad 1 */
  kTopEarlgreyPinmuxMioOutIoa2 = 2, /**< MIO Pad 2 */
  kTopEarlgreyPinmuxMioOutIoa3 = 3, /**< MIO Pad 3 */
  kTopEarlgreyPinmuxMioOutIoa4 = 4, /**< MIO Pad 4 */
  kTopEarlgreyPinmuxMioOutIoa5 = 5, /**< MIO Pad 5 */
  kTopEarlgreyPinmuxMioOutIoa6 = 6, /**< MIO Pad 6 */
  kTopEarlgreyPinmuxMioOutIoa7 = 7, /**< MIO Pad 7 */
  kTopEarlgreyPinmuxMioOutIoa8 = 8, /**< MIO Pad 8 */
  kTopEarlgreyPinmuxMioOutIob0 = 9, /**< MIO Pad 9 */
  kTopEarlgreyPinmuxMioOutIob1 = 10, /**< MIO Pad 10 */
  kTopEarlgreyPinmuxMioOutIob2 = 11, /**< MIO Pad 11 */
  kTopEarlgreyPinmuxMioOutIob3 = 12, /**< MIO Pad 12 */
  kTopEarlgreyPinmuxMioOutIob4 = 13, /**< MIO Pad 13 */
  kTopEarlgreyPinmuxMioOutIob5 = 14, /**< MIO Pad 14 */
  kTopEarlgreyPinmuxMioOutIob6 = 15, /**< MIO Pad 15 */
  kTopEarlgreyPinmuxMioOutIob7 = 16, /**< MIO Pad 16 */
  kTopEarlgreyPinmuxMioOutIob8 = 17, /**< MIO Pad 17 */
  kTopEarlgreyPinmuxMioOutIob9 = 18, /**< MIO Pad 18 */
  kTopEarlgreyPinmuxMioOutIob10 = 19, /**< MIO Pad 19 */
  kTopEarlgreyPinmuxMioOutIob11 = 20, /**< MIO Pad 20 */
  kTopEarlgreyPinmuxMioOutIob12 = 21, /**< MIO Pad 21 */
  kTopEarlgreyPinmuxMioOutIoc0 = 22, /**< MIO Pad 22 */
  kTopEarlgreyPinmuxMioOutIoc1 = 23, /**< MIO Pad 23 */
  kTopEarlgreyPinmuxMioOutIoc2 = 24, /**< MIO Pad 24 */
  kTopEarlgreyPinmuxMioOutIoc3 = 25, /**< MIO Pad 25 */
  kTopEarlgreyPinmuxMioOutIoc4 = 26, /**< MIO Pad 26 */
  kTopEarlgreyPinmuxMioOutIoc5 = 27, /**< MIO Pad 27 */
  kTopEarlgreyPinmuxMioOutIoc6 = 28, /**< MIO Pad 28 */
  kTopEarlgreyPinmuxMioOutIoc7 = 29, /**< MIO Pad 29 */
  kTopEarlgreyPinmuxMioOutIoc8 = 30, /**< MIO Pad 30 */
  kTopEarlgreyPinmuxMioOutIoc9 = 31, /**< MIO Pad 31 */
  kTopEarlgreyPinmuxMioOutIoc10 = 32, /**< MIO Pad 32 */
  kTopEarlgreyPinmuxMioOutIoc11 = 33, /**< MIO Pad 33 */
  kTopEarlgreyPinmuxMioOutIoc12 = 34, /**< MIO Pad 34 */
  kTopEarlgreyPinmuxMioOutIor0 = 35, /**< MIO Pad 35 */
  kTopEarlgreyPinmuxMioOutIor1 = 36, /**< MIO Pad 36 */
  kTopEarlgreyPinmuxMioOutIor2 = 37, /**< MIO Pad 37 */
  kTopEarlgreyPinmuxMioOutIor3 = 38, /**< MIO Pad 38 */
  kTopEarlgreyPinmuxMioOutIor4 = 39, /**< MIO Pad 39 */
  kTopEarlgreyPinmuxMioOutIor5 = 40, /**< MIO Pad 40 */
  kTopEarlgreyPinmuxMioOutIor6 = 41, /**< MIO Pad 41 */
  kTopEarlgreyPinmuxMioOutIor7 = 42, /**< MIO Pad 42 */
  kTopEarlgreyPinmuxMioOutIor9 = 43, /**< MIO Pad 43 */
  kTopEarlgreyPinmuxMioOutIor10 = 44, /**< MIO Pad 44 */
  kTopEarlgreyPinmuxMioOutIor11 = 45, /**< MIO Pad 45 */
  kTopEarlgreyPinmuxMioOutIor12 = 46, /**< MIO Pad 46 */
  kTopEarlgreyPinmuxMioOutIor13 = 47, /**< MIO Pad 47 */
  kTopEarlgreyPinmuxMioOutLast = 47, /**< \internal Last valid mio output */
} top_earlgrey_pinmux_mio_out_t;

/**
 * Pinmux Peripheral Output Selector.
 */
typedef enum top_earlgrey_pinmux_outsel {
  kTopEarlgreyPinmuxOutselConstantZero = 0, /**< Tie constantly to zero */
  kTopEarlgreyPinmuxOutselConstantOne = 1, /**< Tie constantly to one */
  kTopEarlgreyPinmuxOutselConstantHighZ = 2, /**< Tie constantly to high-Z */
  kTopEarlgreyPinmuxOutselGpioGpio0 = 3, /**< Peripheral Output 0 */
  kTopEarlgreyPinmuxOutselGpioGpio1 = 4, /**< Peripheral Output 1 */
  kTopEarlgreyPinmuxOutselGpioGpio2 = 5, /**< Peripheral Output 2 */
  kTopEarlgreyPinmuxOutselGpioGpio3 = 6, /**< Peripheral Output 3 */
  kTopEarlgreyPinmuxOutselGpioGpio4 = 7, /**< Peripheral Output 4 */
  kTopEarlgreyPinmuxOutselGpioGpio5 = 8, /**< Peripheral Output 5 */
  kTopEarlgreyPinmuxOutselGpioGpio6 = 9, /**< Peripheral Output 6 */
  kTopEarlgreyPinmuxOutselGpioGpio7 = 10, /**< Peripheral Output 7 */
  kTopEarlgreyPinmuxOutselGpioGpio8 = 11, /**< Peripheral Output 8 */
  kTopEarlgreyPinmuxOutselGpioGpio9 = 12, /**< Peripheral Output 9 */
  kTopEarlgreyPinmuxOutselGpioGpio10 = 13, /**< Peripheral Output 10 */
  kTopEarlgreyPinmuxOutselGpioGpio11 = 14, /**< Peripheral Output 11 */
  kTopEarlgreyPinmuxOutselGpioGpio12 = 15, /**< Peripheral Output 12 */
  kTopEarlgreyPinmuxOutselGpioGpio13 = 16, /**< Peripheral Output 13 */
  kTopEarlgreyPinmuxOutselGpioGpio14 = 17, /**< Peripheral Output 14 */
  kTopEarlgreyPinmuxOutselGpioGpio15 = 18, /**< Peripheral Output 15 */
  kTopEarlgreyPinmuxOutselGpioGpio16 = 19, /**< Peripheral Output 16 */
  kTopEarlgreyPinmuxOutselGpioGpio17 = 20, /**< Peripheral Output 17 */
  kTopEarlgreyPinmuxOutselGpioGpio18 = 21, /**< Peripheral Output 18 */
  kTopEarlgreyPinmuxOutselGpioGpio19 = 22, /**< Peripheral Output 19 */
  kTopEarlgreyPinmuxOutselGpioGpio20 = 23, /**< Peripheral Output 20 */
  kTopEarlgreyPinmuxOutselGpioGpio21 = 24, /**< Peripheral Output 21 */
  kTopEarlgreyPinmuxOutselGpioGpio22 = 25, /**< Peripheral Output 22 */
  kTopEarlgreyPinmuxOutselGpioGpio23 = 26, /**< Peripheral Output 23 */
  kTopEarlgreyPinmuxOutselGpioGpio24 = 27, /**< Peripheral Output 24 */
  kTopEarlgreyPinmuxOutselGpioGpio25 = 28, /**< Peripheral Output 25 */
  kTopEarlgreyPinmuxOutselGpioGpio26 = 29, /**< Peripheral Output 26 */
  kTopEarlgreyPinmuxOutselGpioGpio27 = 30, /**< Peripheral Output 27 */
  kTopEarlgreyPinmuxOutselGpioGpio28 = 31, /**< Peripheral Output 28 */
  kTopEarlgreyPinmuxOutselGpioGpio29 = 32, /**< Peripheral Output 29 */
  kTopEarlgreyPinmuxOutselGpioGpio30 = 33, /**< Peripheral Output 30 */
  kTopEarlgreyPinmuxOutselGpioGpio31 = 34, /**< Peripheral Output 31 */
  kTopEarlgreyPinmuxOutselI2c0Sda = 35, /**< Peripheral Output 32 */
  kTopEarlgreyPinmuxOutselI2c0Scl = 36, /**< Peripheral Output 33 */
  kTopEarlgreyPinmuxOutselUart0Tx = 37, /**< Peripheral Output 34 */
  kTopEarlgreyPinmuxOutselOtpCtrlTest0 = 38, /**< Peripheral Output 35 */
  kTopEarlgreyPinmuxOutselSysrstCtrlAonBatDisable = 39, /**< Peripheral Output 36 */
  kTopEarlgreyPinmuxOutselSysrstCtrlAonKey0Out = 40, /**< Peripheral Output 37 */
  kTopEarlgreyPinmuxOutselSysrstCtrlAonKey1Out = 41, /**< Peripheral Output 38 */
  kTopEarlgreyPinmuxOutselSysrstCtrlAonKey2Out = 42, /**< Peripheral Output 39 */
  kTopEarlgreyPinmuxOutselSysrstCtrlAonPwrbOut = 43, /**< Peripheral Output 40 */
  kTopEarlgreyPinmuxOutselSysrstCtrlAonZ3Wakeup = 44, /**< Peripheral Output 41 */
  kTopEarlgreyPinmuxOutselLast = 44, /**< \internal Last valid outsel value */
} top_earlgrey_pinmux_outsel_t;

/**
 * Dedicated Pad Selects
 */
typedef enum top_earlgrey_direct_pads {
  kTopEarlgreyDirectPadsSpiHost0Sd0 = 0, /**<  */
  kTopEarlgreyDirectPadsSpiHost0Sd1 = 1, /**<  */
  kTopEarlgreyDirectPadsSpiHost0Sd2 = 2, /**<  */
  kTopEarlgreyDirectPadsSpiHost0Sd3 = 3, /**<  */
  kTopEarlgreyDirectPadsSpiDeviceSd0 = 4, /**<  */
  kTopEarlgreyDirectPadsSpiDeviceSd1 = 5, /**<  */
  kTopEarlgreyDirectPadsSpiDeviceSd2 = 6, /**<  */
  kTopEarlgreyDirectPadsSpiDeviceSd3 = 7, /**<  */
  kTopEarlgreyDirectPadsSysrstCtrlAonEcRstL = 8, /**<  */
  kTopEarlgreyDirectPadsSpiDeviceSck = 9, /**<  */
  kTopEarlgreyDirectPadsSpiDeviceCsb = 10, /**<  */
  kTopEarlgreyDirectPadsSpiHost0Sck = 11, /**<  */
  kTopEarlgreyDirectPadsSpiHost0Csb = 12, /**<  */
  kTopEarlgreyDirectPadsLast = 12, /**< \internal Last valid direct pad */
} top_earlgrey_direct_pads_t;

/**
 * Muxed Pad Selects
 */
typedef enum top_earlgrey_muxed_pads {
  kTopEarlgreyMuxedPadsIoa0 = 0, /**<  */
  kTopEarlgreyMuxedPadsIoa1 = 1, /**<  */
  kTopEarlgreyMuxedPadsIoa2 = 2, /**<  */
  kTopEarlgreyMuxedPadsIoa3 = 3, /**<  */
  kTopEarlgreyMuxedPadsIoa4 = 4, /**<  */
  kTopEarlgreyMuxedPadsIoa5 = 5, /**<  */
  kTopEarlgreyMuxedPadsIoa6 = 6, /**<  */
  kTopEarlgreyMuxedPadsIoa7 = 7, /**<  */
  kTopEarlgreyMuxedPadsIoa8 = 8, /**<  */
  kTopEarlgreyMuxedPadsIob0 = 9, /**<  */
  kTopEarlgreyMuxedPadsIob1 = 10, /**<  */
  kTopEarlgreyMuxedPadsIob2 = 11, /**<  */
  kTopEarlgreyMuxedPadsIob3 = 12, /**<  */
  kTopEarlgreyMuxedPadsIob4 = 13, /**<  */
  kTopEarlgreyMuxedPadsIob5 = 14, /**<  */
  kTopEarlgreyMuxedPadsIob6 = 15, /**<  */
  kTopEarlgreyMuxedPadsIob7 = 16, /**<  */
  kTopEarlgreyMuxedPadsIob8 = 17, /**<  */
  kTopEarlgreyMuxedPadsIob9 = 18, /**<  */
  kTopEarlgreyMuxedPadsIob10 = 19, /**<  */
  kTopEarlgreyMuxedPadsIob11 = 20, /**<  */
  kTopEarlgreyMuxedPadsIob12 = 21, /**<  */
  kTopEarlgreyMuxedPadsIoc0 = 22, /**<  */
  kTopEarlgreyMuxedPadsIoc1 = 23, /**<  */
  kTopEarlgreyMuxedPadsIoc2 = 24, /**<  */
  kTopEarlgreyMuxedPadsIoc3 = 25, /**<  */
  kTopEarlgreyMuxedPadsIoc4 = 26, /**<  */
  kTopEarlgreyMuxedPadsIoc5 = 27, /**<  */
  kTopEarlgreyMuxedPadsIoc6 = 28, /**<  */
  kTopEarlgreyMuxedPadsIoc7 = 29, /**<  */
  kTopEarlgreyMuxedPadsIoc8 = 30, /**<  */
  kTopEarlgreyMuxedPadsIoc9 = 31, /**<  */
  kTopEarlgreyMuxedPadsIoc10 = 32, /**<  */
  kTopEarlgreyMuxedPadsIoc11 = 33, /**<  */
  kTopEarlgreyMuxedPadsIoc12 = 34, /**<  */
  kTopEarlgreyMuxedPadsIor0 = 35, /**<  */
  kTopEarlgreyMuxedPadsIor1 = 36, /**<  */
  kTopEarlgreyMuxedPadsIor2 = 37, /**<  */
  kTopEarlgreyMuxedPadsIor3 = 38, /**<  */
  kTopEarlgreyMuxedPadsIor4 = 39, /**<  */
  kTopEarlgreyMuxedPadsIor5 = 40, /**<  */
  kTopEarlgreyMuxedPadsIor6 = 41, /**<  */
  kTopEarlgreyMuxedPadsIor7 = 42, /**<  */
  kTopEarlgreyMuxedPadsIor9 = 43, /**<  */
  kTopEarlgreyMuxedPadsIor10 = 44, /**<  */
  kTopEarlgreyMuxedPadsIor11 = 45, /**<  */
  kTopEarlgreyMuxedPadsIor12 = 46, /**<  */
  kTopEarlgreyMuxedPadsIor13 = 47, /**<  */
  kTopEarlgreyMuxedPadsLast = 47, /**< \internal Last valid muxed pad */
} top_earlgrey_muxed_pads_t;

/**
 * Power Manager Wakeup Signals
 */
typedef enum top_earlgrey_power_manager_wake_ups {
  kTopEarlgreyPowerManagerWakeUpsSysrstCtrlAonWkupReq = 0, /**<  */
  kTopEarlgreyPowerManagerWakeUpsAdcCtrlAonWkupReq = 1, /**<  */
  kTopEarlgreyPowerManagerWakeUpsPinmuxAonPinWkupReq = 2, /**<  */
  kTopEarlgreyPowerManagerWakeUpsPinmuxAonUsbWkupReq = 3, /**<  */
  kTopEarlgreyPowerManagerWakeUpsAonTimerAonWkupReq = 4, /**<  */
  kTopEarlgreyPowerManagerWakeUpsLast = 4, /**< \internal Last valid pwrmgr wakeup signal */
} top_earlgrey_power_manager_wake_ups_t;

/**
 * Reset Manager Software Controlled Resets
 */
typedef enum top_earlgrey_reset_manager_sw_resets {
  kTopEarlgreyResetManagerSwResetsSpiDevice = 0, /**<  */
  kTopEarlgreyResetManagerSwResetsSpiHost0 = 1, /**<  */
  kTopEarlgreyResetManagerSwResetsI2c0 = 2, /**<  */
  kTopEarlgreyResetManagerSwResetsLast = 2, /**< \internal Last valid rstmgr software reset request */
} top_earlgrey_reset_manager_sw_resets_t;

/**
 * Power Manager Reset Request Signals
 */
typedef enum top_earlgrey_power_manager_reset_requests {
  kTopEarlgreyPowerManagerResetRequestsSysrstCtrlAonRstReq = 0, /**<  */
  kTopEarlgreyPowerManagerResetRequestsAonTimerAonAonTimerRstReq = 1, /**<  */
  kTopEarlgreyPowerManagerResetRequestsLast = 1, /**< \internal Last valid pwrmgr reset_request signal */
} top_earlgrey_power_manager_reset_requests_t;

/**
 * Clock Manager Software-Controlled ("Gated") Clocks.
 *
 * The Software has full control over these clocks.
 */
typedef enum top_earlgrey_gateable_clocks {
  kTopEarlgreyGateableClocksIoDiv4Peri = 0, /**< Clock clk_io_div4_peri in group peri */
  kTopEarlgreyGateableClocksIoDiv2Peri = 1, /**< Clock clk_io_div2_peri in group peri */
  kTopEarlgreyGateableClocksIoPeri = 2, /**< Clock clk_io_peri in group peri */
  kTopEarlgreyGateableClocksLast = 2, /**< \internal Last Valid Gateable Clock */
} top_earlgrey_gateable_clocks_t;

/**
 * Clock Manager Software-Hinted Clocks.
 *
 * The Software has partial control over these clocks. It can ask them to stop,
 * but the clock manager is in control of whether the clock actually is stopped.
 */
typedef enum top_earlgrey_hintable_clocks {
} top_earlgrey_hintable_clocks_t;

/**
 * MMIO Region
 *
 * MMIO region excludes any memory that is separate from the module
 * configuration space, i.e. ROM, main SRAM, and flash are excluded but
 * retention SRAM, spi_device memory, or usbdev memory are included.
 */
#define TOP_EARLGREY_MMIO_BASE_ADDR 0x40480000u
#define TOP_EARLGREY_MMIO_SIZE_BYTES 0x6FB81020u

// Header Extern Guard
#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // OPENTITAN_HW\TOP_EARLGREY\SW\AUTOGEN_TOP_EARLGREY_H_
