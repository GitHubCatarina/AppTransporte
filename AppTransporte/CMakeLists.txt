cmake_minimum_required(VERSION 3.24)
project(AppTransporte)

set(CMAKE_CXX_STANDARD 17)

# Configuração para os arquivos de cabeçalho (headers)
include_directories(Headers)

# Configuração para os arquivos de código-fonte (sources)
set(SOURCES
        Sources/main.cpp
        Sources/Utilizador.cpp
        Sources/Motorista.cpp
        Sources/Loja.cpp
        Sources/AreaGestor.cpp
        Sources/Empresa.cpp
        Sources/Transporte.cpp
        Sources/Horario.cpp
        Sources/Rota.cpp
        Sources/ReservaLugares.cpp
        sources/main.cpp)

add_executable(AppTransporte ${SOURCES})
