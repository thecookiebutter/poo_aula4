// Funcoes importadas
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variaveis
    int num1 = 10, num2 = 4;
    // Variaveis resultantes
    int soma, multi, divi, modulo, subt;
    // Calculando os resultados das variaveis
    soma = num1 + num2;
    multi = num1 * num2;
    divi = num1 / num2;
    modulo = num1 % num2;
    subt = num1 - num2;
    // Mostrando resultados para o usuario
    cout<<soma<<endl;
    cout<<multi<<endl;
    cout<<divi<<endl;
    cout<<modulo<<endl;
    cout<<subt<<endl;
    return 0;
}