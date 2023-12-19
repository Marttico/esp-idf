/**
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** LPPERI_CLK_EN_REG register
 *  need_des
 */
#define LPPERI_CLK_EN_REG (DR_REG_LPPERI_BASE + 0x0)
/** LPPERI_RNG_CK_EN : R/W; bitpos: [24]; default: 1;
 *  need_des
 */
#define LPPERI_RNG_CK_EN    (BIT(24))
#define LPPERI_RNG_CK_EN_M  (LPPERI_RNG_CK_EN_V << LPPERI_RNG_CK_EN_S)
#define LPPERI_RNG_CK_EN_V  0x00000001U
#define LPPERI_RNG_CK_EN_S  24
/** LPPERI_OTP_DBG_CK_EN : R/W; bitpos: [25]; default: 1;
 *  need_des
 */
#define LPPERI_OTP_DBG_CK_EN    (BIT(25))
#define LPPERI_OTP_DBG_CK_EN_M  (LPPERI_OTP_DBG_CK_EN_V << LPPERI_OTP_DBG_CK_EN_S)
#define LPPERI_OTP_DBG_CK_EN_V  0x00000001U
#define LPPERI_OTP_DBG_CK_EN_S  25
/** LPPERI_LP_UART_CK_EN : R/W; bitpos: [26]; default: 1;
 *  need_des
 */
#define LPPERI_LP_UART_CK_EN    (BIT(26))
#define LPPERI_LP_UART_CK_EN_M  (LPPERI_LP_UART_CK_EN_V << LPPERI_LP_UART_CK_EN_S)
#define LPPERI_LP_UART_CK_EN_V  0x00000001U
#define LPPERI_LP_UART_CK_EN_S  26
/** LPPERI_LP_IO_CK_EN : R/W; bitpos: [27]; default: 1;
 *  need_des
 */
#define LPPERI_LP_IO_CK_EN    (BIT(27))
#define LPPERI_LP_IO_CK_EN_M  (LPPERI_LP_IO_CK_EN_V << LPPERI_LP_IO_CK_EN_S)
#define LPPERI_LP_IO_CK_EN_V  0x00000001U
#define LPPERI_LP_IO_CK_EN_S  27
/** LPPERI_LP_EXT_I2C_CK_EN : R/W; bitpos: [28]; default: 1;
 *  need_des
 */
#define LPPERI_LP_EXT_I2C_CK_EN    (BIT(28))
#define LPPERI_LP_EXT_I2C_CK_EN_M  (LPPERI_LP_EXT_I2C_CK_EN_V << LPPERI_LP_EXT_I2C_CK_EN_S)
#define LPPERI_LP_EXT_I2C_CK_EN_V  0x00000001U
#define LPPERI_LP_EXT_I2C_CK_EN_S  28
/** LPPERI_LP_ANA_I2C_CK_EN : R/W; bitpos: [29]; default: 1;
 *  need_des
 */
#define LPPERI_LP_ANA_I2C_CK_EN    (BIT(29))
#define LPPERI_LP_ANA_I2C_CK_EN_M  (LPPERI_LP_ANA_I2C_CK_EN_V << LPPERI_LP_ANA_I2C_CK_EN_S)
#define LPPERI_LP_ANA_I2C_CK_EN_V  0x00000001U
#define LPPERI_LP_ANA_I2C_CK_EN_S  29
/** LPPERI_EFUSE_CK_EN : R/W; bitpos: [30]; default: 1;
 *  need_des
 */
#define LPPERI_EFUSE_CK_EN    (BIT(30))
#define LPPERI_EFUSE_CK_EN_M  (LPPERI_EFUSE_CK_EN_V << LPPERI_EFUSE_CK_EN_S)
#define LPPERI_EFUSE_CK_EN_V  0x00000001U
#define LPPERI_EFUSE_CK_EN_S  30
/** LPPERI_LP_CPU_CK_EN : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LPPERI_LP_CPU_CK_EN    (BIT(31))
#define LPPERI_LP_CPU_CK_EN_M  (LPPERI_LP_CPU_CK_EN_V << LPPERI_LP_CPU_CK_EN_S)
#define LPPERI_LP_CPU_CK_EN_V  0x00000001U
#define LPPERI_LP_CPU_CK_EN_S  31

/** LPPERI_RESET_EN_REG register
 *  need_des
 */
#define LPPERI_RESET_EN_REG (DR_REG_LPPERI_BASE + 0x4)
/** LPPERI_BUS_RESET_EN : WT; bitpos: [23]; default: 0;
 *  need_des
 */
