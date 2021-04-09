#include "ScitalaHeader.h"

void ScitalaHeader::encriptarScitala()
{
    string mensajePivote;
    mensajePivote=mensaje;
    int claveEncColumnas;
    int claveEncFilas;
    cout<<"->Ingresar clave de columnas y filas: ";
    cin>>claveEncColumnas>>claveEncFilas;

    int pivote1;
    int pivote2{0};

    for(unsigned int pasadaColumnas{0};pasadaColumnas<claveEncColumnas;pasadaColumnas++)
    {
        pivote1=pasadaColumnas;
        for(unsigned int pasadaFilas{0};pasadaFilas<claveEncFilas;pasadaFilas++)
        {
            mensaje[pivote2]=mensajePivote[pivote1+(claveEncColumnas*pasadaFilas)];
            pivote2++;
        }
    }
}

void ScitalaHeader::desencriptarScitala()
{
    string mensajePivote;
    mensajePivote=mensaje;
    int claveDesencColumnas;
    int claveDesencFilas;
    cout<<"->Ingresar clave de columnas y filas: ";
    cin>>claveDesencColumnas>>claveDesencFilas;

    int pivote1;
    int pivote2{0};

    for(unsigned int pasadaFilas{0};pasadaFilas<claveDesencFilas;pasadaFilas++)
    {
        pivote1=pasadaFilas;
        for(unsigned int pasadaColumnas{0};pasadaColumnas<claveDesencColumnas;pasadaColumnas++)
        {
            mensaje[pivote2]=mensajePivote[pivote1+(claveDesencFilas*pasadaColumnas)];
            pivote2++;
        }
    }    
}

void ScitalaHeader::imprimir()
{
    cout<<mensaje;
}
