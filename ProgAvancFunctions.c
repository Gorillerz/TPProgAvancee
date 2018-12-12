#include "ProgAvancFunctions.h"

// Lets the user choose what they want to do
void UserInterface(int* T, int s)
{
	int Answer; //Keeps track of user's answer to a scanf
	int exitLoop = 0; //Determines when to exit while loop	
	int i;

	while (exitLoop == 0)
	{
		printf("What would you like to do? \n");
		printf("1. Print the array \n");
		printf("2. Seperate the evens and odds \n");
		printf("3. Print the table from outside in \n");
		printf("4. Print everything \n");
		printf("5. Generate a new random matrix \n");
		printf("6. Exit \n\n");
		
		scanf("%d", &Answer);
		
		switch (Answer)
		{
		    case 1:
				Affiche(T, s, Contenu);
		        break;	
					
		    case 2:
		    	Affiche(T, s, PairsImpairs);
		        break;
		        
			case 3:
				Affiche(T, s, Pincer);
				break;
			
			case 4:
				Affiche(T, s, Contenu);
				Affiche(T, s, PairsImpairs);
				Affiche(T, s, Pincer);
				break;
				
			case 5:
				for(i = 0 ; i < s ; i ++)
				{
					T[i] = rand() % 50;
				}
				printf("New random matrix created \n\n");
				break;
				
			case 6:
				printf("Goodbye \n");
				exitLoop = 1;
				break;
				
		    default:
		    	printf("Try again bitch \n\n");
		        break;
		}
	}
}


// Ex 2
void Affiche(int* T, int s, void (*f) (int*, int))
{
	f(T, s);
}

// Ex 1.1
void Contenu(int * T, int s)
{
	int i;
	
	printf("Contenu du Tableau: ");
	for(i = 0 ; i < s ; i ++)
	{
		printf("%d ", T[i]);
	}
	printf("\n\n");
	
	return;		
}

// Ex 1.2
void PairsImpairs(int * T, int s)
{
	int i;
	
	printf("Entiers Pairs: ");
	for(i = 0 ; i < s ; i ++)
	{
		if(T[i]%2 == 0)
		{
			printf("%d ", T[i]);
		}
	}
	printf("\n");
	
	printf("Entiers Impairs: ");
	for(i = 0 ; i < s ; i ++)
	{
		if(T[i]%2 != 0)
		{
			printf("%d ", T[i]);
		}	
	}
	printf("\n\n");
	
	return;		
}

// Ex 1.3
void Pincer(int * T, int s)
{
	int i;
	
	printf("Contenu du Tableau Pincered: ");
	for(i = 0 ; i < s / 2 ; i ++)
	{

		printf("%d ", T[i]); 

		printf("%d ", T[s - i - 1]);

	}
	if (s%2 != 0) //If s is not even, then the very middle value won't be printed
	{
		printf("%d ", T[s/2]); 
	}
	printf("\n\n");
	
	return;		
}

