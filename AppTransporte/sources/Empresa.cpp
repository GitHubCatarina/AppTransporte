#include "Empresa.h"

Empresa::Empresa(const std::string& nome)
        : nome(nome) {
    // Construtor da classe Empresa
}

void Empresa::adicionarTransporte(const Transporte& transporte) {
    transportes.push_back(transporte);
}

void Empresa::adicionarHorario(const Horario& horario) {
    horarios.push_back(horario);
}

const std::vector<Transporte>& Empresa::getTransportes() const {
    return transportes;
}

const std::vector<Horario>& Empresa::getHorarios() const {
    return horarios;
}
