#include "Iphone.h"

Iphone::Iphone()
{
    this->nomeUsuario = "Desconhecido";
    this->bateria = 0.0;
    this->status = false;

    }
Iphone:: Iphone(string nomeUsuario, float bateria, bool status){

    this->nomeUsuario = nomeUsuario;
    this->bateria = bateria;
    this->status = status;
}
Iphone::~Iphone()
{
    //dtor
}


Iphone::acessarMenu ();
