#include "Geladeira.h"

#include <iostream>
using std::cout;

Geladeira::Geladeira()
{
    onoff = false;
    temperatura = 0;
}

Geladeira::~Geladeira()
{
}


void Geladeira::ligar( )
{
    if ( !onoff )
    {
        onoff = true;
        cout << "O aparelho foi ligado\n";
    }
    else
        cout << "Aparelho jah estava ligado" << '\n';    
}


void Geladeira::incTemperatura( )
{
    if( onoff )
    {
        temperatura += 2;
        cout << "A temperatura aumentou em dois graus.\n"
             << "A temperatura atual eh: " << temperatura << '\n';
        
    }
    else 
         cout << "Tentando aumentar temperatura mas a geladeira estah desligada.\n";
}

void Geladeira::decTemperatura( )
{
    if( onoff )
    {
        temperatura -= 2;
        cout << "A temperatura diminuiu em dois graus.\n"
             << "A temperatura atual eh: " << temperatura << '\n';
    }
    else 
         cout << "Tentando diminuir temperatura mas a geladeira estah desligada.\n";
}
