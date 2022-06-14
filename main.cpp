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
            int i=0;
            string aux1,aux2;
            //nome da tag
            while(entrada[i]!=':'){
                
                if(entrada[i]==' '){
                    cout << "[ERROR]: Não pode haver espaço no nome da tag.";
                    break;
                }
                aux1[i]=entrada[i];
                i++;
            }
            //espaço após dois pontos
            i++;
            if(entrada[i]!= ' '){
                cout << "[ERROR]: Deve haver um espaço entre dois pontos e a expressão da tag.";
            }else{
                //expressão da tag
                i++;
                char v1=0,v2=0;//variáveis
                char e1=0,e2=0;//sub-expressões
                while(entrada[i] != '\0'){
                    if(entrada[i] == '.' || entrada[i] == '+'){
                        if(v1+v2+e1+e2==2){
                            //operação sobre duas variáveis
                            if(v1==1 && v2==1){
                                if(e1==0){e1 = 1;v1=0;v2=0;aux2[i]=entrada[i];
                                }else if(e2==0){e2=1;v1=0;v2=0;aux2[i]=entrada[i];}
                                else{
                                    cout << "[ERROR]: Expressão inválida.";
                                    break;
                                }
                            }else if(e1==1 && e2==1){
                                //operação sobre duas expressões
                                e2=0;
                                aux2[i]=entrada[i];
                            }else if(v1==1 && e1==1){
                                //operação sobre uma variável e uma sub-expressão
                                v1=0;
                                aux2[i]=entrada[i];
                            }
                        }else{
                            cout << "[ERROR]: Expressão inválida.";
                            break;
                        }
                    }else if(entrada[i] == '*'){
                        if(entrada[i-1]!=' '){
                            aux2[i]=entrada[i];
                        }else{
                            cout << "[ERROR]: Expressão inválida.";
                            break;
                        }
                    }else{
                        if(v1==0){v1 = 1;}else if(v2==0){v2=1;}else{
                            cout << "[ERROR]: Expressão inválida.";
                            break;
                        }
                        aux2[i]=entrada[i];
                    }
                    i++;
                }


            }
            //verifica disponibilidade de nome
            for(int i = 0;i<1000;i++){
                if(tags[i].getId()==aux1){
                    cout << "[ERROR]: Nome já utilizado.";
                    break;
                }
            }
            tag t;
            t.setId(aux1);
            t.setExpressao(aux2);
            int k=0;
            while(tags[k].getId()!=" "){k++;}
            tags[k] = t;
        }
    }
    
}