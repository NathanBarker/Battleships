#pragma once

constexpr char ShipBody = '=';
constexpr char Hit = '#';
constexpr char MissHit = '*';
constexpr char EmptySpace = ' ';
constexpr char Invalid = '/';

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