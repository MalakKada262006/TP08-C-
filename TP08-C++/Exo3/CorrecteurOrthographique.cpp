#include "CorrecteurOrthographique.hpp"

std::string CorrecteurOrthographique::nom() const {
    return "Correcteur Orthographique";
}

std::string CorrecteurOrthographique::traiter(const std::string& texte) {
    std::string resultat = texte;


    size_t pos = 0;
    while ((pos = resultat.find("ilm")) != std::string::npos) {
        resultat.replace(pos, 3, "il");
    }
    while ((pos = resultat.find("etudiant")) != std::string::npos) {
        resultat.replace(pos, 8, "etudiant");
    }

    return resultat;
}
