#include <stdio.h>
#include "sortingAlgorithm.h"

int main(int args, char *argv[]){
    if(args != 3){
        printf("Required 2 arguments\n");
        printf("./main [] []\n");
        return EXIT_SUCCESS;
    }

    char inputFile[64] = "input/";
    char outputFile[64] = "output/";

    strcat(inputFile, argv[2]);
    strcat(outputFile, argv[2]);

    int *data = readFile(inputFile);
    int dataCount = countData(inputFile);

    clock_t start, end;

    start = clock();
    if(strcmp(argv[1],"bubble") == 0){
        bubbleSort(data, dataCount);
    }else if(strcmp(argv[1],"selection") == 0){
        selectionSort(data, dataCount);
    }else if(strcmp(argv[1],"insertion") == 0){
        insertionSort(data, dataCount);
    }else if(strcmp(argv[1],"merge") == 0){
        // To Do
    }else if(strcmp(argv[1],"quick") == 0){
        // To Do
    }else if(strcmp(argv[1],"shell") == 0){
        // To Do
    }else if(strcmp(argv[1],"heap") == 0){
        // To Do
    }
    end = clock();

    double time_taken = (double)(end - start) / (double)(CLOCKS_PER_SEC);
    printf("Time execution : %f detik\n", time_taken);

    makeOutput(data, dataCount, outputFile);
}