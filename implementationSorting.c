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