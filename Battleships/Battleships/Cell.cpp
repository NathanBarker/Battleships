#include "Cell.h"

Cell::Cell(const char DefaultedCellChar, const int InitRowIndex, const int InitColumnIndex)
{
    CellChar = DefaultedCellChar;
    RowIndex = InitRowIndex;
    ColumnIndex = InitColumnIndex;
}
