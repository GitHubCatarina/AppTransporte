#ifndef AREAGESTOR_H
#define AREAGESTOR_H

#include <string>

class AreaGestor {
public:
    static bool autenticar(const std::string& numero, const std::string& passe);
    static void menuGestor();
    static void associarMotoristaTransporte();
    static void desassociarMotoristaTransporte();
    static void associarMotoristaHorario();
    static void desassociarMotoristaHorario();
    static void associarMotoristaEmpresa();
    static void desassociarMotoristaEmpresa();
};

#endif // AREAGESTOR_H
