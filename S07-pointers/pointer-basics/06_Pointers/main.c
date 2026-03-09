/*
 * main.c
 *
 *  Created on: Mar 5, 2026
 *      Author: blues
 */
#include <stdio.h>
#include <stdint.h>

int main(void){

	//Pointers

	char number = 100;
	printf("The address of number is %p ", (char *)&number);

	//pointer variable
	char* pnumber = &number;
	char onevalue = *pnumber;

	printf("\nOne byte of data from number2 is %d", onevalue);


	//reading of data from operations
	printf("\nData obtained from read operation number2 is %d", *pnumber);


	//write operations
	*pnumber =  65;

	//Print value stored in step 1

	printf("\nValue of variable defined in step 1 ");


}
