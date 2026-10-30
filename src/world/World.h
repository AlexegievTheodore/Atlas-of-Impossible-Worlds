#pragma once

#include <cstddef>

class World
{
public:
    static constexpr std::size_t Width = 128;
    static constexpr std::size_t Height = 128;

    World();

    const float (&getElevations() const)[Height][Width];

    void setElevation(std::size_t row, std::size_t column, float value);

    ~World();

private:
    float elevations[Height][Width]{};
};