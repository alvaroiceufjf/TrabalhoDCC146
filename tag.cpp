/* 
Aluno 1: Álvaro Domingues de Freitas    Matricula: 201876007
Aluno 2: Rodrigo Oliveira Elias     Matricula: 201776039
*/

#include "tag.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;


tag::tag(){
    this->id=" ";
    this->expressao=" ";
}

tag::~tag(){

}

string tag::getId(){
    return this->id;
}

string tag::getExpressao(){
    return this->expressao;
}

void tag::setId(string id){
    this->id = id;
}

void tag::setExpressao(string expressao){
    this->expressao = expressao;
}