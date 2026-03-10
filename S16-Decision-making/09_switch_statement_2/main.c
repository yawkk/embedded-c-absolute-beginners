/*
 * main.c
 *
 *  Created on: Mar 7, 2026
 *      Author: blues
 */




#include <stdio.h>
#include <stdint.h>




int main(){

	char code;
	float radius,  height, base;
	float longbase;
	double area;


	printf("Area calculation Program\n");
	printf("Circle ----> c\n");
	printf("Triangle ----> t\n");
	printf("Trapezoid ----> z\n");
	printf("Rectangle ----> r\n");
	printf("Square ----> s\n");
	printf("Enter the code here");
	scanf("%c", &code);


//	if(!(area !=1)){
//		printf("area is %f ", area);
//	}


	switch (code){
		case 'c':
			printf("Area of a circle: \n");
			printf("Enter the radius\n");
			scanf("%f", &radius);
			if(radius <0){
				printf("The radius cannot be -ve\n");
				area = -1;
			}else{
			area = 3.1415 * radius * radius;
			printf("area of circle is :  %f\n",area );
			}
			break;
		case 't':
			printf("Area of a triangle\n");
			printf("Enter the height and base: \n");
			scanf("%f %f", &height, &base);
			if((height <0 )||( base <0)	){
				printf("The height and base cannot be -ve\n");
				area = -1;
			}else{
					area= 1.0/2*(base*height);
					printf("area of rectangle  is :  %lf\n",area );
					}
			break;
		case 'z':
			printf("Area of a trapezoid\n");
			printf("Enter the height and base: \n");
			scanf("%f", &height);
			printf("Enter the base(b) and longbase(lb)\n");
			scanf("%f %f", &base, &longbase);
			if((longbase <0) || (base <0 )||(height<0)){
				printf("The height, base and longbase cannot be -ve\n");
				area = -1;
				}else{
						area = 1.0/2*(base + longbase) * height; // i can use 0.5
						printf("area of the trapezoid  is :  %lf\n",area );
				}
			break;
		case 's':
			printf("Area of a square \n");
			printf("Enter the length and base: \n");
			scanf("%f %f", &height, &base);
			if(height <0 || base <0	){
				printf("The height and base cannot be -ve\n");
				area = -1;
				}else{
						area =  height * base;
						printf("area of the square is :  %lf\n",area );
					}
			break;

		case 'r':
			printf("Area of a rectangle \n");
				printf("Enter the length and base: \n");
				scanf("%f %f", &height, &base);
				if(height <0 || base <0	){
					printf("The height and base cannot be -ve\n");
					area = -1;
				}else{
					area =  height * base;
					printf("area of the rectangle is :  %lf\n",area );
					}
				break;
				default:
			printf("No area selected\n");

	}

	void waitingApplication();
	return 0;



}
void waitingApplication(void){
	printf("Press any key to exit");
			while(getchar() !='n' ){

		}

		getchar();
	}

