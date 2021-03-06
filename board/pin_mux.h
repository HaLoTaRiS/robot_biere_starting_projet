/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Analog switch is open (disabled) */
#define IOCON_PIO_ASW_DI 0x00u
/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x0100u
/*!
 * @brief Selects pin function 0 */
#define IOCON_PIO_FUNC0 0x00u
/*!
 * @brief Selects pin function 6 */
#define IOCON_PIO_FUNC6 0x06u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief No addition pin function */
#define IOCON_PIO_MODE_INACT 0x00u
/*!
 * @brief Selects pull-up function */
#define IOCON_PIO_MODE_PULLUP 0x20u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u
/*!
 * @brief Standard mode, output slew rate control is enabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_29_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_29_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_30_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_30_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_5_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_5_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_6_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_6_FUNC_ALT0 0x00u
/*!
 * @brief Selects function mode (on-chip pull-up/pull-down resistor control).: Pull-up. Pull-up resistor enabled. */
#define PIO1_6_MODE_PULL_UP 0x02u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_7_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_7_FUNC_ALT0 0x00u
/*!
 * @brief Selects function mode (on-chip pull-up/pull-down resistor control).: Pull-up. Pull-up resistor enabled. */
#define PIO1_7_MODE_PULL_UP 0x02u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_9_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_9_FUNC_ALT0 0x00u
/*!
 * @brief Selects function mode (on-chip pull-up/pull-down resistor control).: Pull-up. Pull-up resistor enabled. */
#define PIO1_9_MODE_PULL_UP 0x02u

/*! @name PIO1_4 (number 1), R78/P18[5]/LEDR/PWM_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_RED_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_RED_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */
#define BOARD_LED_RED_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_RED_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_LED_RED_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                               /* @} */

/*! @name PIO1_6 (number 5), R80/P18[9]/LEDB/PWM_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_BLUE_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_BLUE_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */
#define BOARD_LED_BLUE_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_BLUE_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_LED_BLUE_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                /* @} */

/*! @name PIO1_7 (number 9), R79/P18[7]/LEDG/PWM_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_LED_GREEN_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_LED_GREEN_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */
#define BOARD_LED_GREEN_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_LED_GREEN_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_LED_GREEN_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                 /* @} */

/*! @name PIO1_9 (number 10), S3/P18[1]/PIO1_9_GPIO_ARD
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_SW2_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_SW2_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */
#define BOARD_SW2_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_SW2_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_SW2_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*! @name PIO0_5 (number 88), S1/J10[1]/U3[12]/P17[8]/P7[7]/U11[4]/P0_5-ISP1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_SW1_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_SW1_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */
#define BOARD_SW1_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_SW1_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_SW1_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                           /* @} */

/*! @name PIO0_29 (number 92), P8[2]/U6[13]/FC0_USART_RXD
  @{ */
#define BOARD_DEBUG_UART_RX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_RX_PIN 29U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_RX_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PIO0_30 (number 94), P8[3]/U6[12]/FC0_USART_TXD
  @{ */
#define BOARD_DEBUG_UART_TX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_UART_TX_PIN 30U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_UART_TX_PIN_MASK (1U << 30U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PIO0_10 (number 21), U14[12]/SWO_TRGT
  @{ */
#define BOARD_DEBUG_SWD_SWO_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_DEBUG_SWD_SWO_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_DEBUG_SWD_SWO_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
