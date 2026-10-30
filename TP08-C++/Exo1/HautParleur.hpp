#ifndef HAUT_PARLEUR_HPP
#define HAUT_PARLEUR_HPP

#include "SortieAudio.hpp"

class HautParleur : public SortieAudio {
public:
    void ouvrir() override;
    void jouer(const std::string& son) override;
    void fermer() override;
};

#endif
