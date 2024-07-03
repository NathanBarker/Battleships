#pragma once

#include <vector>
#include "Cell.h"

class Grid
{
public:
    Grid();

    std::vector<Cell*>* GridMatrix = nullptr;

    void ChangeCellByIndex(const int Row, const int Column, const char NewCellChar) const
    {
        GridMatrix[Row][Column]->SetCellChar(NewCellChar);
    }
};
