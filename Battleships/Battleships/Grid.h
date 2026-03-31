#pragma once

#include <vector>
#include "Cell.h"

#define  CellList std::vector<Cell*>

class Grid
{
public:

    Grid();
    
    std::vector<Cell*>& GetGridMatrix()
    {
        return GridMatrix;
    }

    void SetGridMatrix(const std::vector<Cell*>& NewGridMatrix)
    {
        GridMatrix = NewGridMatrix;
    }

    void ChangeCellByIndex(const int Row, const int Column, const char NewCellChar) const
    {
        GridMatrix[Row][Column].SetCellChar(NewCellChar);
    }

private:
    CellList GridMatrix = {};
};
