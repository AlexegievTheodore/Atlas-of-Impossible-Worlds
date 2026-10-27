#pragma once

#include <cstddef>

namespace atlas
{
    class World
    {
    public:
        static constexpr std::size_t Width = 128;
        static constexpr std::size_t Height = 128;

    private:
        float elevations[Height][Width]{};
    };

    World::World(/* args */)
    {
    }

    World::~World()
    {
    }
}