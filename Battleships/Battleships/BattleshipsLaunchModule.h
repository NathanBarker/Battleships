#pragma once

#include <map>
#include <string>

struct PreInitErrorContext
{
    std::map<int, std::string> GErrorContextMap =
    {
        {0, "Board Drawing System Error: Unable to properly draw the game board on the screen"},
        {1, "Input Validation System Error: Validation of user input for coordinates or commands failed"},
        {2, "Ship Placement System Error: Error in placing ships on the game board."},
        {3, "Ship Collision System Error: Ships overlapping or colliding with each other"},
        {4, "Invalid Move System Error: Invalid move or action detected during gameplay"},
        {5, "Hit Detection System Error: Failure in accurately detecting hits or misses on the opponent's board"},
        {6, "Turn Management System Error: Incorrect handling or synchronization of turns between players"},
        {7, "Score Tracking System Error: Inaccurate tracking or calculation of scores during the game"},
        {8, "AI Behavior System Error: Errors in the behavior or decision-making process of AI opponents"},
        {9, "Graphics Rendering System Error: Rendering or display issues affecting game visuals"},
    };
};

class BattleshipsLaunchModule
{
public:
    BattleshipsLaunchModule();

    bool GetRequestedExit()
    {
        return GIsRequestingExit;
    }

    void SetRequestedExit(bool hasRequestedExit)
    {
        GIsRequestingExit = hasRequestedExit;
    }

    static void CleanUp();
private:
    bool GIsRequestingExit;
};
