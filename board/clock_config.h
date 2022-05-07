/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_XTAL32K_CLK_HZ                          32768U  /*!< Board xtal32K frequency in Hz */

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 *************** Configuration BOARD_BootClockFRO12M_PLL_150MHz ****************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockFRO12M_PLL_150MHz configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKFRO12M_PLL_150MHZ_CORE_CLOCK 150000000U /*!< Core clock frequency: 150000000Hz */


/*******************************************************************************
 * API for BOARD_BootClockFRO12M_PLL_150MHz configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockFRO12M_PLL_150MHz(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */

