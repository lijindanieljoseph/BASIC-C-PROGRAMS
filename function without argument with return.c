/*
 ============================================================================
 Name        : function without argument with return.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-styles
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int res;
	res = sum();
	printf("the result is %d",res);
	return EXIT_SUCCESS;
}
int sum (){
 int a,b,c;
 printf("enter 2 numbers:");
 scanf("%d%d",&a,&b);
 c=a+b;
 return c;

}
