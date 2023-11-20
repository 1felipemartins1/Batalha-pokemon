#ifndef TREINADOR_HPP
#define TREINADOR_HPP
#include "Pokemon.hpp"
#include <iostream>
#include <string>
#include <vector>

class Treinador
{
private:
    std::string _nome;

public:
    Treinador(std::string nome);
    void cadastrar_pokemon_eletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio);
    void cadastrar_pokemon_aquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato);
    void cadastrar_pokemon_explosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao);
    Pokemon *usar_pokemon(int idpk);
    void imprimir_informacoes();
    std::vector<Pokemon *> _pokemons;
    std::string getNome() const; // Declaração do método getNome
};

#endif