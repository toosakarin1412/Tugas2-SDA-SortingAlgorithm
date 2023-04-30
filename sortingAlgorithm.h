#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

/**
 * Read a file and convert to an array
 * @param   *ptr    Name of file to be convert to array
 * @return  int     Integer array pointer
*/ 
int *readFile(char*);

/**
 * Make output to file
 * @param   *ptr    Pointer integer to array has been sorted
 * @param   int  Array length
*/
void makeOutput(int*, int, char*);

/**
 * Count Data in a file
 * @param   char*ptr    Char pointer to file name
 * @return  
*/
int countData(char*);

/**
 * Sortfile with bubblesort algorithm
 * @param   int*ptr    Pointer integer to array has been sorted
 * @param   int     Array length
*/
void bubbleSort(int*, int);

/**
 * Sortfile with selection sort algorithm
 * @param   int    Pointer integer to array has been sorted
 * @param   int    Array length
*/
void selectionSort(int*, int);

/**
 * Sortfile with insertion sort algorithm
 * @param   int    Pointer integer to array has been sorted
 * @param   int    Array length
*/
void insertionSort(int*, int);

/**
 * Sortfile with insertion sort algorithm
 * @param   int    Pointer integer to array has been sorted
 * @param   int    left
 * @param   int    right
*/
void mergeSort(int*, int, int);

/**
 * 
*/
void quickSort(int*, int, int);

/**
 * 
*/
void shellSort(int*, int);

/**
 * 
*/
void heapSort(int*, int);
