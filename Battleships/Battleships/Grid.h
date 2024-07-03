#pragma once

#include <vector>
#include "Cell.h"

class Grid
{
public:
    Grid() = default;


    std::vector<Cell*>& GetGridMatrix() const
    {
        return *GridMatrix;
    }

    void SetGridMatrix(std::vector<Cell*>* NewGridMatrix)
    {
        GridMatrix = NewGridMatrix;
    }

    void ChangeCellByIndex(const int Row, const int Column, const char NewCellChar) const
    {
        GridMatrix[Row][Column]->SetCellChar(NewCellChar);
    }

private:
    std::vector<Cell*>* GridMatrix = nullptr;
};
