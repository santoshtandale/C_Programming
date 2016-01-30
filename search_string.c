#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 100

void main()
{
	int i, j, len;
 char str[MAX]="";
 printf("Enter a string\n");
 scanf("%s", str);
 printf("\n You entered %s\n", str);
 len = strlen(str);
 for(i = 0; i < len; i ++)
 {
	for(j = i + 1; j < len; j ++)
	{
		if(str[i] == str[j])
			str[j] = str[j+1];
	}
 }
	
 printf("\n You entered %s\n", str);
		
}
