// 1_Archivos_VS22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//manejo de consola
#include <iostream>
//biblioteca de manejo de archivos
#include <fstream>
#define MAXSIZE 128

void EjemploApuntadores() {
    std::cout << "apuntadores\n";
    int valor = 66;
    int* ref2 = &valor;
    *ref2 = 128;
    printf("valor%i Mem:%#010x\n", *ref2, ref2);
    std::cout << "valor=" << valor << std::endl;
}

void Promedio(float* valor_acum) {
    //buscar como calcular el promedio en c++
    //*valor_acum += *valor_acum:
}

void Acumular(float & num, float valor) {
    num += valor;
}

int main(int argc, char ** argv)
{/*
    if (argc <= 1) return 0;

    float suma = 0;
    std::cout << "argc: " << argc << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
        Acumular(suma, atoi(argv[i]));
    }

    float promedio = suma / (argc - 1);
    std::cout << "promedio: " << promedio << std::endl;*/

    /*int x = 18;
    Acumular(x, 8);
    std::cout << "nuevo valor: " << x << std::endl;*/

    std::cout << "Leyendo archivo" << std::endl;

    /*std::ifstream file;
    file.open("datos.txt", std::ifstream::in);*/

    std::ifstream file;
    file.open("Calculo.txt", std::ifstream::in);

    if (file.is_open())
    {
        std::cout << "archivo abierto\n";

        char buffer[MAXSIZE];
        while (!file.eof())
        {
            file.getline(buffer, MAXSIZE);
            std::cout << buffer << std::endl;

            if (strcmp(buffer, "apuntadores") == 0)
                EjemploApuntadores();
            if (strcmp(buffer, "promedio") == 0)
                EjemploApuntadores();

        }
    }
    else {
        std::cout << "no se encuentra el archivo\n";
    }
}

