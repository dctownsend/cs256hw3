/*
 ============================================================================
 Name        : population.c
 Author      : Dakota Townsend
 Version     :
 Copyright   : Your copyright notice
 Description : calculate population
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


double getPopulation(double, double, double);

int main(void) {
	double startingPop, birthRate, deathRate, newPop;
	int numOfYrs;

	printf("enter the current size of the popultation: \n");
	scanf("%lf", &startingPop);

	printf("enter the birth rate: \n");
	scanf("%lf", &birthRate);
	fflush(stdout);

	printf("enter the death rate: \n");
	scanf("%lf", &deathRate);
	fflush(stdout);

	printf("enter the number of years: \n");
	scanf("%d", &numOfYrs);
	fflush(stdout);

	for(int year = 0; year <numOfYrs; year++){
		newPop = getPopulation(startingPop, birthRate, deathRate);
		printf("the population at the end of the year %d: %.2f\n", year+1, newPop);
		startingPop = newPop;
	}


	return 0;
}
 double getPopulation(double P, double B, double D){
     double N;
     N = P + B * P - D * P;
     return N;
  }
