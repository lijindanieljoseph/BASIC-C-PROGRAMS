/*
 ============================================================================
 Name        : function with argument without return.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum(int,int);
int main(void) {
	int a,b;
	printf("enter the two numbes:");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return EXIT_SUCCESS;
}
void sum(int num1,int num2){
	int c;
	c= num1+num2;
	printf("the result is %d",c);
}
