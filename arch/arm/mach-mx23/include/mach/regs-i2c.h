/*
 * Freescale I2C Register Definitions
 *
 * Copyright 2008 Embedded Alley Solutions, Inc All Rights Reserved.
 * Copyright 2008-2010 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * This file is created by xml file. Don't Edit it.
 *
 * Xml Revision: 1.54
 * Template revision: 26195
 */

#ifndef __ARCH_ARM___I2C_H
#define __ARCH_ARM___I2C_H


#define HW_I2C_CTRL0	(0x00000000)
#define HW_I2C_CTRL0_SET	(0x00000004)
#define HW_I2C_CTRL0_CLR	(0x00000008)
#define HW_I2C_CTRL0_TOG	(0x0000000c)

#define BM_I2C_CTRL0_SFTRST	0x80000000
#define BV_I2C_CTRL0_SFTRST__RUN   0x0
#define BV_I2C_CTRL0_SFTRST__RESET 0x1
#define BM_I2C_CTRL0_CLKGATE	0x40000000
#define BV_I2C_CTRL0_CLKGATE__RUN     0x0
#define BV_I2C_CTRL0_CLKGATE__NO_CLKS 0x1
#define BM_I2C_CTRL0_RUN	0x20000000
#define BV_I2C_CTRL0_RUN__HALT 0x0
#define BV_I2C_CTRL0_RUN__RUN  0x1
#define BM_I2C_CTRL0_RSVD1	0x10000000
#define BM_I2C_CTRL0_PRE_ACK	0x08000000
#define BM_I2C_CTRL0_ACKNOWLEDGE	0x04000000
#define BV_I2C_CTRL0_ACKNOWLEDGE__SNAK 0x0
#define BV_I2C_CTRL0_ACKNOWLEDGE__ACK  0x1
#define BM_I2C_CTRL0_SEND_NAK_ON_LAST	0x02000000
#define BV_I2C_CTRL0_SEND_NAK_ON_LAST__ACK_IT 0x0
#define BV_I2C_CTRL0_SEND_NAK_ON_LAST__NAK_IT 0x1
#define BM_I2C_CTRL0_PIO_MODE	0x01000000
#define BM_I2C_CTRL0_MULTI_MASTER	0x00800000
#define BV_I2C_CTRL0_MULTI_MASTER__SINGLE   0x0
#define BV_I2C_CTRL0_MULTI_MASTER__MULTIPLE 0x1
#define BM_I2C_CTRL0_CLOCK_HELD	0x00400000
#define BV_I2C_CTRL0_CLOCK_HELD__RELEASE  0x0
#define BV_I2C_CTRL0_CLOCK_HELD__HELD_LOW 0x1
#define BM_I2C_CTRL0_RETAIN_CLOCK	0x00200000
#define BV_I2C_CTRL0_RETAIN_CLOCK__RELEASE  0x0
#define BV_I2C_CTRL0_RETAIN_CLOCK__HOLD_LOW 0x1
#define BM_I2C_CTRL0_POST_SEND_STOP	0x00100000
#define BV_I2C_CTRL0_POST_SEND_STOP__NO_STOP   0x0
#define BV_I2C_CTRL0_POST_SEND_STOP__SEND_STOP 0x1
#define BM_I2C_CTRL0_PRE_SEND_START	0x00080000
#define BV_I2C_CTRL0_PRE_SEND_START__NO_START   0x0
#define BV_I2C_CTRL0_PRE_SEND_START__SEND_START 0x1
#define BM_I2C_CTRL0_SLAVE_ADDRESS_ENABLE	0x00040000
#define BV_I2C_CTRL0_SLAVE_ADDRESS_ENABLE__DISABLED 0x0
#define BV_I2C_CTRL0_SLAVE_ADDRESS_ENABLE__ENABLED  0x1
#define BM_I2C_CTRL0_MASTER_MODE	0x00020000
#define BV_I2C_CTRL0_MASTER_MODE__SLAVE  0x0
#define BV_I2C_CTRL0_MASTER_MODE__MASTER 0x1
#define BM_I2C_CTRL0_DIRECTION	0x00010000
#define BV_I2C_CTRL0_DIRECTION__RECEIVE  0x0
#define BV_I2C_CTRL0_DIRECTION__TRANSMIT 0x1
#define BP_I2C_CTRL0_XFER_COUNT	0
#define BM_I2C_CTRL0_XFER_COUNT	0x0000FFFF
#define BF_I2C_CTRL0_XFER_COUNT(v)  \
		(((v) << 0) & BM_I2C_CTRL0_XFER_COUNT)

