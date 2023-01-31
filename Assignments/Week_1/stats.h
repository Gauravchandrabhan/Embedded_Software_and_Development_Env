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
/*
 * @file stats.h
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Gaurav Singh Chandrabhan
 * @date 31/01/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/*
 * @brief Prints the array
 *
 * @param *arr Input elements of array
 * @param c Number of elements in the array
 *
 * @return void
 */
void print_array(unsigned char *arr,unsigned char c );

/*
 * @brief Finds the maximum from the given array
 *
 * @param *arr Input elements of array
 * @param c Number of elements in the array
 *
 * @return maximum element
 */
unsigned char find_maximum(unsigned char *arr,unsigned char c);

/*
 * @brief Finds the minimum from the given array
 *
 * @param *arr Input elements of array
 * @param c Number of elements in the array
 *
 * @return minimum element
 */
unsigned char find_minimum(unsigned char *arr,unsigned char c);

/*
 * @brief Finds the median from the given array
 *
 * @param *arr Input elements of array
 * @param c Number of elements in the array
 *
 * @return median element
 */
unsigned char find_median(unsigned char *arr,unsigned char c);

/*
 * @brief Finds the mean from the given array
 *
 * @param *arr Input elements of array
 * @param c Number of elements in the array
 *
 * @return mean value of the array
 */
unsigned char find_mean(unsigned char *arr,unsigned char c);

/*
 * @brief Prints the different statistics of the array in a organised manner
 *
 * @param maximum Maximum element
 * @param minimum Minimum element
 * @param median Median element
 * @param mean Mean element
 * 
 * @return void
 */
void print_statistics(unsigned char maximum, unsigned char minimum, unsigned char median, unsigned char mean);

/*
 * @brief Sorts the given array in Descending order
 *
 * @param *arr Input elements of array
 * @param c Number of elements in the array
 *
 * @return void
 */
void sort_array(unsigned char *arr,unsigned char c);
#endif /* __STATS_H__ */