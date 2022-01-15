/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a,i,s=0;
	printf("ENTERs YOUR FAVOURITE NUMBER:");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		printf("+%d",i);

		s=s+i;

	}
	printf("=%d\t",s);
return EXIT_SUCCESS;
}
