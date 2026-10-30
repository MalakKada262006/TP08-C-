#include "HautParleur.hpp"
#include <iostream>

void HautParleur::ouvrir() {
    std::cout << "[Haut-Parleur] Ouverture du canal audio integre." << std::endl;
}

void HautParleur::jouer(const std::string& son) {
    std::cout << "[Haut-Parleur] Diffusion acoustique du son : \"" << son << "\"" << std::endl;
}

void HautParleur::fermer() {
    std::cout << "[Haut-Parleur] Fermeture du canal audio." << std::endl;
}
