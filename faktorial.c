/*
Nama Program : faktorial.c
Deskripsi    : program untuk mencari nilai faktorial dari suatu bilangan
Tanggal      : 14/09/2019 
Compiler     : Dev C++ 5.11
Author       : Nadia Melyani
*/
#include <stdio.h>
#include "Function.h"

int Factorial(int num) {

	int i;
	int factorial;						

	factorial = 1;
	
	for(i = num; i > 0; i--) {                    
		factorial = i * factorial;
	}
	
	return factorial;
}
