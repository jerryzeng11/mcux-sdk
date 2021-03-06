/*
 * Copyright 2017-2019 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: MIMX8QX6xxxFZ
package_id: MIMX8QX6AVLFZ
mcu_data: ksdk2_0
processor_version: 0.0.0
board: MIMX8QX-MEK-REV-B
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "pin_mux.h"
#include "fsl_common.h"
#include "main/imx8qx_pads.h"
#include "svc/pad/pad_api.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'false', coreID: m4}
- pin_list:
  - {pin_num: V32, peripheral: M40__UART0, signal: uart_rx, pin_signal: ADC_IN2, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: V30, peripheral: M40__UART0, signal: uart_tx, pin_signal: ADC_IN3, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: L29, peripheral: ADMA__ACM, signal: 'acm_mclk_out, 0', pin_signal: MCLK_OUT0, identifier: AUDIO_MCLK, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: L35, peripheral: ADMA__SAI1, signal: sai_txc, pin_signal: SAI1_RXC, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: N35, peripheral: ADMA__SAI1, signal: sai_txfs, pin_signal: SAI1_RXFS, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: R35, peripheral: ADMA__SAI1, signal: sai_txd, pin_signal: SPI0_CS1, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: M32, peripheral: ADMA__SAI1, signal: sai_rxd, pin_signal: SAI1_RXD, PULL: PULL_0, sw_config: sw_config_2}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(sc_ipc_t ipc)                          /*!< Function assigned for the core: Cortex-M4F[m4] */
{
  sc_err_t err = SC_ERR_NONE;

  err = sc_pad_set_all(ipc, BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ADC_IN2 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ADC_IN3 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_AUDIO_MCLK_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_MCLK_OUT0 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_SAI1_TXC_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_SAI1_RXC register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_SAI1_RXD_PIN_FUNCTION_ID, 0U, SC_PAD_CONFIG_OD_IN, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_SAI1_RXD register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_SAI1_TXFS_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_SAI1_RXFS register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_INITPINS_SAI1_TXD_PIN_FUNCTION_ID, 2U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_SPI0_CS1 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_I2C_ConfigurePins:
- options: {callFromInitBoot: 'false', coreID: m4}
- pin_list:
  - {pin_num: U35, peripheral: M40__I2C0, signal: i2c_scl, pin_signal: ADC_IN0, PULL: PULL_0, sw_config: sw_config_0}
  - {pin_num: U33, peripheral: M40__I2C0, signal: i2c_sda, pin_signal: ADC_IN1, PULL: PULL_0, sw_config: sw_config_0}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_I2C_ConfigurePins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_I2C_ConfigurePins(sc_ipc_t ipc)                 /*!< Function assigned for the core: Cortex-M4F[m4] */
{
  sc_err_t err = SC_ERR_NONE;

  err = sc_pad_set_all(ipc, BOARD_I2C_CONFIGUREPINS_M4_I2C0_1V8_SCL_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ADC_IN0 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
  err = sc_pad_set_all(ipc, BOARD_I2C_CONFIGUREPINS_M4_I2C0_1V8_SDA_PIN_FUNCTION_ID, 1U, SC_PAD_CONFIG_NORMAL, SC_PAD_ISO_OFF, 0x0 ,SC_PAD_WAKEUP_OFF);/* IOMUXD_ADC_IN1 register modification value */
  if (SC_ERR_NONE != err)
  {
      assert(false);
  }
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
