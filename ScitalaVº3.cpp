#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void cifradoScitala(string &mensaje)
{
    string mensajePivote=mensaje;
    int columnas,filas;
    
    cout<<"Ingrese las columnas y filas: ";
    cin>>columnas>>filas;
    int resto=columnas*filas-mensaje.size();
    for(int a{0};a<resto;a++)
    {
        mensajePivote+=" ";
        mensaje+=" ";
    }
    int pasada{0};
    int multiplicador{0};
    for(unsigned int pasadaF{0};pasadaF<columnas;pasadaF++)
    {
        multiplicador=0;
        for(unsigned int pasadaC{pasadaF};pasadaC<filas+pasadaF;pasadaC++)
        {
            mensaje[pasada]=mensajePivote[pasadaF+columnas*multiplicador];
            pasada++;
            multiplicador++;
        }
    }
}

void descifradoScitala(string &mensaje)
{
    string mensajePivote=mensaje;
    int columnas,filas;
    cout<<"Ingrese las columnas y filas para descrifrar: ";
    cin>>columnas>>filas;
    int pasada{0};
    int multiplicador{0};
    for(unsigned int pasadaF{0};pasadaF<filas;pasadaF++)
    {
        multiplicador=0;
        for(unsigned int pasadaC{pasadaF};pasadaC<columnas+pasadaF;pasadaC++)
        {
            mensaje[pasada]=mensajePivote[pasadaF+filas*multiplicador];
            pasada++;
            multiplicador++;
        }
    }
}


int main()
{
    string mensaje;
    cout<<"Ingrese el mensaje:"<<endl;
    getline(cin,mensaje);
    cifradoScitala(mensaje);
    cout<<"El mensaje cifrado es: "<<endl<<mensaje;
    cout<<endl;

    string mensajeAdescifrar;
    cout<<"Ingrese el mensaje a descifrar:"<<endl;
    getline(cin,mensajeAdescifrar);
    descifradoScitala(mensajeAdescifrar);
    cout<<"El mensaje descifrado es: "<<endl<<mensajeAdescifrar;
    cout<<endl;

    return 0;
}
