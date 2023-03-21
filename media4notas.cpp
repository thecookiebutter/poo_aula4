// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, nota4;
    // Pedindo input do usuario para primeira nota
    cout << "Digite a sua primeira nota do semestre: " << endl;
    // Registrando input do usuario
    cin >> nota1;
    // Pedindo input do usuario para segunda nota
    cout << "Digite a sua segunda nota do semestre: " << endl;
    // Registrando input do usuario
    cin >> nota2;
    // Pedindo input do usuario para terceira nota
    cout << "Digite a sua terceira nota do semestre: " << endl;
    // Registrando input do usuario
    cin >> nota3;
    // Pedindo input do usuario para quarta nota
    cout << "Digite a sua quarta nota do semestre: " << endl;
    // Registrando input do usuario
    cin >> nota4;
    // Calculando variavel da soma das notas
    double soma= (nota1+nota2+nota3+nota4);
    soma = (soma/4);
    // Mostrando resultado da media para o usuario
    cout << "A sua media no semestre foi: " << soma << endl << endl;
    // Mostrando resultado de aprovacao ou reprovacao para o usuario
    if(soma>=7){
        cout << "Parabens, voce foi aprovado!" << endl;
    }
    else{cout << "Eita, voce foi reprovado!" << endl;
    };
    
    return 0;
}