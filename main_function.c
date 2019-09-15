/*
Nama Program : main_function.c
Deskripsi    : program utama dari Function.h
Tanggal      : 15/09/2019 
Compiler     : Dev C++ 5.11
Author       : Nadia Melyani
*/

#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
#define FACTORIAL 1
#define MEAN 2
#define MEDIAN 3

int main() {
	double data[21];
	double mean, median;
	int i, j, num, n, factorial;
	int choice;
	
	do {
		//system("cls");
		printf("\n1 - Factorial");
		printf("\n2 - Mean");
		printf("\n3 - Median");
		printf("\n4 - Exit");
		printf("\nYour Choice: ");
		scanf("%d", &choice);
		//system("cls");
		
		switch(choice) {
			case FACTORIAL :
				printf("Input the number\t: ");
				scanf("%d", &num);
				factorial = Factorial(num);
				printf("The result is\t\t: %d", factorial);
				break;
			case MEAN :
				printf("Input the total of data\t: ");
				scanf("%d", &n);						
				printf("Input the data\t\t: ");
				for(i = 0; i < n; i++){						
					scanf("%lf", &data[i]);
				}
				mean = Mean(data, n);
				printf("The result is\t\t: %g", mean);
				
				//clear array
				for(i = 0; i <= n; i++) {
					data[i] = '\0';
				}
				break;
			case MEDIAN :
				printf("Input the total of data\t: ");
				scanf("%d", &n);						
				printf("Input the data\t\t: ");
				for(i = 0; i < n; i++){						
					scanf("%lf", &data[i]);
				}
				median = Median(data, n);
				printf("The result is\t\t: %g", median);
				
				//clear array
				for(i = 0; i <= n; i++) {
					data[i] = '\0';
				}
				break;			
		}
		printf("\n");
		//system("pause");
	}while(choice > 0 && choice < 4);
	
	return 0;
}
