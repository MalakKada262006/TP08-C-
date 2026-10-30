#include "AnalyseurStyle.hpp"

std::string AnalyseurStyle::nom() const {
    return "Analyseur de Style";
}

std::string AnalyseurStyle::traiter(const std::string& texte) {
    std::string resultat = texte;

    if (resultat.length() > 50) {
        resultat += " [Avertissement : Phrase un peu longue, pensez à l alleger.]";
    } else {
        resultat += " [Style OK]";
    }

    return resultat;
}
