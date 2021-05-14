#ifndef _OBLOCK_H
#define _OBLOCK_H
#include <vector>
#include <string>
#include "block.h"
class Coordinate;

class OBlock: public Block {
    // only difference between this and its parent class Block is that JBlock should draw and designate cells
    // based on IBlack's unique shape... so we must initialize the vector of cells based on IBlock's shape
    public:
        char shape = 'O';
        OBlock(int levelCreatedIn, int howHeavy);
        void printLine1() override;
        void printLine2() override;
};

#endif




