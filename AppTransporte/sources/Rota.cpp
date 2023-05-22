#include "Rota.h"

Rota::Rota(const std::vector<std::string>& paragens, double distancia, double tempoViagem)
        : paragens(paragens), distancia(distancia), tempoViagem(tempoViagem) {}

const std::vector<std::string>& Rota::getParagens() const {
    return paragens;
}

double Rota::getDistancia() const {
    return distancia;
}

double Rota::getTempoViagem() const {
    return tempoViagem;
}
