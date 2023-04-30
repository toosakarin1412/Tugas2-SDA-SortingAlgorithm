.SILENT: runRandom

build: FORCE
	gcc generateRandomNumber.c -o build/generateRandomNumber
	gcc -Wall -o build/main implementationSorting.c main.c
	
FORCE:
