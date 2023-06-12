//Name: Jared Baze
//Date: 5/09/23
//Purpose: Create your own adventure!

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char firstChoice, secondChoice, ready;
	double total = 0;
	
	printf("You are about to head on an adventure with two choices Y or N. Choose wisely.\n");
	printf("Are you ready?: ");
	scanf(" %c", &ready);
	switch (ready)
	{
		case 'y':
		case 'Y':
		system("clear");
		break;
		
		default:
		return 0;
	}
	
	
	printf("While adventuring down the road you come across a overturned cart with a dying merchant at its feet.\n");
	printf("Do you help him? ");
	scanf(" %c", &firstChoice);
	
	switch (firstChoice)
	{
		case 'Y':
		case 'y':
		printf("You kindly help the merchant and give him what little healing supplies you have.\n");
		total = total + 5.0;
		break;
		
		case 'n':
		case 'N':
		printf("You ignore the merchants crys for help and even take your pick of the spoils of war.\n");
		total = total + 2.5;
		break;
		
		default:
		printf("What you couldnt choose yes or no?\n");
		return 0;
		break;
	}
	
	
	printf("\n");
	printf("\n");
	printf("After the cart incident you run into a weak but rich looking man strolling through the woods.\n");
	printf("Do you stop to him or rob him for all he has? ");
	scanf(" %c", &secondChoice);
	
	switch (secondChoice)
	{
		case 'Y':
		case 'y':
		printf("You hold a knife to the man and take his beloved sock collection.\n");
		total = total + 2.5;
		break;
		
		case 'n':
		case 'N':
		printf("You leave the man be.\n");
		total = total + 5.0;
		break;
		
		default:
		printf("What you couldnt choose yes or no?\n");
		return 0;
		break;
	}
	
	
	printf("\n");
	printf("\n");
	printf("Conclusion\n");
	
	printf("Your total points:%lf\n", total);
	return 0;
}
	
	return 0;
}
