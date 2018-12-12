#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ProgAvancFunctions.c"

int main()
{
	srand((unsigned) time(NULL));
	
	int i; 
	int s = 5; // Size of table
	int* T = (int*) malloc(sizeof(int)*s); // Initialisation of table
	
	// Adds random values to table
	for(i = 0 ; i < s ; i ++)
	{
		T[i] = rand() % 50;
	}
	
	UserInterface(T, s);
	
	return 0;
}








