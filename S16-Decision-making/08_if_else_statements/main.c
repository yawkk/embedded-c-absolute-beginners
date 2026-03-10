/*
 * main.c
 *
 *  Created on: Mar 5, 2026
 *      Author: blues
 */




#include <stdio.h>
#include <stdint.h>

int main(){

	 //Compairing two integers to see the greater

	double num1;
	double num2;

	printf("Enter the numbers to be compared: \n");



//	if(scanf("%lf %lf", &num1, &num2) != 1){
//		printf("Invalid input");
//		return 1;
	//}

	scanf("%lf %lf", &num1, &num2);
	uint8_t n1 = num1;
	uint8_t n2 = num2;

	//This check to see if a number was entered
	if((n1 && n2)  !=1 ){
		printf("Enter a valid number");
		return 1;
	}

	if(num1==num2){
		printf("Numbers are equal");
	}else{
		if(num1 > num2){
			printf("Num1 is greater than num2");
		}else{
			printf("Num2 is greater than Num1");
		}
	}




	printf("Press any key to exit\n");
	while(getchar() !=1 ){

	}

	getchar();

	return 0;
}
