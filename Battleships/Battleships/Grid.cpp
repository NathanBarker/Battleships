#include "Grid.h"
#include "BattleshipDefinitions.h"


Grid::Grid()
{
    Cells = new std::vector<Cell*>;
    for (int i = 0; i < 100; i++)
    {
        Cells->emplace_back(new Cell(BattleshipDefinitions::GetShipBodyDefinition()));
    }
}
