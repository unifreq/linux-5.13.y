/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * rt715-sdca-sdw.h -- RT715 ALSA SoC audio driver header
 *
 * Copyright(c) 2020 Realtek Semiconductor Corp.
 */

#ifndef __RT715_SDW_SDCA_H__
#define __RT715_SDW_SDCA_H__

#include <linux/soundwire/sdw_registers.h>

static const struct reg_default rt715_reg_defaults_sdca[] = {
	{ 0x201a, 0x00 },
	{ 0x201e, 0x00 },
	{ 0x2020, 0x00 },
	{ 0x2021, 0x00 },
	{ 0x2022, 0x00 },
	{ 0x2023, 0x00 },
	{ 0x2024, 0x00 },
	{ 0x2025, 0x01 },
	{ 0x2026, 0x00 },
	{ 0x2027, 0x00 },
	{ 0x2029, 0x00 },
	{ 0x202a, 0x00 },
	{ 0x202d, 0x00 },
	{ 0x202e, 0x00 },
	{ 0x202f, 0x00 },
	{ 0x2030, 0x00 },
	{ 0x2031, 0x00 },
	{ 0x2032, 0x00 },
	{ 0x2033, 0x00 },
	{ 0x2034, 0x00 },
	{ 0x2230, 0x00 },
	{ 0x2231, 0x2f },
	{ 0x2232, 0x80 },
	{ 0x2233, 0x00 },
	{ 0x2234, 0x00 },
	{ 0x2235, 0x00 },
	{ 0x2236, 0x00 },
	{ 0x2237, 0x00 },
	{ 0x2238, 0x00 },
	{ 0x2239, 0x00 },
	{ 0x2f01, 0x00 },
	{ 0x2f02, 0x09 },
	{ 0x2f03, 0x0b },
	{ 0x2f04, 0x00 },
	{ 0x2f05, 0x0e },
	{ 0x2f06, 0x01 },
	{ 0x2f08, 0x00 },
	{ 0x2f09, 0x00 },
	{ 0x2f0a, 0x00 },
	{ 0x2f0b, 0x00 },
	{ 0x2f0c, 0x00 },
	{ 0x2f0d, 0x00 },
	{ 0x2f0e, 0x12 },
	{ 0x2f0f, 0x00 },
	{ 0x2f10, 0x00 },
	{ 0x2f11, 0x00 },
	{ 0x2f12, 0x00 },
	{ 0x2f13, 0x00 },
	{ 0x2f14, 0x00 },
	{ 0x2f15, 0x00 },
	{ 0x2f16, 0x00 },
	{ 0x2f17, 0x00 },
	{ 0x2f18, 0x00 },
	{ 0x2f19, 0x03 },
	{ 0x2f1a, 0x00 },
	{ 0x2f1f, 0x10 },
	{ 0x2f20, 0x00 },
	{ 0x2f21, 0x00 },
	{ 0x2f22, 0x00 },
	{ 0x2f23, 0x00 },
	{ 0x2f24, 0x00 },
	{ 0x2f25, 0x00 },
	{ 0x2f52, 0x01 },
	{ 0x2f5a, 0x02 },
	{ 0x2f5b, 0x05 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_CX_CLK_SEL_EN,
		RT715_SDCA_CX_CLK_SEL_CTRL, CH_00), 0x1 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_01), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_02), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_03), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_04), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_01), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_02), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_03), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_04), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC7_27_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_01), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC7_27_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_02), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_SMPU_TRIG_ST_EN,
		RT715_SDCA_SMPU_TRIG_EN_CTRL, CH_00), 0x02 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_SMPU_TRIG_ST_EN,
		RT715_SDCA_SMPU_TRIG_ST_CTRL, CH_00), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC7_27_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_01), 0x01 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC7_27_VOL,
		RT715_SDCA_FU_MUTE_CTRL, CH_02), 0x01 },
};

static const struct reg_default rt715_mbq_reg_defaults_sdca[] = {
	{ 0x200002b, 0x0420 },
	{ 0x2000036, 0x0000 },
	{ 0x2000037, 0x0000 },
	{ 0x2000039, 0xaa81 },
	{ 0x6100000, 0x0100 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_01), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_02), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_03), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC8_9_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_04), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_01), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_02), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_03), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC10_11_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_04), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC7_27_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_01), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_ADC7_27_VOL,
		RT715_SDCA_FU_VOL_CTRL, CH_02), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_01), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_02), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_03), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_04), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_05), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_06), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_07), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_AMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_08), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_01), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_02), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_03), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_04), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_05), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_06), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_07), 0x00 },
	{ SDW_SDCA_CTL(FUN_MIC_ARRAY, RT715_SDCA_FU_DMIC_GAIN_EN,
		RT715_SDCA_FU_DMIC_GAIN_CTRL, CH_08), 0x00 },
};
#endif /* __RT715_SDW_SDCA_H__ */