#define HW_I2C_TIMING0	(0x00000010)
#define HW_I2C_TIMING0_SET	(0x00000014)
#define HW_I2C_TIMING0_CLR	(0x00000018)
#define HW_I2C_TIMING0_TOG	(0x0000001c)

#define BP_I2C_TIMING0_RSVD2	26
#define BM_I2C_TIMING0_RSVD2	0xFC000000
#define BF_I2C_TIMING0_RSVD2(v) \
		(((v) << 26) & BM_I2C_TIMING0_RSVD2)
#define BP_I2C_TIMING0_HIGH_COUNT	16
#define BM_I2C_TIMING0_HIGH_COUNT	0x03FF0000
#define BF_I2C_TIMING0_HIGH_COUNT(v)  \
		(((v) << 16) & BM_I2C_TIMING0_HIGH_COUNT)
#define BP_I2C_TIMING0_RSVD1	10
#define BM_I2C_TIMING0_RSVD1	0x0000FC00
#define BF_I2C_TIMING0_RSVD1(v)  \
		(((v) << 10) & BM_I2C_TIMING0_RSVD1)
#define BP_I2C_TIMING0_RCV_COUNT	0
#define BM_I2C_TIMING0_RCV_COUNT	0x000003FF
#define BF_I2C_TIMING0_RCV_COUNT(v)  \
		(((v) << 0) & BM_I2C_TIMING0_RCV_COUNT)

#define HW_I2C_TIMING1	(0x00000020)
#define HW_I2C_TIMING1_SET	(0x00000024)
#define HW_I2C_TIMING1_CLR	(0x00000028)
#define HW_I2C_TIMING1_TOG	(0x0000002c)

#define BP_I2C_TIMING1_RSVD2	26
#define BM_I2C_TIMING1_RSVD2	0xFC000000
#define BF_I2C_TIMING1_RSVD2(v) \
		(((v) << 26) & BM_I2C_TIMING1_RSVD2)
#define BP_I2C_TIMING1_LOW_COUNT	16
#define BM_I2C_TIMING1_LOW_COUNT	0x03FF0000
#define BF_I2C_TIMING1_LOW_COUNT(v)  \
		(((v) << 16) & BM_I2C_TIMING1_LOW_COUNT)
#define BP_I2C_TIMING1_RSVD1	10
#define BM_I2C_TIMING1_RSVD1	0x0000FC00
#define BF_I2C_TIMING1_RSVD1(v)  \
		(((v) << 10) & BM_I2C_TIMING1_RSVD1)
#define BP_I2C_TIMING1_XMIT_COUNT	0
#define BM_I2C_TIMING1_XMIT_COUNT	0x000003FF
#define BF_I2C_TIMING1_XMIT_COUNT(v)  \
		(((v) << 0) & BM_I2C_TIMING1_XMIT_COUNT)

#define HW_I2C_TIMING2	(0x00000030)
#define HW_I2C_TIMING2_SET	(0x00000034)
#define HW_I2C_TIMING2_CLR	(0x00000038)
#define HW_I2C_TIMING2_TOG	(0x0000003c)

#define BP_I2C_TIMING2_RSVD2	26
#define BM_I2C_TIMING2_RSVD2	0xFC000000
#define BF_I2C_TIMING2_RSVD2(v) \
		(((v) << 26) & BM_I2C_TIMING2_RSVD2)
#define BP_I2C_TIMING2_BUS_FREE	16
#define BM_I2C_TIMING2_BUS_FREE	0x03FF0000
#define BF_I2C_TIMING2_BUS_FREE(v)  \
		(((v) << 16) & BM_I2C_TIMING2_BUS_FREE)
#define BP_I2C_TIMING2_RSVD1	10
#define BM_I2C_TIMING2_RSVD1	0x0000FC00
#define BF_I2C_TIMING2_RSVD1(v)  \
		(((v) << 10) & BM_I2C_TIMING2_RSVD1)
#define BP_I2C_TIMING2_LEADIN_COUNT	0
#define BM_I2C_TIMING2_LEADIN_COUNT	0x000003FF
#define BF_I2C_TIMING2_LEADIN_COUNT(v)  \
		(((v) << 0) & BM_I2C_TIMING2_LEADIN_COUNT)

