#ifndef POKEMONELETRICO_HPP
#define POKEMONELETRICO_HPP

#include "Pokemon.hpp"


class PokemonEletrico : public Pokemon
{
protected:
    double _potencia_raio;

public:
    PokemonEletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio);

    void falar_tipo_ataque() override;

    double calcular_dano() override;

    double ataque_eletrico();
};

#endif
