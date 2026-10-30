#ifndef CORRECTEUR_ORTHOGRAPHIQUE_HPP
#define CORRECTEUR_ORTHOGRAPHIQUE_HPP

#include "Plugin.hpp"

class CorrecteurOrthographique : public Plugin {
public:
    std::string nom() const override;
    std::string traiter(const std::string& texte) override;
};

#endif
