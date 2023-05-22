#ifndef APPTRANSPORTE_TRANSPORTE_H
#define APPTRANSPORTE_TRANSPORTE_H

class Transporte {
private:
    int numeroTransporte;
    int lugaresTotais;
    int lugaresDisponiveis;

public:
    Transporte(int numeroTransporte, int lugaresTotais);
    int getNumeroTransporte() const;
    int getLugaresTotais() const;
    int getLugaresDisponiveis() const;
    void reservarLugar();
};

#endif //APPTRANSPORTE_TRANSPORTE_H
