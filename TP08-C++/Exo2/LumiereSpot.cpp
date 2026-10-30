#include "LumiereSpot.hpp"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

LumiereSpot::LumiereSpot(const Vec3& pos, const Vec3& dir, float angleDegres, float intensite)
    : positionSource(pos), direction(dir.normaliser()), intensiteMax(intensite) {
    float angleRad = angleDegres * static_cast<float>(M_PI) / 180.0f;
    angleOuvertureCos = std::cos(angleRad);
}

float LumiereSpot::intensite(const Vec3& position) const {
    Vec3 directionVersPoint = (position - positionSource).normaliser();

    float produit = direction.produitScalaire(directionVersPoint);

    if (produit < angleOuvertureCos) {
        return 0.0f;
    }

    return intensiteMax * produit;
}
