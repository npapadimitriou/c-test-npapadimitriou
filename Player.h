/*
 * Player.h
 *
 *  Created on: Jul 11, 2018
 *      Author: nicolas
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <string>

class Player
{
public:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Player(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Player() { };

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health = value;
    }
};

#endif /* PLAYER_H_ */
