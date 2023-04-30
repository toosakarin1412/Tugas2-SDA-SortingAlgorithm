#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
void makeOutput(int[], int, char*);

/**
 * Count Data in a file
 * @param   *ptr    Char pointer to file name
 * @return  
*/
int countData(char*);

/**
 * Sortfile with bublesort algorithm
 * @param   *ptr    Pointer integer to array has been sorted
 * @param   length  Array length
*/
void bubleSort(int*, int);