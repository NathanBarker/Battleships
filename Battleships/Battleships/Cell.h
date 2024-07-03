#pragma once

#include "BattleshipDefinitions.h"

class Cell
{
public:

    Cell(char DefaultedCellChar, int InitRowIndex, int InitColumnIndex);

    char GetCellChar() const
    {
        return CellChar;
    }

    void SetCellChar(const char NewChar)
    {
        CellChar = NewChar;
    }

    int RowIndex = -1;
    int ColumnIndex = -1;
    
private:
    char CellChar = 0;
};
