#include "SortieAudio.hpp"
#include "HautParleur.hpp"
#include "CasqueBT.hpp"
#include "SortieHDMI.hpp"
#include <iostream>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#endif

void tester(SortieAudio* sortie) {
    if (sortie != nullptr) {
        sortie->ouvrir();
        sortie->jouer("Symphonie N°5 - Beethoven");
        sortie->fermer();
        std::cout << "----------------------------------------" << std::endl;
    }
}

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << "=== Gestion Polymorphe de Peripheriques Audio ===" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    std::vector<SortieAudio*> periferiques;

    periferiques.push_back(new HautParleur());
    periferiques.push_back(new CasqueBT());
    periferiques.push_back(new SortieHDMI());

    for (SortieAudio* periph : periferiques) {
        tester(periph);
    }


    for (SortieAudio* periph : periferiques) {
        delete periph;
    }
    periferiques.clear();

    return 0;
}
