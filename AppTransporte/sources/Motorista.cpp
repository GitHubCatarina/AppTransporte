#include "Motorista.h"

Motorista::Motorista(const std::string& nome, const std::string& numero)
        : nome(nome), numero(numero) {}

const std::string& Motorista::getNome() const {
    return nome;
}

const std::string& Motorista::getNumero() const {
    return numero;
}

const std::string& Motorista::getTransporteAssociado() const {
    return transporteAssociado;
}

const std::string& Motorista::getHorarioAssociado() const {
    return horarioAssociado;
}

const std::string& Motorista::getEmpresaAssociada() const {
    return empresaAssociada;
}

void Motorista::associarTransporte(const std::string& transporte) {
    transporteAssociado = transporte;
}

void Motorista::desassociarTransporte() {
    transporteAssociado.clear();
}

void Motorista::associarHorario(const std::string& horario) {
    horarioAssociado = horario;
}

void Motorista::desassociarHorario() {
    horarioAssociado.clear();
}

void Motorista::associarEmpresa(const std::string& empresa) {
    empresaAssociada = empresa;
}

void Motorista::desassociarEmpresa() {
    empresaAssociada.clear();
}
