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
        fprintf(fptr, "%d\n", rand());
    }

    fclose(fptr);
}

int main()
{   
    printf("Generating 10000 data...\n");
    generateRandomNumber(10000);
    printf("Complete...\n");

    printf("Generating 50000 data...\n");
    generateRandomNumber(50000);
    printf("Complete...\n");

    printf("Generating 100000 data...\n");
    generateRandomNumber(100000);
    printf("Complete...\n");

    printf("Generating 500000 data...\n");
    generateRandomNumber(500000);
    printf("Complete...\n");

    printf("Generating 1000000 data...\n");
    generateRandomNumber(1000000);
    printf("Complete...\n");

    printf("Generating 5000000 data...\n");
    generateRandomNumber(5000000);
    printf("Complete...\n");

    printf("Generating 10000000 data...\n");
    generateRandomNumber(10000000);
    printf("Complete...\n");

    printf("Generating 50000000 data...\n");
    generateRandomNumber(50000000);
    printf("Complete...\n");

    printf("Generating 100000000 data...\n");
    generateRandomNumber(100000000);
    printf("Complete...\n");
    return 0;
}
