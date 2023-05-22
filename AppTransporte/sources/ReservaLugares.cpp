#include "ReservaLugares.h"
#include <iostream>

ReservaLugares::ReservaLugares(const std::string& origem, const std::string& destino, const std::string& horario, int numeroLugar)
        : origem(origem), destino(destino), horario(horario), numeroLugar(numeroLugar) {}

void ReservaLugares::mostrarReserva() const {
    std::cout << "Reserva de lugares:" << std::endl;
    std::cout << "Origem: " << origem << std::endl;
    std::cout << "Destino: " << destino << std::endl;
    std::cout << "Horário: " << horario << std::endl;
    std::cout << "Número do lugar: " << numeroLugar << std::endl;
}

std::string ReservaLugares::getOrigem() const {
    return origem;
}

std::string ReservaLugares::getDestino() const {
    return destino;
}

std::string ReservaLugares::getHorario() const {
    return horario;
}

int ReservaLugares::getNumeroLugar() const {
    return numeroLugar;
}
