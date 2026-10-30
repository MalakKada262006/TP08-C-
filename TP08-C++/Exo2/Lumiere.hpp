#ifndef LUMIERE_HPP
#define LUMIERE_HPP

#include "Vec3.hpp"

class Lumiere {
public:
    virtual ~Lumiere() = default;

    virtual float intensite(const Vec3& position) const = 0;
};

#endif
