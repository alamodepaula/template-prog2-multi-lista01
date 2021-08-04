#pragma once // evita múltiplas definições

#include <iostream>
#include <sstream> // istringstream
#include <tuple>

// 7.Um número de Fibonacci é dado por f(n) = f(n-1) + f(n-2), onde f(0) = 0 e f(1) =1.
// Faça um programa em C que dadon, calcule o número de Fibonacci den.
int
exercicio7(int n)
{
    int numFib, n;
    if (n == 1 || n == 2)
        return 1;
    else
        if (n == 0) 
        return 0;
    return numFib(n - 1) + numFib(n - 2);
}
