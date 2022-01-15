/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j;
		for(i=1;i<=4;i++)
		{
			for(j=-0;j<i;j++)
			{
              if(i==3){
            	  printf("%d  ",j+1+i);
              }
              else if(i==4){
            	  printf("%d  ",j+3+i);
              }
              else
				printf("%d  ",j+i);

               continue;

			}
		printf("\n");
		}
	return EXIT_SUCCESS;
}
