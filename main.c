#include <stdio.h>
#include "sortingAlgorithm.h"

int main(int args, char *argv[]){
    if(args != 3){
        printf("Required 2 arguments\n");
        printf("./main [] []\n");
        return EXIT_SUCCESS;
    }

    printf("%d", countData(argv[2]));
    // int *data = readFile(argv[2]);

    if(strcmp(argv[1],"buble") == 0){
        // bubleSort(data, 10000);
        printf("Ini Bubblesort");
    }else if(strcmp(argv[1],"selection") == 0){
        // To Do 
    }else if(strcmp(argv[1],"insertion") == 0){
        // To Do
    }else if(strcmp(argv[1],"merge") == 0){
        // To Do
    }else if(strcmp(argv[1],"quick") == 0){
        // To Do
    }else if(strcmp(argv[1],"shell") == 0){
        // To Do
    }else if(strcmp(argv[1],"heap") == 0){
        // To Do
    }

    // char *fileOutput = strcat("output_", argv[2]);
    // makeOutput(data, 10000, fileOutput);
}