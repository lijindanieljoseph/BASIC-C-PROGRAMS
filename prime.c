/*
 ============================================================================
 Name        : prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,flag=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%2==0)
		{
			flag=1;
		break;
		}
	}
	if(flag==0)
		printf("YOU ENTERED NUMBER IS PRIME");
	else
		printf("YOU ENTERED NUMBER IS NOT PRIME");

	return EXIT_SUCCESS;
}
