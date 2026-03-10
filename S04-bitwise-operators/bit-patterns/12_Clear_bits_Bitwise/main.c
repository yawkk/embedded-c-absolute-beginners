/*
 * main.c
 *
 *  Created on: Mar 9, 2026
 *      Author: blues
 *
 *      Program to zero bit (clear bit)positions 4,5,6 and print result
 */

#include <stdio.h>
#include <stdint.h>
void printBinary(unsigned int n);

int main(){

	//Taking number from user

	int32_t	 num;
	//int32_t bitClear;
	printf("Enter the number to clear the bit\n");
	scanf("%d", &num);


	//the bit number to be cleared are 4 5 6
	//0b01110000
	num &= ~( 0b01110000<< num);

	printf("The new number for %d is ox%x\n", num,num);

	//printf("The new number for %d is 0b%u\n", num);

	printBinary(num);
}
// Function to print binary representation
void printBinary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}


