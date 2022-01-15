/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {int a[5],i;
	printf("enter the numbers:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
     }
	printf("YOU ENTERED NUMBERS ARE :");
	for(i=0;i<5;i++)
	{printf("%d\t",a[i]);}

	return EXIT_SUCCESS;
}
