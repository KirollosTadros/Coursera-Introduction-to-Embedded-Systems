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
 * @file <stats.c> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Kirollos Henry>
 * @date <20 Dec 2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
  printf ("Array befor Sorting:\n\n");
  print_array(test,SIZE);
  sort_array(test, SIZE);
  printf("\n\nArray After Sorting:\n\n");
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */
unsigned char find_maximum(unsigned char *arr, unsigned int size)
{
    unsigned char max= arr[0];

    for(int i = 0; i < size ; i++)
    {
      if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char *arr, unsigned int size)
{
    unsigned char min= arr[0];

    for(int i = 0; i < size ; i++)
    {
      if(arr[i]<min)
        min=arr[i];
    }
    return min;
}

double find_mean(unsigned char *arr, unsigned int size)
{
    double sum = 0;

    for(int i = 0; i < size ; i++)
    {
      sum += arr[i];
    }
    return sum/size;
}

void sort_array(unsigned char *arr, unsigned int size)
{
  unsigned char temp;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if( arr[i] < arr[j] ){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void print_array(unsigned char *arr, unsigned int size)
{
  for(int i = 0; i < size; i++)
  {
      printf("%u \t\t", arr[i] );
  }
}
unsigned char find_median(unsigned char *arr, unsigned int size)
{
  unsigned char sorted[size];
  for(int i = 0 ;i<size ;i++)
  {
      sorted[i] = arr[i];
  }
   sort_array(sorted,size);
   
   int n = size / 2 ;

   return sorted[n];
}

void print_statistics(unsigned char* arr, int size)
{
    int mean = find_mean(arr, SIZE);
    unsigned char median= find_median(arr, SIZE);
    unsigned char min = find_minimum(arr, SIZE);
    unsigned char max = find_maximum(arr, SIZE);

    printf("Mean : %d\n\n", mean);
    printf("Median : %u\n\n", median);
    printf("Minimum : %u\n\n", min);
    printf("Maximum : %u\n\n", max);
    
}