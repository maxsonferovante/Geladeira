#ifndef GELADEIRA_H
#define GELADEIRA_H

class Geladeira
{
public:
    Geladeira();
    ~Geladeira();
    
    void ligar( );
    void incTemperatura( );
    void decTemperatura( );
    void mostrarStatus( ) const;
    
private:

    bool onoff;    
    float temperatura;

};

#endif // GELADEIRA_H
