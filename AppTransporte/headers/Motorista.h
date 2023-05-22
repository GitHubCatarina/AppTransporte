#ifndef MOTORISTA_H
#define MOTORISTA_H

#include <string>

class Motorista {
private:
    std::string nome;
    std::string numero;
    std::string transporteAssociado;
    std::string horarioAssociado;
    std::string empresaAssociada;

public:
    Motorista(const std::string& nome, const std::string& numero);

    const std::string& getNome() const;
    const std::string& getNumero() const;
    const std::string& getTransporteAssociado() const;
    const std::string& getHorarioAssociado() const;
    const std::string& getEmpresaAssociada() const;

    void associarTransporte(const std::string& transporte);
    void desassociarTransporte();
    void associarHorario(const std::string& horario);
    void desassociarHorario();
    void associarEmpresa(const std::string& empresa);
    void desassociarEmpresa();
};

#endif // MOTORISTA_H
