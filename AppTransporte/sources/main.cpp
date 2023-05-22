#include <iostream>

int main() {
    // Lógica da aplicação

    std::cout << "Bem-vindo à aplicação de transporte!" << std::endl;

    // Menu principal
    int opcao;
    do {
        std::cout << "Menu principal:" << std::endl;
        std::cout << "1. Consultar horários" << std::endl;
        std::cout << "2. Loja" << std::endl;
        std::cout << "3. Área do Gestor" << std::endl;
        std::cout << "0. Sair" << std::endl;
        std::cout << "Selecione uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                std::cout << "Consultar horários" << std::endl; // Lógica para a opção "Consultar horários"
                break;
            case 2:
                std::cout << "Loja" << std::endl;// Lógica para a opção "Loja"
                break;
            case 3:
                std::cout << "Area do Gestor" << std::endl;// Lógica para a opção "Área do Gestor"
                break;
            case 0:
                std::cout << "Saindo..." << std::endl;
                break;
            default:
                std::cout << "Opção inválida!" << std::endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}
