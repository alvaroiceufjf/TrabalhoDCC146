/* 
Aluno 1: Álvaro Domingues de Freitas    Matricula: 201876007
Aluno 2: Rodrigo Oliveira Elias     Matricula: 201776039
*/

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class tag{
    //Atributos
    private:
        string id;
        string expressao;
    public:
        tag();
        ~tag();
        string getId();
        string getExpressao();
        void setId(string id);
        void setExpressao(string expressao);
};