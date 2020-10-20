/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "fsl_common.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
#include "fsl_lptmr.h"
#include "fsl_pit.h"
#include "fsl_clock.h"
#include "fsl_ftm.h"
#include "fsl_dspi.h"
#include "fsl_uart.h"
#include "fsl_lpuart.h"
#include "fsl_i2c.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for RTEPIP_Basic functional group */
/* Used DMA device. */
#define DMA_DMA_BASEADDR DMA0
/* Associated DMAMUX device that is used for muxing of requests. */
#define DMA_DMAMUX_BASEADDR DMAMUX
/* Alias for GPIOA peripheral */
#define GPIOA_GPIO GPIOA
/* Alias for PORTA */
#define GPIOA_PORT PORTA
/* GPIOA interrupt vector ID (number). */
#define GPIOA_IRQN PORTA_IRQn
/* GPIOA interrupt vector priority. */
#define GPIOA_IRQ_PRIORITY 4
/* GPIOA interrupt handler identifier. */
#define GPIOA_IRQHANDLER PORTA_IRQHandler
/* Alias for GPIOB peripheral */
#define GPIOB_GPIO GPIOB
/* Alias for PORTB */
#define GPIOB_PORT PORTB
/* GPIOB interrupt vector ID (number). */
#define GPIOB_IRQN PORTB_IRQn
/* GPIOB interrupt vector priority. */
#define GPIOB_IRQ_PRIORITY 4
/* GPIOB interrupt handler identifier. */
#define GPIOB_IRQHANDLER PORTB_IRQHandler
/* Alias for GPIOC peripheral */
#define GPIOC_GPIO GPIOC
/* Alias for PORTC */
#define GPIOC_PORT PORTC
/* GPIOC interrupt vector ID (number). */
#define GPIOC_IRQN PORTC_IRQn
/* GPIOC interrupt vector priority. */
#define GPIOC_IRQ_PRIORITY 4
/* GPIOC interrupt handler identifier. */
#define GPIOC_IRQHANDLER PORTC_IRQHandler
/* Alias for GPIOD peripheral */
#define GPIOD_GPIO GPIOD
/* Alias for PORTD */
#define GPIOD_PORT PORTD
/* GPIOD interrupt vector ID (number). */
#define GPIOD_IRQN PORTD_IRQn
/* GPIOD interrupt vector priority. */
#define GPIOD_IRQ_PRIORITY 4
/* GPIOD interrupt handler identifier. */
#define GPIOD_IRQHANDLER PORTD_IRQHandler
/* Alias for GPIOE peripheral */
#define GPIOE_GPIO GPIOE
/* Alias for PORTE */
#define GPIOE_PORT PORTE
/* GPIOE interrupt vector ID (number). */
#define GPIOE_IRQN PORTE_IRQn
/* GPIOE interrupt vector priority. */
#define GPIOE_IRQ_PRIORITY 4
/* GPIOE interrupt handler identifier. */
#define GPIOE_IRQHANDLER PORTE_IRQHandler
/* RTEPIP_Basic defines for LPTMR0 */
/* Definition of peripheral ID */
#define LPTMR0_PERIPHERAL LPTMR0
/* Definition of the clock source frequency */
#define LPTMR0_CLK_FREQ 50000000UL
/* Definition of the prescaled clock source frequency */
#define LPTMR0_INPUT_FREQ 50000000UL
/* Definition of the timer period in us */
#define LPTMR0_USEC_COUNT 1000UL
/* Definition of the timer period in number of ticks */
#define LPTMR0_TICKS 50000UL
/* LPTMR0 interrupt vector ID (number). */
#define LPTMR0_IRQN LPTMR0_IRQn
/* LPTMR0 interrupt vector priority. */
#define LPTMR0_IRQ_PRIORITY 5
/* LPTMR0 interrupt handler identifier. */
#define LPTMR0_IRQHANDLER LPTMR0_IRQHandler
/* RTEPIP_Basic defines for PIT */
/* Definition of peripheral ID. */
#define PIT_PERIPHERAL PIT
/* Definition of clock source. */
#define PIT_CLOCK_SOURCE kCLOCK_BusClk
/* Definition of clock source frequency. */
#define PIT_CLK_FREQ CLOCK_GetFreq(PIT_CLOCK_SOURCE)

