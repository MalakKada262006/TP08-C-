#include "LumiereDirectionnelle.hpp"
#include "LumierePonctuelle.hpp"
#include "LumiereSpot.hpp"
#include <iostream>
#include <vector>
#include <memory>

#ifdef _WIN32
#include <windows.h>
#endif

float calculerEclairage(const Vec3& point, const std::vector<std::unique_ptr<Lumiere>>& lumieres) {
    float intensiteTotale = 0.0f;
    for (const auto& lumiere : lumieres) {
        intensiteTotale += lumiere->intensite(point);
    }
    return intensiteTotale;
}

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << "=== Moteur de Rendu 3D : Gestionnaire de Lumieres ===" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

    std::vector<std::unique_ptr<Lumiere>> sceneLumieres;

    sceneLumieres.push_back(std::make_unique<LumiereDirectionnelle>(Vec3(0.0f, -1.0f, -0.5f), 1.0f));

    sceneLumieres.push_back(std::make_unique<LumierePonctuelle>(Vec3(0.0f, 5.0f, 0.0f), 10.0f, 0.1f));

    sceneLumieres.push_back(std::make_unique<LumiereSpot>(Vec3(0.0f, 10.0f, 0.0f), Vec3(0.0f, -1.0f, 0.0f), 45.0f, 15.0f));

    std::vector<Vec3> pointsTest = {
        {0.0f, 0.0f, 0.0f},
        {5.0f, 2.0f, 5.0f},
        {0.0f, 15.0f, 0.0f}
    };

    int index = 1;
    for (const auto& pt : pointsTest) {
        float eclairageTotal = calculerEclairage(pt, sceneLumieres);
       std::cout << "Point " << index++ << " (" << pt.x << ", " << pt.y << ", " << pt.z << ") "
              << "-> Intensité lumineuse totale recue : " << eclairageTotal << std::endl;
    }

    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Fin du programme. Memoire liberee automatiquement via std::unique_ptr." << std::endl;

    return 0;
}
