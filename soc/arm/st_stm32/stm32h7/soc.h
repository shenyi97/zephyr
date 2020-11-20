/*
 * Copyright (c) 2019 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _STM32F7_SOC_H_
#define _STM32F7_SOC_H_

#include <sys/util.h>

#ifndef _ASMLANGUAGE

#include <autoconf.h>
#include <stm32h7xx.h>

/* Add include for DTS generated information */
#include <st_stm32_dt.h>

#ifdef CONFIG_STM32H7_DUAL_CORE

#ifdef CONFIG_CPU_CORTEX_M4

#include <stm32h7xx_ll_bus.h>
#include <stm32h7xx_ll_pwr.h>
#include <stm32h7xx_ll_cortex.h>

#endif /* CONFIG_CPU_CORTEX_M4 */

#endif /* CONFIG_STM32H7_DUAL_CORE */

#ifdef CONFIG_CLOCK_CONTROL_STM32_CUBE
#include <stm32h7xx_ll_bus.h>
#include <stm32h7xx_ll_rcc.h>
#include <stm32h7xx_ll_pwr.h>
#include <stm32h7xx_ll_system.h>
#endif /* CONFIG_CLOCK_CONTROL_STM32_CUBE */

#ifdef CONFIG_EXTI_STM32
#include <stm32h7xx_ll_exti.h>
#endif /* CONFIG_EXTI_STM32 */

#ifdef CONFIG_GPIO_STM32
#include <stm32h7xx_ll_gpio.h>
#include <stm32h7xx_ll_system.h>
#endif /* CONFIG_GPIO_STM32 */

#if defined(CONFIG_CLOCK_CONTROL_STM32_CUBE)
#include <stm32h7xx_ll_utils.h>
#endif

#ifdef CONFIG_COUNTER_RTC_STM32
#include <stm32h7xx_ll_rtc.h>
#include <stm32h7xx_ll_exti.h>
#include <stm32h7xx_ll_pwr.h>
#endif /* CONFIG_COUNTER_RTC_STM32 */

#endif /* !_ASMLANGUAGE */

#endif /* _STM32F7_SOC_H7_ */
