#ifndef ROTA_H
#define ROTA_H

#include <string>
#include <vector>

class Rota {
private:
    std::vector<std::string> paragens;
    double distancia;
    double tempoViagem;

public:
    Rota(const std::vector<std::string>& paragens, double distancia, double tempoViagem);

    const std::vector<std::string>& getParagens() const;
    double getDistancia() const;
    double getTempoViagem() const;
};

#endif //ROTA_H
