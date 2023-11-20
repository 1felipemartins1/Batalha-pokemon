#include "Pokemon.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonExplosivo.hpp"
#include "Treinador.hpp"
#include <iostream>
#include <string>

Treinador::Treinador(std::string nome) : _nome(nome) {}



std::string Treinador::getNome() const
{
    return _nome;
}


void Treinador::cadastrar_pokemon_eletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio)
{
    Pokemon *novo_pokemon = new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
    _pokemons.push_back(novo_pokemon); 
}

void Treinador::cadastrar_pokemon_aquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato)
{
    Pokemon *novo_pokemon = new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato);
    _pokemons.push_back(novo_pokemon);
}

void Treinador::cadastrar_pokemon_explosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao)
{
    Pokemon *novo_pokemon = new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
    _pokemons.push_back(novo_pokemon);
}

Pokemon *Treinador::usar_pokemon(int idpk)
{
    if (idpk >= 0 && idpk < _pokemons.size())
    {
        return _pokemons[idpk];
    }
    else
    {
        return 0;
    }
}

void Treinador::imprimir_informacoes()
{
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "----------" << std::endl;

    if (_pokemons.empty())
    {
        std::cout << "Nenhum Pokemon cadastrado!" << std::endl;
    }
    else
    {
        for (size_t x = 0; x < _pokemons.size(); x++)
        {
            _pokemons[x]->imprimir_informacoes();
            std::cout << "\n";
            std::cout << "----------" << std::endl;
        }
    }
}
