#include "tag.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

tag::tag(string id, string expressao){
    this->id = id;
    this->expressao = expressao;
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