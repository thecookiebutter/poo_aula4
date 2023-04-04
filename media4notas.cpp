// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
    // Variaveis
    double nota1, nota2, nota3, nota4;
    string continuar = "S";
    string nome;
    int ra;
    // Programa roda o codigo enquando o usuario quiser baseado em um string
    do{
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o nome do aluno: " << endl;
    // Registrando input do usuario
    cin >> nome;
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o RA do aluno: " << endl;
    // Registrando input do usuario
    cin >> ra;
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
    switch((int)soma){
    case 10: 
    case 7: cout << "Parabens, voce foi aprovado!" << endl;// Funcoes importadas
#include <iostream>
using namespace std;

int main() {
    // Variaveis
    double nota1, nota2, nota3, nota4;
    string continuar = "S";
    string nome;
    int ra;
    // Programa roda o codigo enquando o usuario quiser baseado em um string
    do{
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o nome do aluno: " << endl;
    // Registrando input do usuario
    cin >> nome;
    // Pedindo input do usuario para identificar o aluno
    cout << "Digite o RA do aluno: " << endl;
    // Registrando input do usuario
    cin >> ra;
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
    switch((int)soma){
    case 10: 
    case 9:
    case 8:
    case 7: cout << "Parabens, voce foi aprovado!" << endl;
    break;
    case 6:
    case 5: cout << "Voce vai para a recuperacao!" << endl;
    break;
    default: cout << "Infelizmente voce foi reprovado!" << endl;
    };// Informa ao usuario que pode continuar, mudando a string
    cout << "Quer continuar? Digite S" << endl;
    cin >> continuar;
    } while(continuar == "S" || continuar ==  "s");
    
    return 0;
}
    break;
    case 6:
    case 5: cout << "Voce vai para a recuperacao!" << endl;
    break;
    default: cout << "Infelizmente voce foi reprovado!" << endl;
    };// Informa ao usuario que pode continuar, mudando a string
    cout << "Quer continuar? Digite S" << endl;
    cin >> continuar;
    } while(continuar == "S" || continuar ==  "s");
    
    return 0;
}
