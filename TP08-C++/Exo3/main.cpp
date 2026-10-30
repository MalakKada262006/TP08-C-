#include "Plugin.hpp"
#include <iostream>
#include <vector>
#include <memory>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    std::cout << "=== Systeme de plugins de traitement de texte ===" << std::endl;

    std::vector<std::unique_ptr<Plugin>> pipelinePlugins;

    pipelinePlugins.push_back(Plugin::creerPlugin("correcteur"));
    pipelinePlugins.push_back(Plugin::creerPlugin("traducteur"));
    pipelinePlugins.push_back(Plugin::creerPlugin("analyseur"));

    std::string texteInitial;
    std::cout << "\nEntrez un texte a traiter : ";
    std::getline(std::cin, texteInitial);

    std::cout << "\nTexte d origine : \"" << texteInitial << "\"" << std::endl;

    std::string texteCourant = texteInitial;

    for (size_t i = 0; i < pipelinePlugins.size(); ++i) {
        if (pipelinePlugins[i] != nullptr) {
            texteCourant = pipelinePlugins[i]->traiter(texteCourant);

            std::cout << "Etape " << (i + 1) << " - Plugin applique : [" << pipelinePlugins[i]->nom() << "]" << std::endl;
            std::cout << "Resultat : " << texteCourant << std::endl;
        }
    }

    std::cout << "Traitement termine avec succes ! Memoire nettoyee automatiquement." << std::endl;

    return 0;
}
