#pragma once

#include "BattleshipDefinitions.h"

class Cell
{
public:

    Cell(char DefaultedCellChar);

    char GetCellChar() const
    {
        return CellChar;
    }

    void SetCellChar(const char NewChar)
    {
        CellChar = NewChar;
    }

private:
    char CellChar = 0;
};
