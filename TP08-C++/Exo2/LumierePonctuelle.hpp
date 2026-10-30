#ifndef LUMIERE_PONCTUELLE_HPP
#define LUMIERE_PONCTUELLE_HPP

#include "Lumiere.hpp"

class LumierePonctuelle : public Lumiere {
private:
    Vec3 positionSource;
    float intensiteInitiale;
    float attenuation;

public:
    LumierePonctuelle(const Vec3& pos, float intensite, float att);
    float intensite(const Vec3& position) const override;
};

#endif
