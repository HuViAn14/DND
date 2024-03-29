#include "statsSecondary.hpp"

using namespace std;

//constructor
Abilities::Abilities(int STR, int DEX, int CONST, int INT, int WIS, int CHR)
{
    this->STR = STR;
    this->DEX = DEX;
    this->CONST = CONST;
    this->INT = INT;
    this->WIS = WIS;
    this->CHR = CHR;
}

// returns string of all abilities
string Abilities::getAbilities()
{
    string result;
    result += "\tSTR - " + to_string(STR) + "\n";
    result += "\tDEX - " + to_string(DEX) + "\n";
    result += "\tCONST - " + to_string(CONST) + "\n";
    result += "\tINT - " + to_string(INT) + "\n";
    result += "\tWIS - " + to_string(WIS) + "\n";
    result += "\tCHR - " + to_string(CHR) + "\n";
    return result;
}

// Getters
int Abilities::getSTR()
{
    return STR;
}
int Abilities::getDEX()
{
    return DEX;
}
int Abilities::getCONST()
{
    return CONST;
}
int Abilities::getINT()
{
    return INT;
}
int Abilities::getWIS()
{
    return WIS;
}
int Abilities::getCHR()
{
    return CHR;
}

// Setters
void Abilities::setSTR(int STR)
{
    this->STR = STR;
}
void Abilities::setDEX(int DEX)
{
    this->DEX = DEX;
}
void Abilities::setCONST(int CONST)
{
    this->CONST = CONST;
}
void Abilities::setINT(int INT)
{
    this->INT = INT;
}
void Abilities::setWIS(int WIS)
{
    this->WIS = WIS;
}
void Abilities::setCHR(int CHR)
{
    this->CHR = CHR;
}

//Constructors for class Params
Params::Params()
{
    maxHP = 0;
    curHP = 0;
    ac = 10;
    pb = 0;
    speed = 6;
    initiative = 0;
}
Params::Params(int maxHP, int ac, int speed)
{
    this->maxHP = maxHP;
    this->curHP = maxHP;
    this->ac = ac;
    this->pb = 0;
    this->speed = speed;
    this->initiative = 0;
}
Params::Params(int maxHP, int currentHP, int ac, int speed)
{
    this->maxHP = maxHP;
    this->curHP = currentHP;
    this->ac = ac;
    this->pb = 0;
    this->speed = speed;
    this->initiative = 0;
}
Params::Params(int maxHP, int ac, int speed, int initiative)
{
    this->maxHP = maxHP;
    this->curHP = maxHP;
    this->ac = ac;
    this->pb = 0;
    this->speed = speed;
    this->initiative = initiative;
}
Params::Params(int maxHP, int currentHP, int ac, int speed, int initiative)
{
    this->maxHP = maxHP;
    this->curHP = currentHP;
    this->ac = ac;
    this->pb = 0;
    this->speed = speed;
    this->initiative = initiative;
}
Params::Params(int maxHP, int currentHP, int ac, int pd, int speed)
{
    this->maxHP = maxHP;
    this->curHP = currentHP;
    this->ac = ac;
    this->pb = pd;
    this->speed = speed;
    this->initiative = 0;
}
Params::Params(int maxHP, int currentHP, int ac, int pd, int speed, int initiative)
{
    this->maxHP = maxHP;
    this->curHP = currentHP;
    this->ac = ac;
    this->pb = pd;
    this->speed = speed;
    this->initiative = initiative;
}

// Getters
int Params::getMaxHP()
{
    return maxHP;
}
int Params::getCurrentHP()
{
    return curHP;
}
int Params::getAC()
{
    return ac;
}
int Params::getPB()
{
    return pb;
}
int Params::getSpeed()
{
    return speed;
}
int Params::getInitiative()
{
    return initiative;
}

// Setters
void Params::setMaxHP(int maxHP)
{
    this->maxHP = maxHP;
}
void Params::setCurrentHP(int currentHP)
{
    this->curHP = currentHP;
}
void Params::setAC(int ac)
{
    this->ac = ac;
}
void Params::setPB(int pb)
{
    this->pb = pb;
}
void Params::setSpeed(int speed)
{
    this->speed = speed;
}
void Params::setInitiative(int initiative)
{
    this->initiative - initiative;
}