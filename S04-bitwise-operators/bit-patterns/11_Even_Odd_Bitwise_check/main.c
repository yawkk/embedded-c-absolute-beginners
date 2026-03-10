/*
 * main.c
 *
 *  Created on: Mar 9, 2026
 *      Author: blues
 */


#include <stdio.h>
#include <stdint.h>


int main(){

	int num;
	printf("Enter a value to check if Odd or Even\n");

	scanf("%d", &num);

	if(num&1){
		printf("%d is odd\n", num);
	}else{
		printf("%d is even \n", num);
	}
}
