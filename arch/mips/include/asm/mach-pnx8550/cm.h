/*
 *
 * BRIEF MODULE DESCRIPTION
 *   Clock module specific definitions
 *
 * Author: source@mvista.com
 *
 *  This program is free software; you can distribute it and/or modify it
 *  under the terms of the GNU General Public License (Version 2) as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place - Suite 330, Boston MA 02111-1307, USA.
 */

#ifndef __PNX8550_CM_H
#define __PNX8550_CM_H

#define PNX8550_CM_BASE	0xBBE47000

// PLL0: MIPS core
// PLL1: TM32 core #1
// PLL2: QVCP #1
// PLL3: QVCP #2
// PLL5: DRAM
// PLL6: TM32 core #2
#define PNX8550_CM_PLL0_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x000)
#define PNX8550_CM_PLL1_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x004)
#define PNX8550_CM_PLL2_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x008)
#define PNX8550_CM_PLL3_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x00C)
#define PNX8550_CM_PLL4_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x010)
#define PNX8550_CM_PLL5_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x014)
#define PNX8550_CM_PLL6_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x048)
#define PNX8550_CM_PLL1728_CTL *(volatile unsigned long *)(PNX8550_CM_BASE + 0x018)

// DDS0: AICP/QVCP #1
// DDS1: AICP/QVCP #2
// DDS3: probably AI1 oversampling clock
// DDS4: AO1 oversampling clock
// DDS5: probably AI2 oversampling clock
// DDS6: probably AO2 oversampling clock
// DDS8: probably SPDIF clock
// DDS9: probably TSDMA clock
#define PNX8550_CM_DDS0_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x01C)
#define PNX8550_CM_DDS1_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x020)
#define PNX8550_CM_DDS2_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x024)
#define PNX8550_CM_DDS3_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x028)
#define PNX8550_CM_DDS4_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x02C)
#define PNX8550_CM_DDS5_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x030)
#define PNX8550_CM_DDS6_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x034)
#define PNX8550_CM_DDS7_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x038)
#define PNX8550_CM_DDS8_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x03C)
#define PNX8550_CM_DDS9_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x040)
#define PNX8550_CM_CAB_POWERDOWN *(volatile unsigned long *)(PNX8550_CM_BASE + 0x044)
#define PNX8550_CM_CAB_102_CTR 0x0e
#define PNX8550_CM_CAB_108_CTR 0x0f
#define PNX8550_CM_CAB_115_CTR 0x10
#define PNX8550_CM_CAB_123_CTR 0x11
#define PNX8550_CM_CAB_133_CTR 0x12
#define PNX8550_CM_CAB_144_CTR 0x13
#define PNX8550_CM_CAB_157_CTR 0x14
#define PNX8550_CM_CAB_173_CTR 0x15
#define PNX8550_CM_CAB_192_CTR 0x16
#define PNX8550_CM_CAB_27_CTR  0x04

// SPDO and AO1 are verified, the rest is guessed
#define PNX8550_CM_SPDO_BCLK_CTL  *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB00)
#define PNX8550_CM_AI1_OSCK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB04)
#define PNX8550_CM_AO1_OSCK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB08)
#define PNX8550_CM_AI2_OSCK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB0C)
#define PNX8550_CM_AO2_OSCK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB10)
#define PNX8550_CM_AI1_SCLK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB18)
#define PNX8550_CM_AO1_SCLK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB1C)
#define PNX8550_CM_AI2_SCLK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB20)
#define PNX8550_CM_AO2_SCLK_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0xB24)
#define PNX8550_CM_SPDO_BCLK_CTR  0x46
#define PNX8550_CM_AI1_OSCK_CTR   0x3e
#define PNX8550_CM_AO1_OSCK_CTR   0x40
#define PNX8550_CM_AI2_OSCK_CTR   0x42
#define PNX8550_CM_AO2_OSCK_CTR   0x44
#define PNX8550_CM_AI1_SCLK_CTR   0x3f
#define PNX8550_CM_AO1_SCLK_CTR   0x41
#define PNX8550_CM_AI2_SCLK_CTR   0x43
#define PNX8550_CM_AO2_SCLK_CTR   0x45