#define LPPERI_BUS_RESET_EN    (BIT(23))
#define LPPERI_BUS_RESET_EN_M  (LPPERI_BUS_RESET_EN_V << LPPERI_BUS_RESET_EN_S)
#define LPPERI_BUS_RESET_EN_V  0x00000001U
#define LPPERI_BUS_RESET_EN_S  23
/** LPPERI_OTP_DBG_RESET_EN : R/W; bitpos: [25]; default: 0;
 *  need_des
 */
#define LPPERI_OTP_DBG_RESET_EN    (BIT(25))
#define LPPERI_OTP_DBG_RESET_EN_M  (LPPERI_OTP_DBG_RESET_EN_V << LPPERI_OTP_DBG_RESET_EN_S)
#define LPPERI_OTP_DBG_RESET_EN_V  0x00000001U
#define LPPERI_OTP_DBG_RESET_EN_S  25
/** LPPERI_LP_UART_RESET_EN : R/W; bitpos: [26]; default: 0;
 *  need_des
 */
#define LPPERI_LP_UART_RESET_EN    (BIT(26))
#define LPPERI_LP_UART_RESET_EN_M  (LPPERI_LP_UART_RESET_EN_V << LPPERI_LP_UART_RESET_EN_S)
#define LPPERI_LP_UART_RESET_EN_V  0x00000001U
#define LPPERI_LP_UART_RESET_EN_S  26
/** LPPERI_LP_IO_RESET_EN : R/W; bitpos: [27]; default: 0;
 *  need_des
 */
#define LPPERI_LP_IO_RESET_EN    (BIT(27))
#define LPPERI_LP_IO_RESET_EN_M  (LPPERI_LP_IO_RESET_EN_V << LPPERI_LP_IO_RESET_EN_S)
#define LPPERI_LP_IO_RESET_EN_V  0x00000001U
#define LPPERI_LP_IO_RESET_EN_S  27
/** LPPERI_LP_EXT_I2C_RESET_EN : R/W; bitpos: [28]; default: 0;
 *  need_des
 */
#define LPPERI_LP_EXT_I2C_RESET_EN    (BIT(28))
#define LPPERI_LP_EXT_I2C_RESET_EN_M  (LPPERI_LP_EXT_I2C_RESET_EN_V << LPPERI_LP_EXT_I2C_RESET_EN_S)
#define LPPERI_LP_EXT_I2C_RESET_EN_V  0x00000001U
#define LPPERI_LP_EXT_I2C_RESET_EN_S  28
/** LPPERI_LP_ANA_I2C_RESET_EN : R/W; bitpos: [29]; default: 0;
 *  need_des
 */
#define LPPERI_LP_ANA_I2C_RESET_EN    (BIT(29))
#define LPPERI_LP_ANA_I2C_RESET_EN_M  (LPPERI_LP_ANA_I2C_RESET_EN_V << LPPERI_LP_ANA_I2C_RESET_EN_S)
#define LPPERI_LP_ANA_I2C_RESET_EN_V  0x00000001U
#define LPPERI_LP_ANA_I2C_RESET_EN_S  29
/** LPPERI_EFUSE_RESET_EN : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LPPERI_EFUSE_RESET_EN    (BIT(30))
#define LPPERI_EFUSE_RESET_EN_M  (LPPERI_EFUSE_RESET_EN_V << LPPERI_EFUSE_RESET_EN_S)
#define LPPERI_EFUSE_RESET_EN_V  0x00000001U
#define LPPERI_EFUSE_RESET_EN_S  30
/** LPPERI_LP_CPU_RESET_EN : WT; bitpos: [31]; default: 0;
 *  need_des
 */
#define LPPERI_LP_CPU_RESET_EN    (BIT(31))
#define LPPERI_LP_CPU_RESET_EN_M  (LPPERI_LP_CPU_RESET_EN_V << LPPERI_LP_CPU_RESET_EN_S)
#define LPPERI_LP_CPU_RESET_EN_V  0x00000001U
#define LPPERI_LP_CPU_RESET_EN_S  31

/** LPPERI_RNG_DATA_REG register
 *  need_des
 */
#define LPPERI_RNG_DATA_REG (DR_REG_LPPERI_BASE + 0x8)
/** LPPERI_RNG_DATA : RO; bitpos: [31:0]; default: 0;
 *  need_des
 */
#define LPPERI_RNG_DATA    0xFFFFFFFFU
#define LPPERI_RNG_DATA_M  (LPPERI_RNG_DATA_V << LPPERI_RNG_DATA_S)
#define LPPERI_RNG_DATA_V  0xFFFFFFFFU
#define LPPERI_RNG_DATA_S  0

/** LPPERI_CPU_REG register
 *  need_des
 */
#define LPPERI_CPU_REG (DR_REG_LPPERI_BASE + 0xc)
/** LPPERI_LPCORE_DBGM_UNAVALIABLE : R/W; bitpos: [31]; default: 1;
 *  need_des
 */
