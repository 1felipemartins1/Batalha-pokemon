#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <iostream>
#include <string>

class Pokemon
{
private:
    std::string _nome;
    std::string _tipo_ataque;
    double _forca_ataque; 
    double _energia = 100;

public:
    Pokemon(std::string nome, std::string tipo_ataque, double forca_ataque);

    void falar_nome();
    virtual void falar_tipo_ataque(); 
    void imprimir_status();
    void imprimir_informacoes(); 
    virtual double calcular_dano() = 0; 
    void atacar(Pokemon* outro_pokemon);  
    void receber_dano(double valor_dano);
};

#endif
