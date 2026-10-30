#ifndef VEC3_HPP
#define VEC3_HPP

#include <cmath>

struct Vec3 {
    float x, y, z;

    Vec3(float x = 0.0f, float y = 0.0f, float z = 0.0f) : x(x), y(y), z(z) {}

    Vec3 operator-(const Vec3& autre) const {
        return {x - autre.x, y - autre.y, z - autre.z};
    }

    float produitScalaire(const Vec3& autre) const {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    float longueur() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    Vec3 normaliser() const {
        float l = longueur();
        if (l == 0) return {0, 0, 0};
        return {x / l, y / l, z / l};
    }
};

#endif
