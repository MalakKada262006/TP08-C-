#include "LumiereDirectionnelle.hpp"

LumiereDirectionnelle::LumiereDirectionnelle(const Vec3& dir, float intensiteBase)
    : direction(dir.normaliser()), couleurIntensiteBase(intensiteBase) {}

float LumiereDirectionnelle::intensite(const Vec3& /* position */) const {
    return couleurIntensiteBase;
}
