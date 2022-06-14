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
        tag(string id, string expressao);
        ~tag();
        string getId();
        string getExpressao();
        void setId(string id);
        void setExpressao(string expressao);
};