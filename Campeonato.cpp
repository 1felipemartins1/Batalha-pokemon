#include "Pokemon.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonExplosivo.hpp"
#include "Treinador.hpp"
#include "Campeonato.hpp"
#include <iostream>
#include <string>

void Campeonato::cadastrar_treinador(std::string nome)
{
    Treinador *novo_treinador = new Treinador(nome);
    this->_treinadores.push_back(novo_treinador);
}
void Campeonato::cadastrar_pokemon_eletrico(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio)
{

    _treinadores[idt]->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
}

void Campeonato::cadastrar_pokemon_aquatico(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato)
{

    _treinadores[idt]->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
}

void Campeonato::cadastrar_pokemon_explosivo(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao)
{

    _treinadores[idt]->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
}

void Campeonato::imprimir_informacoes_treinador(int idt)
{

    _treinadores[idt]->imprimir_informacoes();
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2)
{           
    Treinador *treinador1 = _treinadores[idt1];
    Treinador *treinador2 = _treinadores[idt2];
    Pokemon *pokemon1 = treinador1->_pokemons[idpk1];
    Pokemon *pokemon2 = treinador2->_pokemons[idpk2];

    std::cout << "### Batalha ###" << std::endl;
    std::cout << treinador1->getNome() << " " << "(" << pokemon1->getNome() << 
    ")" << " " << "vs."<< " " << treinador2->getNome() << " " << "(" <<
    pokemon2->getNome() << ")" << std::endl;

    pokemon1->atacar(pokemon2);
    pokemon2->imprimir_status();  

    std::cout<<"#########"<< std::endl; 

    }

// ## #Batalha## #TREINADOR1(POKEMON1) vs.TREINADOR2(POKENON2) - Chamar método atacar(nesse caso, POKEMON1 ataca o POKEMON2) - Imprimir o status do pokemon atacado(nesse caso, POKEMON2)######## #