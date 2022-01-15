/*
 ============================================================================
 Name        : multi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {int r,c,a[100][100],i,j;
	printf("ENTER THE ROW SIZE:");
	scanf("%d",&r);
	printf("ENTER THE COLUMN  SIZE:");
	scanf("%d",&c);
	printf("ENTER THE VALUESS:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",a[i][j]);
		}
	}
	return EXIT_SUCCESS;
}
