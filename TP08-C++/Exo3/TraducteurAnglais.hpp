#ifndef TRADUCTEUR_ANGLAIS_HPP
#define TRADUCTEUR_ANGLAIS_HPP

#include "Plugin.hpp"

class TraducteurAnglais : public Plugin {
public:
    std::string nom() const override;
    std::string traiter(const std::string& texte) override;
};

#endif
