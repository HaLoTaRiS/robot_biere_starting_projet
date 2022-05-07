/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_dma.h"
#include "fsl_common.h"
#include "fsl_usart_cmsis.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Used DMA device. */
#define DMA0_DMA_BASEADDR DMA0
/* Definition of peripheral ID */
#define FLEXCOMM0_PERIPHERAL Driver_USART0
/* Definition of the clock source frequency */
#define FLEXCOMM0_CLOCK_SOURCE_FREQ 48000000UL

/***********************************************************************************************************************
 * Global functions
 **********************************************************************************************************************/
/* Signal event function for component FLEXCOMM0*/
extern void USART0_SignalEvent(uint32_t event);
/* Get clock source frequency function for component FLEXCOMM0 */
uint32_t USART0_GetFreq(void);

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/

void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
