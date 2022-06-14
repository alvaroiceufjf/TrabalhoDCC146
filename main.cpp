#include <stdio.h>
#include <iostream>
#include <string.h>
#include "tag.cpp"

using namespace std;



int main(){
    tag tags[1000];
    string entrada = "  ";
    while(entrada != ":q"){
        cin >> entrada;
        //menu
        if(entrada == ":d"){
            //dividir arquivo de entrada em tags
            cout << "[WARNING] Funcao nao implementada";

        }else if(entrada == ":c"){
            //carregar tags de um arquivo
            
        }else if(entrada == ":o"){
            //definir output
            
        }else if(entrada == ":p"){
            //dividir entrada em tags
            cout << "[WARNING] Funcao nao implementada";

        }else if(entrada == ":a"){
            //listar autômatos
            
        }else if(entrada == ":l"){
            //listar tags válidas
            
        }else if(entrada == ":s"){
            //salvar tag
            
        }else if(entrada == ":q"){
            //encerrar programa
            break;
            
        }else{
            //verificar e criar tag

        }
    }
    
}