/*
 ============================================================================
 Name        : function with argument with return.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum (int,int);
int main(void) {
	int a,b,c;
	printf("enter the 2 values:");
	scanf("%d%d",&a,&b);
	c= sum(a,b);
	printf("the result is %d",c);

	return EXIT_SUCCESS;
}
int sum(int num1,int num2){
	int result;
	result= num1+num2;
	return result;
}
