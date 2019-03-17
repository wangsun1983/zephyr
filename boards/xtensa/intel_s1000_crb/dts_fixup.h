/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* Board level DTS fixup file */

#define DT_CODEC_I2C_BUS_NAME		\
	DT_SNPS_DESIGNWARE_I2C_80400_TI_TLV320DAC_18_BUS_NAME

#define DT_CODEC_I2C_BUS_ADDR		\
	DT_SNPS_DESIGNWARE_I2C_80400_TI_TLV320DAC_18_BASE_ADDRESS

#define DT_CODEC_NAME			\
	DT_SNPS_DESIGNWARE_I2C_80400_TI_TLV320DAC_18_LABEL

#define CONFIG_SPI_NOR_SPI_NAME			\
	DT_SNPS_DESIGNWARE_SPI_E000_SPI_FLASH_0_BUS_NAME

#define CONFIG_SPI_NOR_SPI_FREQ_0		\
	DT_SNPS_DESIGNWARE_SPI_E000_SPI_FLASH_0_SPI_MAX_FREQUENCY

#define CONFIG_SPI_NOR_DRV_NAME			\
	DT_SNPS_DESIGNWARE_SPI_E000_SPI_FLASH_0_LABEL

#define CONFIG_SPI_NOR_SPI_SLAVE		\
	DT_SNPS_DESIGNWARE_SPI_E000_SPI_FLASH_0_BASE_ADDRESS
/* End of Board Level DTS fixup file */