#define LPPERI_LPCORE_DBGM_UNAVALIABLE    (BIT(31))
#define LPPERI_LPCORE_DBGM_UNAVALIABLE_M  (LPPERI_LPCORE_DBGM_UNAVALIABLE_V << LPPERI_LPCORE_DBGM_UNAVALIABLE_S)
#define LPPERI_LPCORE_DBGM_UNAVALIABLE_V  0x00000001U
#define LPPERI_LPCORE_DBGM_UNAVALIABLE_S  31

/** LPPERI_BUS_TIMEOUT_REG register
 *  need_des
 */
#define LPPERI_BUS_TIMEOUT_REG (DR_REG_LPPERI_BASE + 0x10)
/** LPPERI_LP_PERI_TIMEOUT_THRES : R/W; bitpos: [29:14]; default: 65535;
 *  need_des
 */
#define LPPERI_LP_PERI_TIMEOUT_THRES    0x0000FFFFU
#define LPPERI_LP_PERI_TIMEOUT_THRES_M  (LPPERI_LP_PERI_TIMEOUT_THRES_V << LPPERI_LP_PERI_TIMEOUT_THRES_S)
#define LPPERI_LP_PERI_TIMEOUT_THRES_V  0x0000FFFFU
#define LPPERI_LP_PERI_TIMEOUT_THRES_S  14
/** LPPERI_LP_PERI_TIMEOUT_INT_CLEAR : WT; bitpos: [30]; default: 0;
 *  need_des
 */
#define LPPERI_LP_PERI_TIMEOUT_INT_CLEAR    (BIT(30))
#define LPPERI_LP_PERI_TIMEOUT_INT_CLEAR_M  (LPPERI_LP_PERI_TIMEOUT_INT_CLEAR_V << LPPERI_LP_PERI_TIMEOUT_INT_CLEAR_S)
#define LPPERI_LP_PERI_TIMEOUT_INT_CLEAR_V  0x00000001U
#define LPPERI_LP_PERI_TIMEOUT_INT_CLEAR_S  30
/** LPPERI_LP_PERI_TIMEOUT_PROTECT_EN : R/W; bitpos: [31]; default: 1;
 *  need_des
 */
#define LPPERI_LP_PERI_TIMEOUT_PROTECT_EN    (BIT(31))
#define LPPERI_LP_PERI_TIMEOUT_PROTECT_EN_M  (LPPERI_LP_PERI_TIMEOUT_PROTECT_EN_V << LPPERI_LP_PERI_TIMEOUT_PROTECT_EN_S)
#define LPPERI_LP_PERI_TIMEOUT_PROTECT_EN_V  0x00000001U
#define LPPERI_LP_PERI_TIMEOUT_PROTECT_EN_S  31

/** LPPERI_BUS_TIMEOUT_ADDR_REG register
 *  need_des
 */
#define LPPERI_BUS_TIMEOUT_ADDR_REG (DR_REG_LPPERI_BASE + 0x14)
/** LPPERI_LP_PERI_TIMEOUT_ADDR : RO; bitpos: [31:0]; default: 0;
 *  need_des
 */
#define LPPERI_LP_PERI_TIMEOUT_ADDR    0xFFFFFFFFU
#define LPPERI_LP_PERI_TIMEOUT_ADDR_M  (LPPERI_LP_PERI_TIMEOUT_ADDR_V << LPPERI_LP_PERI_TIMEOUT_ADDR_S)
#define LPPERI_LP_PERI_TIMEOUT_ADDR_V  0xFFFFFFFFU
#define LPPERI_LP_PERI_TIMEOUT_ADDR_S  0

/** LPPERI_BUS_TIMEOUT_UID_REG register
 *  need_des
 */
#define LPPERI_BUS_TIMEOUT_UID_REG (DR_REG_LPPERI_BASE + 0x18)
/** LPPERI_LP_PERI_TIMEOUT_UID : RO; bitpos: [6:0]; default: 0;
 *  need_des
 */
#define LPPERI_LP_PERI_TIMEOUT_UID    0x0000007FU
#define LPPERI_LP_PERI_TIMEOUT_UID_M  (LPPERI_LP_PERI_TIMEOUT_UID_V << LPPERI_LP_PERI_TIMEOUT_UID_S)
#define LPPERI_LP_PERI_TIMEOUT_UID_V  0x0000007FU
#define LPPERI_LP_PERI_TIMEOUT_UID_S  0

/** LPPERI_MEM_CTRL_REG register
 *  need_des
 */
#define LPPERI_MEM_CTRL_REG (DR_REG_LPPERI_BASE + 0x1c)
/** LPPERI_UART_WAKEUP_FLAG_CLR : WT; bitpos: [0]; default: 0;
 *  need_des
 */
