//Author: Jared Baze
//Date: 
//Purpose: 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char sundaeSize, sundaeFlavor, sundaeWhip, ready;
	int sundaeCherries;
	double scoreTotal;
	
	printf("I'd like to order a sunday, please!\n");
	printf("I'd like a medium choclate sundae with three cherries and whip cream.\n");
	printf("Are you Ready?\n");
	scanf("%c", &ready);
	switch (ready)
	{
		case 'y':
		case 'Y':
		system("clear");
		break;
		
		default:
		return 0;
	}
	
	printf("What size sundae did the customer want? ");
	scanf("%c\n", &sundaeSize);
	printf("Your answer is: %c\n", sundaeSize);
	
return 0;
}
