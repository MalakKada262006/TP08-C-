#ifndef ANALYSEUR_STYLE_HPP
#define ANALYSEUR_STYLE_HPP

#include "Plugin.hpp"

class AnalyseurStyle : public Plugin {
public:
    std::string nom() const override;
    std::string traiter(const std::string& texte) override;
};

#endif