// from PNX2015 datasheet
#define PNX8550_CM_QVCP1_OUT_CTL   (*(volatile unsigned long *)(PNX8550_CM_BASE + 0xa00))
#define PNX8550_CM_QVCP1_PIX_CTL   (*(volatile unsigned long *)(PNX8550_CM_BASE + 0xa04))
#define PNX8550_CM_QVCP1_PROC_CTL  (*(volatile unsigned long *)(PNX8550_CM_BASE + 0xa18))
#define PNX8550_CM_QVCP1_PLL       PNX8550_CM_PLL2_CTL
#define PNX8550_CM_QVCP1_DDS       PNX8550_CM_DDS0_CTL
#define PNX8550_CM_QVCP2_OUT_CTL   (*(volatile unsigned long *)(PNX8550_CM_BASE + 0xa08))
#define PNX8550_CM_QVCP2_PIX_CTL   (*(volatile unsigned long *)(PNX8550_CM_BASE + 0xa0c))
#define PNX8550_CM_QVCP2_PROC_CTL  (*(volatile unsigned long *)(PNX8550_CM_BASE + 0xa1c))
#define PNX8550_CM_QVCP2_PLL       PNX8550_CM_PLL3_CTL
#define PNX8550_CM_QVCP2_DDS       PNX8550_CM_DDS1_CTL
#define PNX8550_CM_QVCP_CLK_DIV_1   0x00
#define PNX8550_CM_QVCP_CLK_DIV_2   0x08
#define PNX8550_CM_QVCP_CLK_DIV_3   0x10
#define PNX8550_CM_QVCP_CLK_DIV_4   0x18
#define PNX8550_CM_QVCP_CLK_DIV_6   0x20
#define PNX8550_CM_QVCP_CLK_DIV_8   0x28
#define PNX8550_CM_QVCP_CLK_PROC17  0x38
#define PNX8550_CM_QVCP_CLK_PROC33  0x30
#define PNX8550_CM_QVCP_CLK_PROC39  0x28
#define PNX8550_CM_QVCP_CLK_PROC58  0x20
#define PNX8550_CM_QVCP_CLK_PROC76  0x18
#define PNX8550_CM_QVCP_CLK_PROC86  0x10
#define PNX8550_CM_QVCP_CLK_PROC96  0x08
#define PNX8550_CM_QVCP_CLK_PROC108 0x00
#define PNX8550_CM_QVCP1_OUT_CTR   0x38
#define PNX8550_CM_QVCP1_PIX_CTR   0x39
#define PNX8550_CM_QVCP1_PROC_CTR  0x3a
#define PNX8550_CM_QVCP2_OUT_CTR   0x3b
#define PNX8550_CM_QVCP2_PIX_CTR   0x3c
#define PNX8550_CM_QVCP2_PROC_CTR  0x3d

#define PNX8550_CM_MEM_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x100)
#define PNX8550_CM_FREQ_CTR  *(volatile unsigned long *)(PNX8550_CM_BASE + 0x104)
#define PNX8550_CM_MIPS_CTL  *(volatile unsigned long *)(PNX8550_CM_BASE + 0x200)
#define PNX8550_CM_TM0_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x204)
#define PNX8550_CM_TM1_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x208)
#define PNX8550_CM_MDCSN_CTL *(volatile unsigned long *)(PNX8550_CM_BASE + 0x20c)
#define PNX8550_CM_MDTL_CTL  *(volatile unsigned long *)(PNX8550_CM_BASE + 0x210)
#define PNX8550_CM_TDCSN_CTL *(volatile unsigned long *)(PNX8550_CM_BASE + 0x214)
#define PNX8550_CM_TDTL_CTL  *(volatile unsigned long *)(PNX8550_CM_BASE + 0x218)
#define PNX8550_CM_TUNNEL_CTL *(volatile unsigned long *)(PNX8550_CM_BASE + 0x21c)
#define PNX8550_CM_TM_CLK_PLL    0x02
#define PNX8550_CM_TM_CLK_MIPS   0x04
#define PNX8550_CM_MEM_CTR   0x37
#define PNX8550_CM_MIPS_CTR  0x17
#define PNX8550_CM_TM0_CTR   0x18
#define PNX8550_CM_TM1_CTR   0x19
#define PNX8550_CM_MDCSN_CTR 0x1a
#define PNX8550_CM_MDTL_CTR  0x1b
#define PNX8550_CM_TDCSN_CTR 0x1c
#define PNX8550_CM_TDTL_CTR  0x1d
#define PNX8550_CM_TUNNEL_CTR 0x1e

