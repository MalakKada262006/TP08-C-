#ifndef SORTIE_AUDIO_HPP
#define SORTIE_AUDIO_HPP

#include <string>

class SortieAudio {
public:
    virtual ~SortieAudio() = default;

    virtual void ouvrir() = 0;
    virtual void jouer(const std::string& son) = 0;
    virtual void fermer() = 0;
};

#endif
