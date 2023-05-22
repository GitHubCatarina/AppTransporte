#ifndef RESERVALUGARES_H
#define RESERVALUGARES_H

#include <string>

class ReservaLugares {
public:
    ReservaLugares(const std::string& origem, const std::string& destino, const std::string& horario, int numeroLugar);
    void mostrarReserva() const;

    // Getters
    std::string getOrigem() const;
    std::string getDestino() const;
    std::string getHorario() const;
    int getNumeroLugar() const;

private:
    std::string origem;
    std::string destino;
    std::string horario;
    int numeroLugar;
};

#endif // RESERVALUGARES_H
