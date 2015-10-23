#ifndef IPHONE_H
#define IPHONE_H
#include <string>

using std::string;

class Iphone
{
    public:

        Iphone();
        Iphone(string nomeUsuario, float bateria, bool status);

        virtual ~Iphone();


       void criarUsuario();

       void ligarIphone();

       void verificarBateria();

       void acessarMenu();




    private:
        string nomeUsuario;
        float bateria;
        bool status;


};

#endif // IPHONE_H
