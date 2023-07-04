#pragma once

#include <string>

class IPlayable 
{
public:
    IPlayable();
    virtual ~IPlayable() = default;
    
    IPlayable(const IPlayable&) = delete;

    IPlayable& operator=(const IPlayable&) = delete;

    IPlayable(IPlayable&&) = delete;

    IPlayable& operator=(IPlayable&&) = delete;
    
    // Aim
    virtual void Aim(const int& row, const int& column);

    // Shoot
    virtual void Shoot(const int& row, const int& column);

    // Place Ship
    virtual void PlaceShip(const int& row, const int& column, std::string& Ship);
};
