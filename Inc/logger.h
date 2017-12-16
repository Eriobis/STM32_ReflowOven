/**********************************************************************************************************************
 * @file    logger.h
 * @author  Simon Benoit
 * @date    dd-mm-20yy
 * @brief   
 *********************************************************************************************************************/

#ifndef __LOGGER_H__
#define __LOGGER_H__

/* Includes ---------------------------------------------------------------------------------------------------------*/

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

/* Global Defines ---------------------------------------------------------------------------------------------------*/

/* Global Enum ------------------------------------------------------------------------------------------------------*/

/* Global Variables -------------------------------------------------------------------------------------------------*/

/* Global Functions Prototypes --------------------------------------------------------------------------------------*/

void LOGGER_Init            (void);
void LOGGER_CurrentTempAdd  (uint16_t temp, uint16_t setpoint);

/* ------------------------------------------------------------------------------------------------------------------*/

 #endif//__LOGGER_H__