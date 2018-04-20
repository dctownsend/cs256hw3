/*
 ============================================================================
 Name        : geometryCalculator.c
 Author      : dakota townsend
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double radius, area, length, width, base, height;
	int choice;

do{
	printf("1. calculate area of circle\n");
	printf("2. calculate area of rectangle\n");
	printf("3. calculate area of triangle\n");
	printf("4. quit\n");

	printf("enter your choice(1-4): ");
	choice = getchar( );


	switch(choice){

	case '1':
	   printf("enter radius of circle: ");
	   scanf("%lf", &radius);
	   fflush(stdout);
	     if(radius > 0){
	    	 area = (3.14*radius*radius);
	    	 printf("area of the circle is %.2f\n", area);
	     }else
	    	 printf("error: invalid input\n");

	      break;
	case '2':
	     printf("enter length of rectangle: ");
	     scanf("%lf", &length);
	     fflush(stdout);
	     printf("enter width of rectangle: ");
	     scanf("%lf", &width);
	     fflush(stdout);

	     if(length > 0 && width > 0){
	    	 area = length*width;
	    	 printf("area of the rectangle is %.2f\n", area);
	     }else
	    	 printf("error: invalid input\n");
	      break;
	case '3':
		printf("enter the base of the triangle: ");
		scanf("%lf", &base);
		fflush(stdout);
		printf("enter the height of the triangle: ");
		scanf("%lf", &height);
		fflush(stdout);

		if(base > 0 && height > 0){
			area = base*height*(0.5);
			printf("area of the triangle is %.2f\n", area);
		}else
			 printf("error: invalid input\n");
		break;
	case '4':
		exit(0);
	}
	}while(choice != 4);
      printf("\n");
      exit(0);
}
