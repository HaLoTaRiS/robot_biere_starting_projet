/*
 * Projet Robot Bière
 * Example code Led
 * Baptiste FRITOT
 * Version : 1.0
 *
 * Configuration UART : 112500 baud
 *
 */
#include <stdio.h>
#include "fsl_device_registers.h" // pour printf
#include "fsl_debug_console.h" // pour printf

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "peripherals.h"

#include "fsl_power.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_LED_PORT BOARD_LED_BLUE_GPIO_PORT
#define BOARD_LED_PIN  BOARD_LED_BLUE_GPIO_PIN


/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
volatile uint32_t g_systickCounter;

/*******************************************************************************
 * Code
 ******************************************************************************/
void SysTick_Handler(void)
{
	if (g_systickCounter != 0U)
	{
		g_systickCounter--;
	}
}

void SysTick_DelayTicks(uint32_t n)
{
	g_systickCounter = n;
	while (g_systickCounter != 0U)
	{
	}
}

/*!
 * @brief Main function
 */
int main(void)
{
	/* Init output LED GPIO. */
	GPIO_PortInit(GPIO, BOARD_LED_BLUE_GPIO_PORT);
	GPIO_PortInit(GPIO, BOARD_LED_GREEN_GPIO_PORT);
	GPIO_PortInit(GPIO, BOARD_LED_RED_GPIO_PORT);

	GPIO_PortInit(GPIO, BOARD_SW1_PORT);
	GPIO_PortInit(GPIO, BOARD_SW2_PORT);

	/* set BOD VBAT level to 1.65V */
	POWER_SetBodVbatLevel(kPOWER_BodVbatLevel1650mv, kPOWER_BodHystLevel50mv, false);
	/* attach main clock divide to FLEXCOMM0 (debug console) */

	BOARD_InitBootPins(); 			// initialise les E/S de la board OKDO E1

	BOARD_InitBootClocks(); 		// Initialise l'horloge 150 Mhz

	CLOCK_AttachClk(BOARD_DEBUG_UART_CLK_ATTACH);
	BOARD_InitDebugConsole();

	/* Set systick reload value to generate 1ms interrupt */
	if (SysTick_Config(SystemCoreClock / 1000U))
	{
		while (1)
		{
		}
	}
	PRINTF("Projet Robot biere : Example Code Led/switch \r\n");
	while (1)
	{
		/* Code pour lecture bouton poussoir */
		if (GPIO_PinRead(GPIO, BOARD_SW1_PORT,BOARD_SW1_PIN ) == 0x0){
			LED_BLUE_ON();
			PRINTF("SWITCH1 ON => LED BLUE ON ! \r\n");
		}
		else {
			LED_BLUE_OFF();
		}
		if (GPIO_PinRead(GPIO, BOARD_SW2_PORT,BOARD_SW2_PIN ) == 0x0){
			LED_GREEN_ON();
			PRINTF("SWITCH2 ON => LED GREEN ON ! \r\n");
		}
		else {
			LED_GREEN_OFF();
		}

		// Change l'état de la sortie :  alternativement
		GPIO_PortToggle(GPIO, BOARD_LED_RED_GPIO_PORT, 1u << BOARD_LED_RED_GPIO_PIN);
		SysTick_DelayTicks(300U);
	}
}
