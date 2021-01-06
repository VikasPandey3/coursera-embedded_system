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
 * @file stats.h
 * @brief here we have declared the function prototype
 *
 * <Add Extended Description Here>
 *
 * @author Vikas Pandey
 * @date 06-01-2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print the statistical value of given data
 *
 * This function takes as input a array pointer
 * and length of array.This will print the mean,
 * median, maximum and minimum of given array data.
 *
 * @param ptr Array pointer of data
 * @param length Length of array data
 *
 * @return void
 */
 void print_statistics(unsigned char *ptr,unsigned int length);
/**
 * @brief print the array on screen
 *
 * This function takes as input a array pointer and
 * length of array.This will print the array on screen.
 *
 * @para ptr Array pointer of data
 * @para length Length of array data
 *
 * @return void
 */
void print_array(unsigned char *ptr, unsigned int length);
/**
 * @brief calculate the median
 *
 * This function takes as input a array pointer and length
 * of array.This will calculate the median of given data.
 * It will return the value of median.
 *
 * @para ptr Array pointer of data
 * @para length Length of array
 *
 * @return Value of median
 */
unsigned char find_median(unsigned char *ptr,unsigned int length);
/**
 * @brief calculate the mean
 *
 * This function take as input a array pointer and length
 * of array. This will calculate the mean of given data.
 * It will return the value of mean.
 *
 * @para ptr Array pointer of data
 * @para length Length of array
 *
 * @return Value of mean
 */
unsigned char find_mean(unsigned char *ptr,unsigned int length);
/**
 * @brief find maximum value
 *
 * This function takes as input a array pointer and length
 * of array. This will find the maximum value of given data. 
 * It will return the maximum value.
 *
 * @para ptr Array pointer of data
 * @para length Length of array
 *
 * @return maximum value
 */
unsigned char find_maximum(unsigned char *ptr,unsigned int length);
/**
 * @brief find minimum value
 * 
 * This function takes as input a array pointer and length
 * of array. This will find the minimum value of given data.
 * It will return the minimum value.
 *
 * @para ptr Array pointer of data
 * @para length Length of array
 *
 * @return minimum value
 */
unsigned char find_minimum(unsigned char *ptr,unsigned int length);
/**
 * @brief sort the given array
 *
 * This function takes as input a array pointer and length 
 * of array. This will sort the array from largest to smallest.
 * It will return the sorted array.
 *
 * @para ptr Array pointer of data
 * @para length Length of array
 *
 * @return void
 */
void sort_array(unsigned char *ptr,unsigned int length);
#endif /* __STATS_H__ */
