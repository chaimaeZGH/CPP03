#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
    Name = std::move(name);
    Hit_Points = 10;
    Energy_Points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap constructor with parameter called" << std::endl;
}

ClapTrap::ClapTrap()
{
    Name = "default";
    Hit_Points = 10;
    Energy_Points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " destracted called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& original)
{
    Name=original.Name;
    Hit_Points=original.Hit_Points;
    Energy_Points=original.Energy_Points;
    Attack_damage=original.Attack_damage;
    std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)//
{
    if (&original != this)
    {
        std::cout << "ClapTrap copy assignment operator called" << std::endl;
        this->Name=original.Name;
        this->Hit_Points=original.Hit_Points;
        this->Energy_Points=original.Energy_Points;
        this->Attack_damage=original.Attack_damage;
    }
    else
        std::cout << "assignment of the same object" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (Energy_Points == 0 || Hit_Points == 0)
    {
        std::cout << "ClapTrap " << Name << " can't attack energy or hit points are not enough" << std::endl;
        return;
    }
    Energy_Points--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing  " << Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)Hit_Points <= amount)
        Hit_Points = 0;
    else
        Hit_Points -= amount;
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage! " << "Hit points remaining: " << Hit_Points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_Points == 0 || Hit_Points == 0)
    {
        std::cout << "ClapTrap " << Name << " can't repair ther is no energy or hit points left!" << std::endl;
        return ;
    }
    Energy_Points--;
    Hit_Points+=amount;
        std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " hit points! Current hit points: " << Hit_Points << std::endl;
}
