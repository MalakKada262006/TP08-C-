#include "CasqueBT.hpp"
#include <iostream>

void CasqueBT::ouvrir() {
    std::cout << "[Casque Bluetooth] Connexion sans fil et appairage du casque..." << std::endl;
}

void CasqueBT::jouer(const std::string& son) {
    std::cout << "[Casque Bluetooth] Streaming audio HD du son : \"" << son << "\"" << std::endl;
}

void CasqueBT::fermer() {
    std::cout << "[Casque Bluetooth] Deconnexion et mise en veille du casque." << std::endl;
}
