#include "SortieHDMI.hpp"
#include <iostream>

void SortieHDMI::ouvrir() {
    std::cout << "[Sortie HDMI] Initialisation du flux audio numerique sur l ecran externe." << std::endl;
}

void SortieHDMI::jouer(const std::string& son) {
    std::cout << "[Sortie HDMI] Envoi du flux multicanal pour le son : \"" << son << "\"" << std::endl;
}

void SortieHDMI::fermer() {
    std::cout << "[Sortie HDMI] Coupure du flux numerique HDMI." << std::endl;
}
