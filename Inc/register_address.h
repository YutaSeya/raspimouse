/**
 * @file register_address.h
 * @author Yuta S.
 * @version 0.1
 * @brief The file defined the Raspberry Pi registers.
*/ 

#ifndef __REGISTER_ADDRESS_H
#define __REGISTER_ADDRESS_H

/* bcm2835 param */
#define BCM2835_CORE_CLK_HZ 250000000

/* --- Register Address --- */
/* Base Addr */
#define RPI_REG_BASE 0x3f000000

/* GPIO Addr */
#define RPI_GPIO_OFFSET 0x200000
#define RPI_GPIO_SIZE 0xC0
#define RPI_GPIO_BASE (RPI_REG_BASE + RPI_GPIO_OFFSET)

#define RPI_GPIO_GPFSEL0 0x000000
#define RPI_GPIO_GPFSEL1 0x000004
#define RPI_GPIO_GPFSEL2 0x000008
#define RPI_GPIO_GPFSEL3 0x00000C
#define RPI_GPIO_GPFSEL4 0x000010
#define RPI_GPIO_GPFSEL5 0x000014

#define RPI_GPIO_OUTPUT_SET_0 0x001C
#define RPI_GPIO_OUTPUT_SET_1 0x0020

#define RPI_GPIO_OUTPUT_CLR_0 0x0028
#define RPI_GPIO_OUTPUT_CLR_1 0x002C

#define RPI_GPIO_LEVEL_0      0x0034
#define RPI_GPIO_LEVEL_1      0x0038

/* Pwm Addr */
#define RPI_PWM_OFFSET 0x20C000
#define RPI_PWM_SIZE 0xC0
#define RPI_PWM_BASE (RPI_REG_BASE + RPI_PWM_OFFSET)

/* Clock Addr */
#define RPI_CLK_OFFSET 0x101000
#define RPI_CLK_SIZE 0x100
#define RPI_CLK_BASE (RPI_REG_BASE + RPI_CLK_OFFSET)

#endif /* __REGISTER_ADDRESS_H */