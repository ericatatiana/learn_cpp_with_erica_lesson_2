#include <iostream>
#include <string>
using namespace std;

int main() {
    // 🐱 Personagem 1
    string nomeGato = "Tommy";
    int idadeGato = 5;
    float velocidadeGato = 20.5;

    // 🐭 Personagem 2
    string nomeRato = "Jerry";
    int idadeRato = 2;
    float velocidadeRato = 25.0;

    // 🍕 Outros dados
    int quantidadeQueijo = 3;
    bool ratoFugiu = true;

    cout << "=== HISTORIA DO GATO E DO RATO ===" << endl;
    cout << endl;

    // Introdução
    cout << nomeGato << " eh um gato com " << idadeGato << " anos." << endl;
    cout << nomeRato << " eh um rato com " << idadeRato << " anos." << endl;
    cout << endl;

    // Situação
    cout << nomeGato << " viu " << nomeRato << " a roubar " << quantidadeQueijo << " queijos!" << endl;
    cout << "Velocidade do gato: " << velocidadeGato << " km/h" << endl;
    cout << "Velocidade do rato: " << velocidadeRato << " km/h" << endl;
    cout << endl;

    // Lógica simples
    if (velocidadeRato > velocidadeGato) {
        cout << nomeRato << " eh mais rapido e conseguiu fugir! 😆" << endl;
    } else {
        cout << nomeGato << " conseguiu apanhar o rato! 😼" << endl;
    }

    cout << endl;

    // Booleano
    if (ratoFugiu) {
        cout << "No final... o rato escapou com o queijo 🧀" << endl;
    } else {
        cout << "O gato ganhou desta vez!" << endl;
    }

    cout << endl;
    cout << "Fim da historia 😂" << endl;

    return 0;
}
