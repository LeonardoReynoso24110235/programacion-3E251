#include "EstadoFoco.hpp"
#include <iostream>

class Foco{
    private:
        EstadoFoco estado;

    public:
        Foco(){
            estado = EstadoFoco::Apagado;
        }
        ~Foco(){}

        void Encender(){
            estado = EstadoFoco::Encendido;
        }
        void Apagar(){
            estado = EstadoFoco::Apagado;
        }

        void Imprimir (){

            switch(estado){
                case EstadoFoco::Apagado:
                      std::cout<<"*"<< std:: endl;
                break;
                case EstadoFoco::Encendido:
                      std::cout<<"O"<< std::endl;
                break;
                default:
                      std::cout<<"explote"<<std::endl;
                break;
            }
            //std::cout << ". -----HOLA MUNDO" << estado << std::endl;
        }

        void Alternar(){
            if(estado == EstadoFoco::Encendido){
                estado = EstadoFoco::Apagado;
            }else{
                estado = EstadoFoco::Encendido;
            }
        }
};