#define HW_I2C_CTRL1	(0x00000040)
#define HW_I2C_CTRL1_SET	(0x00000044)
#define HW_I2C_CTRL1_CLR	(0x00000048)
#define HW_I2C_CTRL1_TOG	(0x0000004c)

#define BP_I2C_CTRL1_RSVD1	29
#define BM_I2C_CTRL1_RSVD1	0xE0000000
#define BF_I2C_CTRL1_RSVD1(v) \
		(((v) << 29) & BM_I2C_CTRL1_RSVD1)
#define BM_I2C_CTRL1_CLR_GOT_A_NAK	0x10000000
#define BV_I2C_CTRL1_CLR_GOT_A_NAK__DO_NOTHING 0x0
#define BV_I2C_CTRL1_CLR_GOT_A_NAK__CLEAR      0x1
#define BM_I2C_CTRL1_ACK_MODE	0x08000000
#define BV_I2C_CTRL1_ACK_MODE__ACK_AFTER_HOLD_LOW  0x0
#define BV_I2C_CTRL1_ACK_MODE__ACK_BEFORE_HOLD_LOW 0x1
#define BM_I2C_CTRL1_FORCE_DATA_IDLE	0x04000000
#define BM_I2C_CTRL1_FORCE_CLK_IDLE	0x02000000
#define BM_I2C_CTRL1_BCAST_SLAVE_EN	0x01000000
#define BV_I2C_CTRL1_BCAST_SLAVE_EN__NO_BCAST    0x0
#define BV_I2C_CTRL1_BCAST_SLAVE_EN__WATCH_BCAST 0x1
#define BP_I2C_CTRL1_SLAVE_ADDRESS_BYTE	16
#define BM_I2C_CTRL1_SLAVE_ADDRESS_BYTE	0x00FF0000
#define BF_I2C_CTRL1_SLAVE_ADDRESS_BYTE(v)  \
		(((v) << 16) & BM_I2C_CTRL1_SLAVE_ADDRESS_BYTE)
#define BM_I2C_CTRL1_BUS_FREE_IRQ_EN	0x00008000
#define BV_I2C_CTRL1_BUS_FREE_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_BUS_FREE_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ_EN	0x00004000
#define BV_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_NO_SLAVE_ACK_IRQ_EN	0x00002000
#define BV_I2C_CTRL1_NO_SLAVE_ACK_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_NO_SLAVE_ACK_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_OVERSIZE_XFER_TERM_IRQ_EN	0x00001000
#define BV_I2C_CTRL1_OVERSIZE_XFER_TERM_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_OVERSIZE_XFER_TERM_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_EARLY_TERM_IRQ_EN	0x00000800
#define BV_I2C_CTRL1_EARLY_TERM_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_EARLY_TERM_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_MASTER_LOSS_IRQ_EN	0x00000400
#define BV_I2C_CTRL1_MASTER_LOSS_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_MASTER_LOSS_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_SLAVE_STOP_IRQ_EN	0x00000200
#define BV_I2C_CTRL1_SLAVE_STOP_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_SLAVE_STOP_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_SLAVE_IRQ_EN	0x00000100
#define BV_I2C_CTRL1_SLAVE_IRQ_EN__DISABLED 0x0
#define BV_I2C_CTRL1_SLAVE_IRQ_EN__ENABLED  0x1
#define BM_I2C_CTRL1_BUS_FREE_IRQ	0x00000080
#define BV_I2C_CTRL1_BUS_FREE_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_BUS_FREE_IRQ__REQUEST    0x1
#define BM_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ	0x00000040
#define BV_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_DATA_ENGINE_CMPLT_IRQ__REQUEST    0x1
#define BM_I2C_CTRL1_NO_SLAVE_ACK_IRQ	0x00000020
#define BV_I2C_CTRL1_NO_SLAVE_ACK_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_NO_SLAVE_ACK_IRQ__REQUEST    0x1
#define BM_I2C_CTRL1_OVERSIZE_XFER_TERM_IRQ	0x00000010
#define BV_I2C_CTRL1_OVERSIZE_XFER_TERM_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_OVERSIZE_XFER_TERM_IRQ__REQUEST    0x1
#define BM_I2C_CTRL1_EARLY_TERM_IRQ	0x00000008
#define BV_I2C_CTRL1_EARLY_TERM_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_EARLY_TERM_IRQ__REQUEST    0x1
#define BM_I2C_CTRL1_MASTER_LOSS_IRQ	0x00000004
#define BV_I2C_CTRL1_MASTER_LOSS_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_MASTER_LOSS_IRQ__REQUEST    0x1
#define BM_I2C_CTRL1_SLAVE_STOP_IRQ	0x00000002
#define BV_I2C_CTRL1_SLAVE_STOP_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_SLAVE_STOP_IRQ__REQUEST    0x1
#define BM_I2C_CTRL1_SLAVE_IRQ	0x00000001
#define BV_I2C_CTRL1_SLAVE_IRQ__NO_REQUEST 0x0
#define BV_I2C_CTRL1_SLAVE_IRQ__REQUEST    0x1

