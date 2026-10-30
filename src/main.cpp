#include <iostream>
#include "world/World.h"

int main()
{
    World world;

    world.setElevation(10, 20, 150.5f);

    std::cout << world.getElevations()[10][20];
}