#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 8

int main()
{
	int number, rem[MAX];
	int  i = 0;
	printf("Enter a number in the range 0 to 255:  ");
	scanf("%d", &number);

	if(number > 255 || number < 0)
	{
		printf("\nThe number you have entered is beyond the limit(either less than 0 or more than 255)\n");
		exit(1);
	}
	else
	{
		while(i <= MAX - 1)
		{
			rem[i] = (number % 2);
			//printf("%d", rem);
			number = number / 2;
			i++;
		}
		for(i = MAX - 1; i >= 0; i --)
			printf("%d", rem[i]);
		printf("\n");
	}
}
