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
 * @file stats.c 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Gaurav Singh Chandrabhan
 * @date 31/01/2023
 *
 */

#include "stdio.h"
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
  unsigned char max = 0;
  unsigned char min = 0;
  unsigned char median = 0;
  int mean = 0;

  /* Statistics and Printing Functions Go Here */
  printf("Original Array before sorting: \n");
  print_array(test,SIZE);
  max = find_maximum(test,SIZE);
  min = find_minimum(test,SIZE);
  median = find_median(test,SIZE);
  mean = find_mean(test,SIZE);
  print_statistics(max,min,median,mean);
  sort_array(test,SIZE);
  printf("Array after sorting: \n");
  print_array(test,SIZE);

}

/* Add other Implementation File Code Here */

void print_array(unsigned char *arr,unsigned char c ){
  for(int i = 0; i<c; i++){
    printf("%d, ",*(arr + sizeof(char)*i)); 
  }
  printf("\n");
}

unsigned char find_maximum(unsigned char *arr,unsigned char c){
  unsigned char maximum = *arr; // init max variable
  for(int i =1; i<c; i++){
    if(maximum< *(arr + sizeof(char)*i)){
      maximum = *(arr + sizeof(char)*i);
    }
  }
  return maximum;
}

unsigned char find_minimum(unsigned char *arr,unsigned char c){
  unsigned char minimum = *arr; // init min variable
  for(int i =1; i<c; i++){
    if(minimum > *(arr + sizeof(char)*i)){
      minimum = *(arr + sizeof(char)*i);
    }
  }
  return minimum;
}

unsigned char find_median(unsigned char *arr, unsigned char c){
  sort_array(arr,c);  // first sorting array
  
  if (c%2){   // check if odd number of elements in the array
    return arr[c/2];
  }
  else {   //for even taking average of both middle elements
    return ((arr[c/2-1] + arr[c/2])/2);
  }
}

unsigned char find_mean(unsigned char *arr,unsigned char c){
  unsigned int sum = 0;
  for(unsigned char i =0; i<c ; i++){    //find sum of all the elements
    sum += arr[i];
  }

  return (sum/c);  // return the mean of the array
}

void print_statistics(unsigned char maximum, unsigned char minimum, unsigned char median, unsigned char mean){
  printf("The maximum is %d \n", maximum);
  printf("The minimum is %d \n", minimum);
  printf("The median is %d \n", median);
  printf("The mean is %d \n", mean);
}

void sort_array(unsigned char *arr,unsigned char c){
  unsigned char i,j,temp;
  for(i=0; i<c; i++){
    for(j=i+1; j<c; j++){
      if(arr[i] < arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
