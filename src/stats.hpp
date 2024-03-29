#include <string>
#include <fstream>
#include <vector>
#include "statsSecondary.hpp"

class Stats
{
private:
    std::string name;
    int lvl;
    Params parameters;
    Abilities abilities;
    std::vector<Proficiency> profs;

public:
    // Constructors
    Stats();
    Stats(std::string name, int lvl, Params parameters, Abilities abilities, std::vector<Proficiency> profs);
    Stats(std::string name, Params parameters);
    Stats(Stats &c);

    // Methods
    void loadStats(std::string name);
    void updateStats();
    std::string getInfo();

    // Setters
    void setMaxHP(int hp);
    void setCurrentHP(int hp);
    void setAC(int ac);
    void setSpeed(int speed);
    void setName(std::string name);
    void setLVL(int LVL);
    void setProficiencyBonus(int pb);

    // Getters
    int getMaxHP();
    int getCurrentHP();
    int getAC();
    int getSpeed();
    int getLVL();
    int getPB();
    std::string getName();
};