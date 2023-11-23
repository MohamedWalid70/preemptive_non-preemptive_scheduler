/********************************************/
/*  author: Mohamed Walid               	*/
/*  version: V02                            */
/*  Date: 18 NOV 2023	   					*/
/*  SWC : SCHEDULER                			*/
/********************************************/

#ifndef		SCHED_CONFIG_H
#define 	SCHED_CONFIG_H


#define 	SCHED_PRIOITY_LEVELS_NUMBER                                  5
#define     SCHED_MAX_TASKS_NUMBER_AT_THE_SAME_LEVEL                     5


#define     SCHED_INPUT_FREQ_IN_KHZ                8000

#define     SCHED_SELECTED_PRESCALER_VALUE         32

/*
 * option:
 *      SCHED_RUNNING_PREEMPIVE
 *      SCHED_RUNNING_NON_PREEMPTIVE
 *
 */


#define     SCHED_OPERATION_TYPE		SCHED_RUNNING_NON_PREEMPTIVE


/*
 * Tick time options are in respect of pescaler and TIM2 clk freq
 * max tick time is 32ms with prescaler 1024 and TIM2 freq 8000KHZ
 * max tick time is 8ms with prescaler 256 and TIM2 freq 8000KHZ
 * max tick time is 4ms with prescaler 128 and TIM2 freq 8000KHZ
 * max tick time is 2ms with prescaler 64 and TIM2 freq 8000KHZ
 * max tick time is 1ms with prescaler 32 and TIM2 freq 8000KHZ
 *
 * prescalers 8 and 1 are not allowed as min tick time here is 1ms
 */

#define		SCHED_TICK_TIME_IN_MILLI_SEC	1

#endif
