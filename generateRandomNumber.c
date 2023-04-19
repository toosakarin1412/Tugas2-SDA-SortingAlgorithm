#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void generateRandomNumber(int limit){
    FILE *fptr;
    char intStr[20];
    sprintf(intStr, "%d", limit);
    char *namafile = strcat(intStr, ".txt");
    fptr = fopen(namafile, "w");

    for(int i = 1;i <= limit;i++){
        if(i == limit){
            fprintf(fptr, "%d", rand());
        }else{
            fprintf(fptr, "%d\n", rand());
        }
    }

    fclose(fptr);
}

int main()
{   
    generateRandomNumber(10000);
    generateRandomNumber(50000);
    generateRandomNumber(100000);
    generateRandomNumber(50000);
    generateRandomNumber(1000000);
    generateRandomNumber(5000000);
    generateRandomNumber(10000000);
    generateRandomNumber(50000000);
    generateRandomNumber(100000000);
    return 0;
}
