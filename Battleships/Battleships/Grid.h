#pragma once

#include <vector>
#include "Cell.h"

class Grid
{
public:
    Grid();

    std::vector<Cell*>* GetGridCells() const
    {
        return Cells;
    }

    void ChangeCellByIndex(const int Index, const char NewCellChar) const
    {
        std::vector<Cell*>& CellsVectorReference = *Cells;
        Cell* IndexedCell = CellsVectorReference[Index];
        IndexedCell->SetCellChar(NewCellChar);
    }

private:

    // Need to rebuild that a grid contains 10 rows and 10 columns
    std::vector<Cell*>* Cells = {};
};
