#include "Pokemon.hpp"
#include "PokemonExplosivo.hpp"
#include <iostream>
#include <string>

PokemonExplosivo::PokemonExplosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao) 
: Pokemon(nome, tipo_ataque, forca_ataque), _temperatura_explosao(temperatura_explosao)
{ 
}

void PokemonExplosivo::falar_tipo_ataque(){
    std::cout << this->_tipo_ataque << "!\n"
              << "Boom!" << std::endl;
}

double PokemonExplosivo::calcular_dano(){
    return ataque_explosivo(); 
}

double PokemonExplosivo::ataque_explosivo(){
    double dano = _forca_ataque/_temperatura_explosao;
    return dano; 
}