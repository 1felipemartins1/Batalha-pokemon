#include "Pokemon.hpp"
#include <iostream>

Pokemon::Pokemon(std::string nome, std::string tipo_ataque, double forca_ataque)
    : _nome(nome), _tipo_ataque(tipo_ataque), _forca_ataque(forca_ataque) {}

void Pokemon::falar_nome()
{
    std::cout << this->_nome << "!" << std::endl;
}

void Pokemon::falar_tipo_ataque()
{
    std::cout << this->_tipo_ataque << "!" << std::endl;
}

void Pokemon::imprimir_status()
{
    std::cout << this->_nome << "!" << std::endl
              << "Energia: " << this->_energia << std::endl;
}

void Pokemon::imprimir_informacoes()
{
    std::cout << "POkemon: " << this->_nome << std::endl
              << "Tipo ataque: " << this->_tipo_ataque << std::endl
              << "Dano: " << this->_forca_ataque << std::endl
              << "Energia: " << this->_energia << std::endl;
}

void Pokemon::atacar(Pokemon *outro_pokemon)
{
    falar_nome();
    falar_tipo_ataque();
    double damage = calcular_dano();
    std::cout << "Dano: " << damage << std::endl;
    outro_pokemon->receber_dano(damage);
}

void Pokemon::receber_dano(double valor_dano)
{
    this->_energia -= valor_dano;

    if (this->_energia < 0)
    {
        this->_energia = 0;
    }

    if (this->_energia == 0)
    {
        std::cout << this->_nome << " "
                  << "morreu!" << std::endl;
    }
}
