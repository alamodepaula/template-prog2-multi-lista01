#pragma once // evita múltiplas definições

#include <iostream>
#include <sstream> // istringstream
#include <tuple>

// 10. Dois números são chamamos coprimos, se o único divisor comum aos dois é onúmero 1.
// Faça um programa em C que, dado n e m, diga se eles são coprimos.

int exercicio10(int n, int m){
    int maiorNum, menorNum, resto;
    if(n > m){
	maiorNum = n;	
	menorNum = m;
	}
	else{
	maiorNum = m;
	menorNum = n;	
	}
	
	while(maiorNum % menorNum != 0){
	resto = (maiorNum % menorNum);
	maiorNum = menorNum;
	menorNum = resto;
	}
	if(menorNum == 1)
	   return true; 
	else
	   return false;
}
