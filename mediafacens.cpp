// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
    double ac1, ac2, af;
    // Pedindo input do usuario para primeira nota
    cout << "Digite a sua primeira nota do semestre: " << endl;
    // Registrando input do usuario
    cin >> ac1;
    // Pedindo input do usuario para segunda nota
    cout << "Digite a sua segunda nota do semestre: " << endl;
    // Registrando input do usuario
    cin >> ac2;
    // Pedindo input do usuario para terceira nota
    cout << "Digite a sua terceira nota do semestre: " << endl;
    // Registrando input do usuario
    cin >> af;
    // Calculando media das notas usando o calculo da faculdade Facens
    double soma= (ac1*1.5+ac2*3.5+af*5);
    soma = soma/10;
    // Mostrando resultado da media para o usuario
    cout << "A sua media no semestre foi: " << soma << endl << endl;
    // Mostrando resultado de aprovacao ou reprovacao para o usuario
    if(soma>=5){
        cout << "Parabens, voce foi aprovado!" << endl;
    }
    else{cout << "Eita, voce foi reprovado!" << endl;
    };
    
    return 0;
}