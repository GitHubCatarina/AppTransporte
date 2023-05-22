#include "Horario.h"

Horario::Horario(const std::string& empresa, const std::string& transporte, const std::string& rota,
                 const std::string& horaPartida, const std::string& horaChegada)
        : empresa(empresa), transporte(transporte), rota(rota), horaPartida(horaPartida), horaChegada(horaChegada) {}

const std::string& Horario::getEmpresa() const {
    return empresa;
}

const std::string& Horario::getTransporte() const {
    return transporte;
}

const std::string& Horario::getRota() const {
    return rota;
}

const std::string& Horario::getHoraPartida() const {
    return horaPartida;
}

const std::string& Horario::getHoraChegada() const {
    return horaChegada;
}
