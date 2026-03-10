/*
 * main.c
 *
 *  Created on: Mar 5, 2026
 *      Author: blues
 */


#include <stdio.h>
#include <stdint.h>

int main(){


	//voting program

	char name;
	int age;

	printf("\nEnter you name: ");
	scanf(" %c", &name);

	printf("\nEnter your age: \n");
	scanf(" %d", &age);



	if(age>=18){
		printf("You can vote as an eligible citizen\n\n");
	}
	else{
		printf("\n %c Cannot vote because you age %d  < 18\n", name, age);
	}

	printf("Press any key to exit");
	while(getchar() !=1 ){

	}

	getchar();
}
