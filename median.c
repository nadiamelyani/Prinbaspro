/*
Nama Program : median.c
Deskripsi    : program untuk mencari nilai tengah dari data tunggal
Tanggal      : 14/09/2019 
Compiler     : Dev C++ 5.11
Author       : Nadia Melyani
*/
#include <stdio.h>
#include "Function.h"
#define swap(a, b) { int temp = a; a = b; b = temp; }

double Median(double x[], int n) {

	int i, j;
	double median;
	
	for(i = 0; i < n; i++) {                      
		for(j = i + 1; j < n; j++) {			
			if(x[i] > x[j]) {
				swap(x[i], x[j]);
			}	
		}
	}
	
	if(n % 2 == 0){
		median = (x[(n/2) - 1] + x[(n/2)]) / (2.0);
	}else {
		median = (x[(n/2)]);
	}
	
	return median;
}
