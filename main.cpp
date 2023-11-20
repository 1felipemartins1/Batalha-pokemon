//#include "avaliacao_basica_pokemon.hpp"
#include "Treinador.hpp"
#include "Campeonato.hpp"
#include <iostream>
#include <sstream>

int main()
{
    Campeonato campeonato;

    std::string line;
    while (std::getline(std::cin, line))
    {
        std::istringstream iss(line);
        char command;
        iss >> command;

        if (command == 't')
        {
            std::string nome;
            std::getline(iss >> std::ws, nome);
            campeonato.cadastrar_treinador(nome);
        }
        else if (command == 'i')
        {
            int idt;
            iss >> idt;
            campeonato.imprimir_informacoes_treinador(idt);
        }
        else if (command == 'e')
        {
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, potencia_raio;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> potencia_raio;
            campeonato.cadastrar_pokemon_eletrico(idt, nome, tipo_ataque, forca_ataque, potencia_raio);
        }
        else if (command == 'q')
        {
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, litros_jato;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> litros_jato;
            campeonato.cadastrar_pokemon_aquatico(idt, nome, tipo_ataque, forca_ataque, litros_jato);
        }
        else if (command == 'x')
        {
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, temperatura_explosao;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> temperatura_explosao;
            campeonato.cadastrar_pokemon_explosivo(idt, nome, tipo_ataque, forca_ataque, temperatura_explosao);
        }
        else if (command == 'h')
        {
            int idt1, idpk1, idt2, idpk2;
            iss >> idt1 >> idpk1 >> idt2 >> idpk2;
            campeonato.executar_batalha(idt1, idpk1, idt2, idpk2);
        }
        else if (command == 'b')
        {
           // avaliacao_basica();
        }
        
    }

    return 0;
}

// g++ -o fd Pokemon.hpp Pokemon.cpp PokemonEletrico.hpp PokemonEletrico.cpp PokemonAquatico.hpp PokemonAquatico.cpp PokemonExplosivo.hpp PokemonExplosivo.cpp Treinador.hpp Treinador.cpp Campeonato.hpp Campeonato.cpp
