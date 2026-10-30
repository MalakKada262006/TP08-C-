#ifndef CASQUE_BT_HPP
#define CASQUE_BT_HPP

#include "SortieAudio.hpp"

class CasqueBT : public SortieAudio {
public:
    void ouvrir() override;
    void jouer(const std::string& son) override;
    void fermer() override;
};

#endif
