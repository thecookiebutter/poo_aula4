// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
    // Variaveis
    int a = 5, b = 10, c = 15;
    // Comparando variaveis com operadores relacionais e logicos    
    if(a < b && b < c){
	// Mostrando resultado da comparacao para o usuario
        cout << "A ordem e: a, b, c." << endl;
    }
    // Comparando variaveis com operadores relacionais e logicos
    if(a > b || b > c){
	// Mostrando resultado da comparacao para o usuario
        cout << "Pelo menos uma das condicoes e verdadeira." << endl;
    }
    // Comparando variaveis com operadores relacionais e logicos
    if(!(a == b)){
	// Mostrando resultado da comparacao para o usuario
        cout << "a é diferente de b." << endl;
    }
    return 0;
}