#define LPPERI_UART_WAKEUP_FLAG_CLR    (BIT(0))
#define LPPERI_UART_WAKEUP_FLAG_CLR_M  (LPPERI_UART_WAKEUP_FLAG_CLR_V << LPPERI_UART_WAKEUP_FLAG_CLR_S)
#define LPPERI_UART_WAKEUP_FLAG_CLR_V  0x00000001U
#define LPPERI_UART_WAKEUP_FLAG_CLR_S  0
/** LPPERI_UART_WAKEUP_FLAG : R/WTC/SS; bitpos: [1]; default: 0;
 *  need_des
 */
#define LPPERI_UART_WAKEUP_FLAG    (BIT(1))
#define LPPERI_UART_WAKEUP_FLAG_M  (LPPERI_UART_WAKEUP_FLAG_V << LPPERI_UART_WAKEUP_FLAG_S)
#define LPPERI_UART_WAKEUP_FLAG_V  0x00000001U
#define LPPERI_UART_WAKEUP_FLAG_S  1
/** LPPERI_UART_WAKEUP_EN : R/W; bitpos: [29]; default: 0;
 *  need_des
 */
#define LPPERI_UART_WAKEUP_EN    (BIT(29))
#define LPPERI_UART_WAKEUP_EN_M  (LPPERI_UART_WAKEUP_EN_V << LPPERI_UART_WAKEUP_EN_S)
#define LPPERI_UART_WAKEUP_EN_V  0x00000001U
#define LPPERI_UART_WAKEUP_EN_S  29
/** LPPERI_UART_MEM_FORCE_PD : R/W; bitpos: [30]; default: 0;
 *  need_des
 */
#define LPPERI_UART_MEM_FORCE_PD    (BIT(30))
#define LPPERI_UART_MEM_FORCE_PD_M  (LPPERI_UART_MEM_FORCE_PD_V << LPPERI_UART_MEM_FORCE_PD_S)
#define LPPERI_UART_MEM_FORCE_PD_V  0x00000001U
#define LPPERI_UART_MEM_FORCE_PD_S  30
/** LPPERI_UART_MEM_FORCE_PU : R/W; bitpos: [31]; default: 1;
 *  need_des
 */
#define LPPERI_UART_MEM_FORCE_PU    (BIT(31))
#define LPPERI_UART_MEM_FORCE_PU_M  (LPPERI_UART_MEM_FORCE_PU_V << LPPERI_UART_MEM_FORCE_PU_S)
#define LPPERI_UART_MEM_FORCE_PU_V  0x00000001U
#define LPPERI_UART_MEM_FORCE_PU_S  31

/** LPPERI_INTERRUPT_SOURCE_REG register
 *  need_des
 */
#define LPPERI_INTERRUPT_SOURCE_REG (DR_REG_LPPERI_BASE + 0x20)
/** LPPERI_LP_INTERRUPT_SOURCE : RO; bitpos: [5:0]; default: 0;
 *  BIT5~BIT0: pmu_lp_int, modem_lp_int, lp_timer_lp_int, lp_uart_int, lp_i2c_int,
 *  lp_io_int
 */
#define LPPERI_LP_INTERRUPT_SOURCE    0x0000003FU
#define LPPERI_LP_INTERRUPT_SOURCE_M  (LPPERI_LP_INTERRUPT_SOURCE_V << LPPERI_LP_INTERRUPT_SOURCE_S)
#define LPPERI_LP_INTERRUPT_SOURCE_V  0x0000003FU
#define LPPERI_LP_INTERRUPT_SOURCE_S  0

/** LPPERI_DATE_REG register
 *  need_des
 */
#define LPPERI_DATE_REG (DR_REG_LPPERI_BASE + 0x3fc)
/** LPPERI_LPPERI_DATE : R/W; bitpos: [30:0]; default: 35676464;
 *  need_des
 */
#define LPPERI_LPPERI_DATE    0x7FFFFFFFU
#define LPPERI_LPPERI_DATE_M  (LPPERI_LPPERI_DATE_V << LPPERI_LPPERI_DATE_S)
#define LPPERI_LPPERI_DATE_V  0x7FFFFFFFU
#define LPPERI_LPPERI_DATE_S  0
/** LPPERI_CLK_EN : R/W; bitpos: [31]; default: 0;
 *  need_des
 */
#define LPPERI_CLK_EN    (BIT(31))
#define LPPERI_CLK_EN_M  (LPPERI_CLK_EN_V << LPPERI_CLK_EN_S)
#define LPPERI_CLK_EN_V  0x00000001U
#define LPPERI_CLK_EN_S  31

#ifdef __cplusplus
}
#endif