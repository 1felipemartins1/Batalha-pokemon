#ifndef POKEMONEXPLOSIVO_HPP
#define POKEMONEXPLOSIVO_HPP
#include "Pokemon.hpp"

class PokemonExplosivo : public Pokemon
{

private:
    double _temperatura_explosao;

public:
    PokemonExplosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao);

    void falar_tipo_ataque() override;

    double calcular_dano() override;

    double ataque_explosivo();
};

#endif