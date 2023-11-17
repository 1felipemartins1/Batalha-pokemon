#include "Pokemon.hpp"
#include "PokemonAquatico.hpp"
#include <iostream>
#include <string>

PokemonAquatico::PokemonAquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato)
    : Pokemon(nome, tipo_ataque, forca_ataque), _litros_jato(_litros_jato)
{
}



void PokemonAquatico::falar_tipo_ataque()
{
    std::cout << this->_tipo_ataque << "!\n"
    << "Splash!" << std::endl;
} 


double PokemonAquatico::calcular_dano(){
    return ataque_aquatico();
}

double PokemonAquatico::ataque_aquatico(){
    double dano = _forca_ataque + _litros_jato; 
    return dano;
}

