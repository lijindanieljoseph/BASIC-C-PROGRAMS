/*
 ============================================================================
 Name        : selection.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,a[100],i,j,temp;
	printf("ENTER THE ARRAY LIMIT:");
			scanf("%d",&l);
	printf("ENTER THE NUMBERS:");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++){
			if(a[i]>a[j]){
			temp=a[i];
		     a[i]=a[j];
		     a[j]=temp;
			}
		}
	}
	printf("sorted values:");
	for(i=0;i<l;i++)
	{
      printf("%d ",a[i]);
	}


	return EXIT_SUCCESS;
}
