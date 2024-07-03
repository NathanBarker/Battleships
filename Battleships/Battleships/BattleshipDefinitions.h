#pragma once

constexpr char ShipBody = '=';
constexpr char Hit = '#';
constexpr char MissHit = '*';
constexpr char EmptySpace = ' ';
constexpr char Invalid = '/';

constexpr int RowsToGenerate = 10;
constexpr int ColumnsToGenerate = 10;

constexpr int playerIndex = 0;
constexpr int computerIndex = 1;

class BattleshipDefinitions
{
public:
    static char GetShipBodyDefinition()
    {
        return ShipBody;
    }

    static char GetHitDefinition()
    {
        return Hit;
    }

    static char GetMissHitDefinition()
    {
        return MissHit;
    }

    static char GetEmptySpaceDefinition()
    {
        return EmptySpace;
    }

    static char GetInvalidDefinition()
    {
        return Invalid;
    }
};
