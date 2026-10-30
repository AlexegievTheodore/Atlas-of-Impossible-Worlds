#include "World.h"
#include <stdexcept>

World::World()
{
    for (int row = 0; row < World::Height; row++)
    {
        for (int column = 0; column < World::Width; column++)
        {
            elevations[row][column] = 0;
        }
        
    }
}

World::~World() = default;

const float (&World::getElevations() const)[World::Height][World::Width]
{
    return elevations;
}

void World::setElevation(std::size_t row, std::size_t column, float value){

    if (row < Height && column < Width)
    {
        World::elevations[row][column] = value;
    }
    else
    {
        throw std::out_of_range("Out of bounds");
    }
}