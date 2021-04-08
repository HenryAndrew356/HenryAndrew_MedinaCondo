#include <iostream>
#include <string>
#include <cctype>

char arrayMay[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char arrayMin[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

using std::cout;
using std::cin;
using std::endl;
using std::string;

void encriptar(string &mensajeAencriptar);
void desencriptar(string &mensajeEncriptado);

int main()
{
    string mensaje;
    cout<<"Ingrese el mensaje:"<<endl;
    getline(cin,mensaje);

    encriptar(mensaje);

    cout<<"\n\n\n";

    cout<<"Mensaje encriptado: "<<endl<<endl;
    
    cout<<mensaje<<endl<<endl;

    desencriptar(mensaje);

    cout<<"\n\n\n";

    cout<<"EL mensaje desencriptado es : "<<endl<<endl;
    
    cout<<mensaje<<endl<<endl;
    
    return 0;
}


void encriptar(string &mensajeAencriptar)
{
    int clave;
    cout<<"Ingresar clave: ";
    cin>>clave;
    int encounter;
    
    for(unsigned int pasada1{0};pasada1<mensajeAencriptar.size();pasada1++)
    {
        if(isalpha(mensajeAencriptar[pasada1]))
        {
            if(isupper(mensajeAencriptar[pasada1]))
            {
                for(unsigned int a1{0};a1<26;a1++)
                {
                    if(mensajeAencriptar[pasada1]==arrayMay[a1])
                    {
                        encounter=a1;
                        if((clave+encounter)<=25)
                        {
                            mensajeAencriptar[pasada1]=arrayMay[clave+encounter];
                            break;
                        }
                        else
                        {
                            mensajeAencriptar[pasada1]=arrayMay[((clave+encounter)-26)];
                            break;
                        }
                    }
                }
            }
            if(islower(mensajeAencriptar[pasada1]))
            {
                for(unsigned int a2{0};a2<26;a2++)
                {
                    if(mensajeAencriptar[pasada1]==arrayMin[a2])
                    {
                        encounter=a2;
                        if((clave+encounter)<=25)
                        {
                            mensajeAencriptar[pasada1]=arrayMin[clave+encounter];
                            break;
                        }
                        else
                        {
                            mensajeAencriptar[pasada1]=arrayMin[((clave+encounter)-26)];
                            break;
                        }
                    }
                }
            }
        }
    }
}
void desencriptar(string &mensajeEncriptado)
{
    int clave2;
    cout<<"Ingresar clave para desencriptar: ";
    cin>>clave2;
    int encounter;
    
    for(unsigned int pasada1{0};pasada1<mensajeEncriptado.size();pasada1++)
    {
        if(isalpha(mensajeEncriptado[pasada1]))
        {
            if(isupper(mensajeEncriptado[pasada1]))
            {
                for(unsigned int a1{0};a1<26;a1++)
                {
                    if(mensajeEncriptado[pasada1]==arrayMay[a1])
                    {
                        encounter=a1;
                        if((encounter-clave2)>=0)
                        {
                            mensajeEncriptado[pasada1]=arrayMay[encounter-clave2];
                            break;
                        }
                        else
                        {
                            mensajeEncriptado[pasada1]=arrayMay[(26-(clave2-encounter))];
                            break;
                        }
                    }
                }
            }
            if(islower(mensajeEncriptado[pasada1]))
            {
                for(unsigned int a2{0};a2<26;a2++)
                {
                    if(mensajeEncriptado[pasada1]==arrayMin[a2])
                    {
                        encounter=a2;
                        if((encounter-clave2)>=0)
                        {
                            mensajeEncriptado[pasada1]=arrayMin[encounter-clave2];
                            break;
                        }
                        else
                        {
                            mensajeEncriptado[pasada1]=arrayMin[(26-(clave2-encounter))];
                            break;
                        }
                    }
                }
            }
        }
    }
}
