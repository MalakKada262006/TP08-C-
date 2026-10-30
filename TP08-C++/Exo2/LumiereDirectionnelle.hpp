#ifndef LUMIERE_DIRECTIONNELLE_HPP
#define LUMIERE_DIRECTIONNELLE_HPP

#include "Lumiere.hpp"

class LumiereDirectionnelle : public Lumiere {
private:
    Vec3 direction;
    float couleurIntensiteBase;

public:
    LumiereDirectionnelle(const Vec3& dir, float intensiteBase);
    float intensite(const Vec3& position) const override;
};

#endif