#define HW_I2C_STAT	(0x00000050)

#define BM_I2C_STAT_MASTER_PRESENT	0x80000000
#define BV_I2C_STAT_MASTER_PRESENT__UNAVAILABLE 0x0
#define BV_I2C_STAT_MASTER_PRESENT__AVAILABLE   0x1
#define BM_I2C_STAT_SLAVE_PRESENT	0x40000000
#define BV_I2C_STAT_SLAVE_PRESENT__UNAVAILABLE 0x0
#define BV_I2C_STAT_SLAVE_PRESENT__AVAILABLE   0x1
#define BM_I2C_STAT_ANY_ENABLED_IRQ	0x20000000
#define BV_I2C_STAT_ANY_ENABLED_IRQ__NO_REQUESTS          0x0
#define BV_I2C_STAT_ANY_ENABLED_IRQ__AT_LEAST_ONE_REQUEST 0x1
#define BM_I2C_STAT_GOT_A_NAK	0x10000000
#define BV_I2C_STAT_GOT_A_NAK__NO_NAK       0x0
#define BV_I2C_STAT_GOT_A_NAK__DETECTED_NAK 0x1
#define BP_I2C_STAT_RSVD1	24
#define BM_I2C_STAT_RSVD1	0x0F000000
#define BF_I2C_STAT_RSVD1(v)  \
		(((v) << 24) & BM_I2C_STAT_RSVD1)
#define BP_I2C_STAT_RCVD_SLAVE_ADDR	16
#define BM_I2C_STAT_RCVD_SLAVE_ADDR	0x00FF0000
#define BF_I2C_STAT_RCVD_SLAVE_ADDR(v)  \
		(((v) << 16) & BM_I2C_STAT_RCVD_SLAVE_ADDR)
