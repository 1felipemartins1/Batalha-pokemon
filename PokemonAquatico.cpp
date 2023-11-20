#include "Pokemon.hpp"
#include "PokemonAquatico.hpp"
#include <iostream>
#include <string>

PokemonAquatico::PokemonAquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato)
    : Pokemon(nome, tipo_ataque, forca_ataque), _litros_jato(litros_jato)
{
}

void PokemonAquatico::falar_tipo_ataque()
{
    std::cout << this->_tipo_ataque << "!\n"
              << "Splash!" << std::endl;
}

double PokemonAquatico::calcular_dano()
{   double resultado = ataque_aquatico();
    return resultado;
}

double PokemonAquatico::ataque_aquatico()
{
    double a = this ->_forca_ataque; 
    double b = this->_litros_jato; 
    double c = a + b; 
    return c; 
}
