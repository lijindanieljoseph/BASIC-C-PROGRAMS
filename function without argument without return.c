/*
 ============================================================================
 Name        : function without argument without return.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}
void sum(){
	int a,b,c;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("your result is %d",c);
}
