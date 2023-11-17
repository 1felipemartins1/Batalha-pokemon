#ifndef POKEMONAQUATICO_HPP
#define POKEMONAQUATICO_HPP

#include "Pokemon.hpp"

class PokemonAquatico : public Pokemon
{

protected:
    double _litros_jato;

public:
    PokemonAquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato);

    void falar_tipo_ataque() override;

    double calcular_dano() override;

    double ataque_aquatico();
};

#endif
