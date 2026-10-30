#ifndef SORTIE_HDMI_HPP
#define SORTIE_HDMI_HPP

#include "SortieAudio.hpp"

class SortieHDMI : public SortieAudio {
public:
    void ouvrir() override;
    void jouer(const std::string& son) override;
    void fermer() override;
};

#endif
