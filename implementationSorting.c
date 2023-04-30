#include "sortingAlgorithm.h"
#define MAX_LINE 128

int *readFile(char *fileName){
    int *arr;
    int dataCount = countData(fileName);
    arr = (int*) malloc(dataCount * sizeof(int));

    char line[MAX_LINE];

    FILE *fp;
    fp = fopen(fileName, "r");

    int counter = 0;

    while (fgets(line, MAX_LINE, fp) != NULL) {
        int num = atoi(line);

        arr[counter] = num;
        counter++;
    }

    return arr;
};

void makeOutput(int arr[], int size, char* fileName){
    FILE *fp;
    fp = fopen(fileName, "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(fp, "%d\n", arr[i]);
    }

    fclose(fp);
};

int countData(char* fileName) {
    int lineCount = 0;

    FILE *fp;
    fp = fopen(fileName, "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return -1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    fclose(fp);

    return lineCount;
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int *L;
    int *R;

    L = (int*) malloc(n1 * sizeof(int));
    R = (int*) malloc(n2 * sizeof(int));
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];
     
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
         
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
             
            // Increment index of smaller element
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
         
        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);
         
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}