#define PNX8550_CM_VMPG_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x400)
#define PNX8550_CM_VLD_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x404)
#define PNX8550_CM_MBS1_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x500)
#define PNX8550_CM_MBS2_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x750)
#define PNX8550_CM_MBS3_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x504)
#define PNX8550_CM_VIP1_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x600)
#define PNX8550_CM_VIP2_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x604)
#define PNX8550_CM_MSP1_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x800)
#define PNX8550_CM_MSP2_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x804)
#define PNX8550_CM_TSTAMP_CTL *(volatile unsigned long *)(PNX8550_CM_BASE + 0xb30)
#define PNX8550_CM_TSDMA_CTL  *(volatile unsigned long *)(PNX8550_CM_BASE + 0xb34)
#define PNX8550_CM_DVDCSS_CTL *(volatile unsigned long *)(PNX8550_CM_BASE + 0xb3c)
#define PNX8550_CM_VMPG_CTR   0x22
#define PNX8550_CM_VLD_CTR    0x23
#define PNX8550_CM_MBS1_CTR   0x20
#define PNX8550_CM_MBS2_CTR   0x4d
#define PNX8550_CM_MBS3_CTR   0x21
#define PNX8550_CM_VIP1_CTR   0x4b
#define PNX8550_CM_VIP2_CTR   0x4c
#define PNX8550_CM_MSP1_CTR1  0x30
#define PNX8550_CM_MSP1_CTR2  0x31
#define PNX8550_CM_MSP2_CTR1  0x32
#define PNX8550_CM_MSP2_CTR2  0x33
#define PNX8550_CM_TSTAMP_CTR 0x35
#define PNX8550_CM_TSDMA_CTR  0x4f
#define PNX8550_CM_DVDCSS_CTR 0x2e

#define PNX8550_CM_OHCI_CTL     *(volatile unsigned long *)(PNX8550_CM_BASE + 0x710)
#define PNX8550_CM_I2C_HP_CTL   *(volatile unsigned long *)(PNX8550_CM_BASE + 0x714)
#define PNX8550_CM_I2C_FAST_CTL *(volatile unsigned long *)(PNX8550_CM_BASE + 0x718)
#define PNX8550_CM_UART1_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x71c)
#define PNX8550_CM_UART2_CTL    *(volatile unsigned long *)(PNX8550_CM_BASE + 0x720)
#define PNX8550_CM_SC1_CTL      *(volatile unsigned long *)(PNX8550_CM_BASE + 0x728)
#define PNX8550_CM_SC2_CTL      *(volatile unsigned long *)(PNX8550_CM_BASE + 0x72c)
#define PNX8550_CM_CLK_ENABLE  0x01
#define PNX8550_CM_CLK_FCLOCK  0x02
#define PNX8550_CM_OHCI_CTR1    0x26
#define PNX8550_CM_OHCI_CTR2    0x27
#define PNX8550_CM_I2C_HP_CTR   0x28
#define PNX8550_CM_I2C_FAST_CTR 0x29
#define PNX8550_CM_UART1_CTR    0x2a
#define PNX8550_CM_UART2_CTR    0x2b
#define PNX8550_CM_SC1_CTR      0x2c
#define PNX8550_CM_SC2_CTR      0x2d

#define PNX8550_CM_PLL_BLOCKED_MASK     0x80000000
#define PNX8550_CM_PLL_LOCK_MASK        0x40000000
#define PNX8550_CM_PLL_CURRENT_ADJ_MASK 0x3c000000
#define PNX8550_CM_PLL_N_MASK           0x01ff0000
#define PNX8550_CM_PLL_M_MASK           0x00003f00
#define PNX8550_CM_PLL_P_MASK           0x0000000c
#define PNX8550_CM_PLL_PD_MASK          0x00000002

#define PNX8550_CM_PLL_POWERDOWN        PNX8550_CM_PLL_PD_MASK
#define PNX8550_CM_PLL_27MHZ            0x3828050c
#define PNX8550_CM_DDS_27MHZ            0x04000000

#endif
