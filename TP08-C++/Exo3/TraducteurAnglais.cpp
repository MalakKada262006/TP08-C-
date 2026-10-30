#include "TraducteurAnglais.hpp"

std::string TraducteurAnglais::nom() const {
    return "Traducteur Anglais";
}

std::string TraducteurAnglais::traiter(const std::string& texte) {
    std::string resultat = texte;

    size_t pos = 0;
    while ((pos = resultat.find("bonjour")) != std::string::npos) {
        resultat.replace(pos, 7, "hello");
    }
    while ((pos = resultat.find("monde")) != std::string::npos) {
        resultat.replace(pos, 5, "world");
    }

    return resultat;
}
