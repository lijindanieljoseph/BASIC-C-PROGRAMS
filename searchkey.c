/*
 ============================================================================
 Name        : searchkey.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int l,a[100],i,search,flag=0;
	printf("ENTER YOUR ARRAY LIMIT:");
	scanf("%d",&l);
	printf("ENTER YOUR NUMBERS:");
	for(i=0;i<l;i++){
		scanf("%d",&a[i]);
	}
	printf("ENTER YOUR SEARCH NUMBER:");
	scanf("%d",&search);
	for(i=0;i<l;i++)
	{
	if(search==a[i])
	{
		flag=1;
		break;
	}
	}
	if(flag==1){
	printf("%d is found at %d position",search,i+1);}
	else{
    printf("%d is NOT FOUND",search);}
return EXIT_SUCCESS;
}
