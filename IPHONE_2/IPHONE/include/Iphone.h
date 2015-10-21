#ifndef IPHONE_H
#define IPHONE_H
#include <string>

using std::string;

class Iphone
{
    public:
        Iphone();
        virtual ~Iphone();


       void criarUsuario();


    private:
        string nomeUsuario;

};

#endif // IPHONE_H
