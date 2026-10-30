#ifndef LUMIERE_SPOT_HPP
#define LUMIERE_SPOT_HPP

#include "Lumiere.hpp"

class LumiereSpot : public Lumiere {
private:
    Vec3 positionSource;
    Vec3 direction;
    float angleOuvertureCos;
    float intensiteMax;

public:
    LumiereSpot(const Vec3& pos, const Vec3& dir, float angleDegres, float intensite);
    float intensite(const Vec3& position) const override;
};

#endif
