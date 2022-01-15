/*
 ============================================================================
 Name        : multipy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,i,a[100];
	printf("ENTER THE ARRAY LIMIT:");
	scanf("%d",&l);
	printf("ENTER THE VALUES:");
	for(i=0;i<l;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<l-1;i++)

	{
		a[i]=a[i]*a[i+1];

	}
for(i=0;i<l-1;i++)
{
	printf("%d\t",a[i]);
}
	return EXIT_SUCCESS;
}
