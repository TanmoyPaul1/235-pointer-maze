#include <iostream>
#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) 
{
    if (moves.length() == 0)
    {
        return false;
    }
    
    else if (moves[0] == 'N')
    {
        if (start->north == nullptr)
        {
            return false;
        }        
        
        start = start->north;
        std::cout << "North" << std::endl;
        if (start->whatsHere != Item::NOTHING)
        {
            if (start->whatsHere == Item::SPELLBOOK)
            {
                std::cout << "FOUND SPELLBOOK" << std::endl;
                const std::string moves1 = moves.substr(1) + 'X';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::POTION)
            {
                std::cout << "FOUND POTION" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Y';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::WAND)
            {
                std::cout << "FOUND WAND" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Z';
                return isPathToFreedom(start, moves1);
            }
        }
        else
        {
            const std::string moves1 = moves.substr(1);
            return isPathToFreedom(start, moves1);
        }
    }

    else if (moves[0] == 'S')
    {
        if (start->south == nullptr)
        {
            return false;
        }

        start = start->south;
        std::cout << "South" << std::endl;
        if (start->whatsHere != Item::NOTHING)
        {
            if (start->whatsHere == Item::SPELLBOOK)
            {
                std::cout << "FOUND SPELLBOOK" << std::endl;
                const std::string moves1 = moves.substr(1) + 'X';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::POTION)
            {
                std::cout << "FOUND POTION" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Y';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::WAND)
            {
                std::cout << "FOUND WAND" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Z';
                return isPathToFreedom(start, moves1);
            }
        }
        else
        {
            const std::string moves1 = moves.substr(1);
            return isPathToFreedom(start, moves1);
        }
    }

    else if (moves[0] == 'E')
    {
        if (start->east == nullptr)
        {
            return false;
        }

        start = start->east;
        std::cout << "East" << std::endl;
        if (start->whatsHere != Item::NOTHING)
        {
            if (start->whatsHere == Item::SPELLBOOK)
            {
                std::cout << "FOUND SPELLBOOK" << std::endl;
                const std::string moves1 = moves.substr(1) + 'X';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::POTION)
            {
                std::cout << "FOUND POTION" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Y';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::WAND)
            {
                std::cout << "FOUND WAND" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Z';
                return isPathToFreedom(start, moves1);
            }
        }
        else
        {
            const std::string moves1 = moves.substr(1);
            return isPathToFreedom(start, moves1);
        }
    }

    else if (moves.at(0) == 'W')
    {
        if (start->west == nullptr)
        {
            return false;
        }

        start = start->west;
        std::cout << "West" << std::endl;
        if (start->whatsHere != Item::NOTHING)
        {
            if (start->whatsHere == Item::SPELLBOOK)
            {
                std::cout << "FOUND SPELLBOOK" << std::endl;
                const std::string moves1 = moves.substr(1) + 'X';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::POTION)
            {
                std::cout << "FOUND POTION" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Y';
                return isPathToFreedom(start, moves1);
            }
            else if (start->whatsHere == Item::WAND)
            {
                std::cout << "FOUND WAND" << std::endl;
                const std::string moves1 = moves.substr(1) + 'Z';
                return isPathToFreedom(start, moves1);
            }
        }
        else
        {
            const std::string moves1 = moves.substr(1);
            return isPathToFreedom(start, moves1);
        }
    }

    else if(moves[0] == 'X' || moves[0] == 'Y' || moves[0] == 'Z')
    {
        bool spellbook, potion, wand = false;
        for (int i = 0; i < moves.length(); i++)
        {
            if (moves[i] == 'X')
            {
                spellbook = true;
            }
            else if (moves[i] == 'Y')
            {
                potion = true;
            }
            else if (moves[i] == 'Z')
            {
                wand = true;
            }
        }
        if (spellbook == true && potion == true && wand == true)
        {
            return true;
        }
    }
    return false;
}