#define BM_I2C_STAT_SLAVE_ADDR_EQ_ZERO	0x00008000
#define BV_I2C_STAT_SLAVE_ADDR_EQ_ZERO__ZERO_NOT_MATCHED 0x0
#define BV_I2C_STAT_SLAVE_ADDR_EQ_ZERO__WAS_ZERO         0x1
#define BM_I2C_STAT_SLAVE_FOUND	0x00004000
#define BV_I2C_STAT_SLAVE_FOUND__IDLE    0x0
#define BV_I2C_STAT_SLAVE_FOUND__WAITING 0x1
#define BM_I2C_STAT_SLAVE_SEARCHING	0x00002000
#define BV_I2C_STAT_SLAVE_SEARCHING__IDLE   0x0
#define BV_I2C_STAT_SLAVE_SEARCHING__ACTIVE 0x1
#define BM_I2C_STAT_DATA_ENGINE_DMA_WAIT	0x00001000
#define BV_I2C_STAT_DATA_ENGINE_DMA_WAIT__CONTINUE 0x0
#define BV_I2C_STAT_DATA_ENGINE_DMA_WAIT__WAITING  0x1
#define BM_I2C_STAT_BUS_BUSY	0x00000800
#define BV_I2C_STAT_BUS_BUSY__IDLE 0x0
#define BV_I2C_STAT_BUS_BUSY__BUSY 0x1
#define BM_I2C_STAT_CLK_GEN_BUSY	0x00000400
#define BV_I2C_STAT_CLK_GEN_BUSY__IDLE 0x0
#define BV_I2C_STAT_CLK_GEN_BUSY__BUSY 0x1
#define BM_I2C_STAT_DATA_ENGINE_BUSY	0x00000200
#define BV_I2C_STAT_DATA_ENGINE_BUSY__IDLE 0x0
#define BV_I2C_STAT_DATA_ENGINE_BUSY__BUSY 0x1
#define BM_I2C_STAT_SLAVE_BUSY	0x00000100
#define BV_I2C_STAT_SLAVE_BUSY__IDLE 0x0
#define BV_I2C_STAT_SLAVE_BUSY__BUSY 0x1
#define BM_I2C_STAT_BUS_FREE_IRQ_SUMMARY	0x00000080
#define BV_I2C_STAT_BUS_FREE_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_BUS_FREE_IRQ_SUMMARY__REQUEST    0x1
#define BM_I2C_STAT_DATA_ENGINE_CMPLT_IRQ_SUMMARY	0x00000040
#define BV_I2C_STAT_DATA_ENGINE_CMPLT_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_DATA_ENGINE_CMPLT_IRQ_SUMMARY__REQUEST    0x1
#define BM_I2C_STAT_NO_SLAVE_ACK_IRQ_SUMMARY	0x00000020
#define BV_I2C_STAT_NO_SLAVE_ACK_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_NO_SLAVE_ACK_IRQ_SUMMARY__REQUEST    0x1
#define BM_I2C_STAT_OVERSIZE_XFER_TERM_IRQ_SUMMARY	0x00000010
#define BV_I2C_STAT_OVERSIZE_XFER_TERM_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_OVERSIZE_XFER_TERM_IRQ_SUMMARY__REQUEST    0x1
#define BM_I2C_STAT_EARLY_TERM_IRQ_SUMMARY	0x00000008
#define BV_I2C_STAT_EARLY_TERM_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_EARLY_TERM_IRQ_SUMMARY__REQUEST    0x1
#define BM_I2C_STAT_MASTER_LOSS_IRQ_SUMMARY	0x00000004
#define BV_I2C_STAT_MASTER_LOSS_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_MASTER_LOSS_IRQ_SUMMARY__REQUEST    0x1
#define BM_I2C_STAT_SLAVE_STOP_IRQ_SUMMARY	0x00000002
#define BV_I2C_STAT_SLAVE_STOP_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_SLAVE_STOP_IRQ_SUMMARY__REQUEST    0x1
#define BM_I2C_STAT_SLAVE_IRQ_SUMMARY	0x00000001
#define BV_I2C_STAT_SLAVE_IRQ_SUMMARY__NO_REQUEST 0x0
#define BV_I2C_STAT_SLAVE_IRQ_SUMMARY__REQUEST    0x1

#define HW_I2C_DATA	(0x00000060)

#define BP_I2C_DATA_DATA	0
#define BM_I2C_DATA_DATA	0xFFFFFFFF
#define BF_I2C_DATA_DATA(v)	(v)

#define HW_I2C_DEBUG0	(0x00000070)
#define HW_I2C_DEBUG0_SET	(0x00000074)
#define HW_I2C_DEBUG0_CLR	(0x00000078)
#define HW_I2C_DEBUG0_TOG	(0x0000007c)

#define BM_I2C_DEBUG0_DMAREQ	0x80000000
#define BM_I2C_DEBUG0_DMAENDCMD	0x40000000
#define BM_I2C_DEBUG0_DMAKICK	0x20000000
#define BM_I2C_DEBUG0_DMATERMINATE	0x10000000
#define BP_I2C_DEBUG0_TBD	26
#define BM_I2C_DEBUG0_TBD	0x0C000000
#define BF_I2C_DEBUG0_TBD(v)  \
		(((v) << 26) & BM_I2C_DEBUG0_TBD)
#define BP_I2C_DEBUG0_DMA_STATE	16
#define BM_I2C_DEBUG0_DMA_STATE	0x03FF0000
#define BF_I2C_DEBUG0_DMA_STATE(v)  \
		(((v) << 16) & BM_I2C_DEBUG0_DMA_STATE)
#define BM_I2C_DEBUG0_START_TOGGLE	0x00008000
#define BM_I2C_DEBUG0_STOP_TOGGLE	0x00004000
#define BM_I2C_DEBUG0_GRAB_TOGGLE	0x00002000
#define BM_I2C_DEBUG0_CHANGE_TOGGLE	0x00001000
#define BM_I2C_DEBUG0_TESTMODE	0x00000800
#define BM_I2C_DEBUG0_SLAVE_HOLD_CLK	0x00000400
#define BP_I2C_DEBUG0_SLAVE_STATE	0
#define BM_I2C_DEBUG0_SLAVE_STATE	0x000003FF
#define BF_I2C_DEBUG0_SLAVE_STATE(v)  \
		(((v) << 0) & BM_I2C_DEBUG0_SLAVE_STATE)

