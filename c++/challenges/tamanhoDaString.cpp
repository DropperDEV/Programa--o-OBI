#include <bits/stdc++.h>

using namespace std;

// Tamanho da String

// Faça um programa para ler uma string SS (sem espaços) e imprima o tamanho da string SS.
// Entrada

// A entrada consiste de uma única linha contendo uma string SS.
// Saída

// A saída consiste de uma única linha contendo um inteiro correspondente ao tamanho da string SS.
// Restrições

//     1≤∣S∣≤501≤∣S∣≤50
//     A string contém apenas letras minúsculas do alfabeto.

int main(){
    string palavra;
    cin >> palavra;
    cout << palavra.size();

    return 0;
}