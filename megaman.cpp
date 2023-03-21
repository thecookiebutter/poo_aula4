//Funcoes importadas
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variaveis
    int life;
    float energy;
    bool status;
    string character;
    // Dando valor as variaveis
    life = 5;
    energy = 99.99f;
    status = true;
    character = "Mega Man";
    // Mostrando os valores das variaveis ao usuario
    cout<<"A vida do personagem é "<<life<<endl;
    cout<<"A energia do personagem é "<<energy<<endl;
    cout<<"O status do personagem é "<<status<<endl;
    cout<<"O nome do personagem é "<<character<<endl;
    
    return 0;
}