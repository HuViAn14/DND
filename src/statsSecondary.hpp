#include <string>

enum Proficiency
{
    Athletics,
    Acrobatics,
    SleightOfHand,
    Stealth,
    Arcana,
    History,
    Investigation,
    Nature,
    Religion,
    AnimalHandling,
    Insight,
    Medicine,
    Perception,
    Survival,
    Deception,
    Intimidation,
    Performance,
    Persuasion,
};

class Abilities
{
private:
    int STR;
    int DEX;
    int CONST;
    int INT;
    int WIS;
    int CHR;

public:
    // Constructor
    Abilities(int STR, int DEX, int CONST, int INT, int WIS, int CHR);
    
    // Getters
    int getSTR();
    int getDEX();
    int getCONST();
    int getINT();
    int getWIS();
    int getCHR();

    // Setters
    void setSTR(int STR);
    void setDEX(int DEX);
    void setCONST(int CONST);
    void setINT(int INT);
    void setWIS(int WIS);
    void setCHR(int CHR);

    // Methods
    // get string of abilities
    std::string getAbilities();
};

class Params
{
private:
    int maxHP;
    int curHP;
    int ac;
    int pb;
    int speed;
    int initiative;

public:
    // Constructors
    Params();
    Params(int maxHP, int ac, int speed);
    Params(int maxHP, int currentHP, int ac, int speed);
    Params(int maxHP, int ac, int speed, int initiative);
    Params(int maxHP, int currentHP, int ac, int speed, int initiative);
    Params(int maxHP, int currentHP, int ac, int pd, int speed);
    Params(int maxHP, int currentHP, int ac, int pd, int speed, int initiative);

    // Getters
    int getMaxHP();
    int getCurrentHP();
    int getAC();
    int getPB();
    int getSpeed();
    int getInitiative();

    // Setters
    void setMaxHP(int maxHP);
    void setCurrentHP(int currentHP);
    void setAC(int ac);
    void setPB(int pb);
    void setSpeed(int speed);
    void setInitiative(int initiative);
};