#define HW_I2C_DEBUG1	(0x00000080)
#define HW_I2C_DEBUG1_SET	(0x00000084)
#define HW_I2C_DEBUG1_CLR	(0x00000088)
#define HW_I2C_DEBUG1_TOG	(0x0000008c)

#define BM_I2C_DEBUG1_I2C_CLK_IN	0x80000000
#define BM_I2C_DEBUG1_I2C_DATA_IN	0x40000000
#define BP_I2C_DEBUG1_RSVD4	28
#define BM_I2C_DEBUG1_RSVD4	0x30000000
#define BF_I2C_DEBUG1_RSVD4(v)  \
		(((v) << 28) & BM_I2C_DEBUG1_RSVD4)
#define BP_I2C_DEBUG1_DMA_BYTE_ENABLES	24
#define BM_I2C_DEBUG1_DMA_BYTE_ENABLES	0x0F000000
#define BF_I2C_DEBUG1_DMA_BYTE_ENABLES(v)  \
		(((v) << 24) & BM_I2C_DEBUG1_DMA_BYTE_ENABLES)
#define BP_I2C_DEBUG1_CLK_GEN_STATE	16
#define BM_I2C_DEBUG1_CLK_GEN_STATE	0x00FF0000
#define BF_I2C_DEBUG1_CLK_GEN_STATE(v)  \
		(((v) << 16) & BM_I2C_DEBUG1_CLK_GEN_STATE)
#define BP_I2C_DEBUG1_RSVD2	11
#define BM_I2C_DEBUG1_RSVD2	0x0000F800
#define BF_I2C_DEBUG1_RSVD2(v)  \
		(((v) << 11) & BM_I2C_DEBUG1_RSVD2)
#define BP_I2C_DEBUG1_LST_MODE	9
#define BM_I2C_DEBUG1_LST_MODE	0x00000600
#define BF_I2C_DEBUG1_LST_MODE(v)  \
		(((v) << 9) & BM_I2C_DEBUG1_LST_MODE)
#define BV_I2C_DEBUG1_LST_MODE__BCAST    0x0
#define BV_I2C_DEBUG1_LST_MODE__MY_WRITE 0x1
#define BV_I2C_DEBUG1_LST_MODE__MY_READ  0x2
#define BV_I2C_DEBUG1_LST_MODE__NOT_ME   0x3
#define BM_I2C_DEBUG1_LOCAL_SLAVE_TEST	0x00000100
#define BP_I2C_DEBUG1_RSVD1	5
#define BM_I2C_DEBUG1_RSVD1	0x000000E0
#define BF_I2C_DEBUG1_RSVD1(v)  \
		(((v) << 5) & BM_I2C_DEBUG1_RSVD1)
#define BM_I2C_DEBUG1_FORCE_CLK_ON	0x00000010
#define BM_I2C_DEBUG1_FORCE_ARB_LOSS	0x00000008
#define BM_I2C_DEBUG1_FORCE_RCV_ACK	0x00000004
#define BM_I2C_DEBUG1_FORCE_I2C_DATA_OE	0x00000002
#define BM_I2C_DEBUG1_FORCE_I2C_CLK_OE	0x00000001

#define HW_I2C_VERSION	(0x00000090)

#define BP_I2C_VERSION_MAJOR	24
#define BM_I2C_VERSION_MAJOR	0xFF000000
#define BF_I2C_VERSION_MAJOR(v) \
		(((v) << 24) & BM_I2C_VERSION_MAJOR)
#define BP_I2C_VERSION_MINOR	16
#define BM_I2C_VERSION_MINOR	0x00FF0000
#define BF_I2C_VERSION_MINOR(v)  \
		(((v) << 16) & BM_I2C_VERSION_MINOR)
#define BP_I2C_VERSION_STEP	0
#define BM_I2C_VERSION_STEP	0x0000FFFF
#define BF_I2C_VERSION_STEP(v)  \
		(((v) << 0) & BM_I2C_VERSION_STEP)
#endif /* __ARCH_ARM___I2C_H */
