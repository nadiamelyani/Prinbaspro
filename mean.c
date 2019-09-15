/*
Nama Program : mean.c
Deskripsi    : program untuk menghitung rata-rata dari data tunggal
Tanggal      : 14/09/2019 
Compiler     : Dev C++ 5.11
Author       : Nadia Melyani
*/

#include <stdio.h>
#include "Function.h"

double Mean(double x[], int n){

	int i, j;
	double sum = 0;
	double mean;
	
	for(i = 0; i < n; i++){
		sum = sum + x[i];
	}
	mean = (sum/(double) n);
	
	return mean;
}
