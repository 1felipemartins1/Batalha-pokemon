#include "Pokemon.hpp"
#include "PokemonEletrico.hpp"
#include <iostream>
#include <string>

PokemonEletrico::PokemonEletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio)
    : Pokemon(nome, tipo_ataque, forca_ataque), _potencia_raio(potencia_raio)
{
}

void PokemonEletrico::falar_tipo_ataque()
{
    std::cout << this->_tipo_ataque << "!\n"
              << "Bzzzz!" << std::endl;
}

double PokemonEletrico::calcular_dano()
{
    return ataque_eletrico();
}

double PokemonEletrico::ataque_eletrico()
{
    double dano = _forca_ataque * _potencia_raio;
    return dano;
}