/* Definitions for RTEPIP_Device functional group */
/* Definition of peripheral ID */
#define ENCO_L_PERIPHERAL FTM2
/* Definition of the clock source frequency */
#define ENCO_L_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_BusClk)
/* ENCO_L interrupt vector ID (number). */
#define ENCO_L_IRQN FTM2_IRQn
/* ENCO_L interrupt handler identifier. */
#define ENCO_L_IRQHANDLER FTM2_IRQHandler
/* Definition of peripheral ID */
#define ENCO_R_PERIPHERAL FTM1
/* Definition of the clock source frequency */
#define ENCO_R_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_BusClk)
/* ENCO_R interrupt vector ID (number). */
#define ENCO_R_IRQN FTM1_IRQn
/* ENCO_R interrupt handler identifier. */
#define ENCO_R_IRQHANDLER FTM1_IRQHandler
/* Definition of peripheral ID */
#define MOTOR_PERIPHERAL FTM0
/* Definition of the clock source frequency */
#define MOTOR_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_BusClk)
/* MOTOR interrupt vector ID (number). */
#define MOTOR_IRQN FTM0_IRQn
/* MOTOR interrupt handler identifier. */
#define MOTOR_IRQHANDLER FTM0_IRQHandler
/* Definition of peripheral ID */
#define SERVO_PERIPHERAL FTM3
/* Definition of the clock source frequency */
#define SERVO_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_BusClk)
/* SERVO interrupt vector ID (number). */
#define SERVO_IRQN FTM3_IRQn
/* SERVO interrupt handler identifier. */
#define SERVO_IRQHANDLER FTM3_IRQHandler
/* RTEPIP_Device defines for SPI2 */
/* Definition of peripheral ID */
#define OLED_SPI_PERIPHERAL SPI2
/* Definition of the clock source */
#define OLED_SPI_CLOCK_SOURCE DSPI2_CLK_SRC
/* Definition of the clock source frequency */
#define OLED_SPI_CLK_FREQ CLOCK_GetFreq(OLED_SPI_CLOCK_SOURCE)
/* Definition of peripheral ID */
#define WLAN_UART_PERIPHERAL UART0
/* Definition of the clock source frequency */
#define WLAN_UART_CLOCK_SOURCE CLOCK_GetFreq(UART0_CLK_SRC)
/* Definition of peripheral ID */
#define DBG_LPUART_PERIPHERAL LPUART0
/* Definition of the clock source frequency */
#define DBG_LPUART_CLOCK_SOURCE 180000000UL
/* RTEPIP_Device defines for I2C0 */
/* Definition of peripheral ID */
#define IMU_I2C_PERIPHERAL I2C0
/* Definition of the clock source */
#define IMU_I2C_CLOCK_SOURCE I2C0_CLK_SRC
/* Definition of the clock source frequency */
#define IMU_I2C_CLK_FREQ CLOCK_GetFreq(IMU_I2C_CLOCK_SOURCE)
/* Definition of peripheral ID */
#define CAM_UART_PERIPHERAL UART3
/* Definition of the clock source frequency */
#define CAM_UART_CLOCK_SOURCE CLOCK_GetFreq(UART3_CLK_SRC)

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const edma_config_t DMA_config;
extern const lptmr_config_t LPTMR0_config;
extern const pit_config_t PIT_config;
extern const ftm_config_t ENCO_L_config;
extern const ftm_config_t ENCO_R_config;
extern const ftm_config_t MOTOR_config;
extern const ftm_config_t SERVO_config;
extern const dspi_master_config_t OLED_SPI_config;
extern const uart_config_t WLAN_UART_config;
extern const lpuart_config_t DBG_LPUART_config;
extern const i2c_master_config_t IMU_I2C_config;
extern const uart_config_t CAM_UART_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void RTEPIP_Basic(void);
void RTEPIP_Device(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
