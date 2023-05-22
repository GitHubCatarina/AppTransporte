#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <vector>
#include "Transporte.h"
#include "Horario.h"

class Empresa {
private:
    std::string nome;
    std::vector<Transporte> transportes;
    std::vector<Horario> horarios;

public:
    Empresa(const std::string& nome);

    // Métodos para adicionar transportes e horários
    void adicionarTransporte(const Transporte& transporte);
    void adicionarHorario(const Horario& horario);

    // Métodos para obter a lista de transportes e horários
    const std::vector<Transporte>& getTransportes() const;
    const std::vector<Horario>& getHorarios() const;
};

#endif // EMPRESA_H
