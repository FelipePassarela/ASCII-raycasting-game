/**
 * @file objective.hpp
 * @author Felipe Passarela (felipepassarela11@gmail.com)
 * @brief Objective class header file.
 * @version 0.1
 * @date 2024-02-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef OBJECTIVE_HPP
#define OBJECTIVE_HPP

#include <stdlib.h>

/**
 * @class Objective
 * @brief Represents the objective in the game.
 * 
 * The Objective class encapsulates the functionality of the objective in the game. It is responsible for 
 * handling the objective's position.
 */
class Objective
{
private:
    double x = 0;
    double y = 0;
    char tile = 'X';

public:
    Objective() {}

    Objective(double x, double y) : x(x), y(y) {}

    ~Objective() {}

    /* <------------------------ Getters ------------------------> */

    double getX() const
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

    char getTile() const
    {
        return tile;
    }

    /* <------------------------ Setters ------------------------> */

    void setX(double newX)
    {
        x = newX;
    }

    void setY(double newY)
    {
        y = newY;
    }

    void setTile(char newTile)
    {
        tile = newTile;
    }

    /* <------------------------ Methods ------------------------> */

    /**
     * Randomizes the position of the objective within the game map.
     * 
     * @param mapWidth The width of the game map.
     * @param mapHeight The height of the game map.
     */
    void randomizePosition(int mapWidth, int mapHeight)
    {
        x = 1 + rand() % (mapWidth - 2);
        y = 1 + rand() % (mapHeight - 2);
    }
};

#endif // OBJECTIVE_HPP