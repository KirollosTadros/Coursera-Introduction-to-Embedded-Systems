/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Kirollos Henry>
 * @date <20 Dec 2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

void print_statistics(unsigned char *arr, int size);
void print_array(unsigned char *arr, unsigned int size);
unsigned char find_median(unsigned char *arr, unsigned int size);
double find_mean(unsigned char *arr, unsigned int size);
unsigned char find_minimum(unsigned char *arr, unsigned int size);
unsigned char find_maximum(unsigned char *arr, unsigned int size);
void sort_array(unsigned char *arr, unsigned int size);




#endif /* __STATS_H__ */
