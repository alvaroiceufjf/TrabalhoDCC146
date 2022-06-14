/* 
Aluno 1: Álvaro Domingues de Freitas    Matricula: 201876007
Aluno 2: Rodrigo Oliveira Elias     Matricula: 201776039
*/

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "tag.cpp"

using namespace std;



int main(){
    tag tags[1000];
    string entrada = "  ";
    cout << "[INFO] Digite um comando de entrada ou TAG: ";
    while(entrada != ":q"){
        cin >> entrada;
        //menu
        if(entrada == ":d"){
            //dividir arquivo de entrada em tags
            cout << "[WARNING] Funcao nao implementada";

        }else if(entrada == ":c"){
            //carregar tags de um arquivo
            FILE *arq;
            arq = fopen("arquivoTag.txt", "rt"); //abre arquivo no modo leitura (rt)
            if (arq == nullptr){
                cout << "[ERROR] Erro na abertura do arquivo de texto";
                break;
            }
            
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