#pragma once
#include <vector>
#include "blocks.h"

struct GameMap
{
    int w = 0;
    int h = 0;

    std::vector<Block> mapData;

    void create(int w, int h);

    Block &getBlockUnsafe(int w, int h);

    Block *getBlockSafe(int w, int h);
};
