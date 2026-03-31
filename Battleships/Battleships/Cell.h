#pragma once

#include "BattleshipDefinitions.h"

class Cell
{
public:

    Cell(char defaultedCellChar, int initRowIndex, int initColumnIndex);

    // Getters
    char GetCellChar() const
    {
        return CellChar;
    }

    int GetRowIndex() const
    {
        return RowIndex;
    }

    int GetColumnIndex() const
    {
        return ColumnIndex;
    }

    // Setters
    void SetCellChar(const char newChar)
    {
        CellChar = newChar;
    }

    void SetRowIndex(const int newRowIndex)
    {
        RowIndex = newRowIndex;
    }

    void SetColumnIndex(const int newColumnIndex)
    {
        ColumnIndex = newColumnIndex;
    }

private:
    char CellChar = 0;
    int RowIndex = -1;
    int ColumnIndex = -1;
};
