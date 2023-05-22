#ifndef HORARIO_H
#define HORARIO_H

#include <string>

class Horario {
private:
    std::string empresa;
    std::string transporte;
    std::string rota;
    std::string horaPartida;
    std::string horaChegada;

public:
    Horario(const std::string& empresa, const std::string& transporte, const std::string& rota,
            const std::string& horaPartida, const std::string& horaChegada);

    const std::string& getEmpresa() const;
    const std::string& getTransporte() const;
    const std::string& getRota() const;
    const std::string& getHoraPartida() const;
    const std::string& getHoraChegada() const;
};

#endif // HORARIO_H
