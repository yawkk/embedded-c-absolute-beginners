/*
 * main.c
 *
 *  Created on: Mar 8, 2026
 *      Author: blues
 */


#include <stdio.h>
#include <stdint.h>


int main(){

	int32_t a, b,c;

	printf("Enter two numbers: \n");

	scanf("%d %d", &a, &b);

	//Operations

	printf("Bitwise AND & operations on %d and %d = %d\n", a, b, c=a&b);
	printf("Bitwise | operations on %d and %d = %d\n", a, b, c=a|b);
	printf("Bitwise NOT ~  operations on %d and %d = %d\n", a, b, c= ~(b));
	printf("Bitwise XOR ^ operations on %d and %d = %d\n", a, b, c=a^b);






	return 0;


}
