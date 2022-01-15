/*
 ============================================================================
 Name        : user.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,a[100],i;
	printf("ENTER YOUR LIMIT:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("YOU ENTERED NUMBERS ARE:");
	for(i=0;i<l;i++){
		printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
