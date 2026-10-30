#include "LumierePonctuelle.hpp"

LumierePonctuelle::LumierePonctuelle(const Vec3& pos, float intensite, float att)
    : positionSource(pos), intensiteInitiale(intensite), attenuation(att) {}

float LumierePonctuelle::intensite(const Vec3& position) const {
    float distance = (positionSource - position).longueur();

    float valeur = intensiteInitiale / (1.0f + attenuation * distance * distance);

    return (valeur > 0.0f) ? valeur : 0.0f;
}
