#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
    : ClapTrap("default")
{
    Hit_Points = 100;
    Energy_Points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    Name = name;
    Hit_Points = 100;
    Energy_Points = 50;
    Attack_damage = 20;
    std::cout << "ScavTrap constructor with parameter called" << std::endl;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap destructed called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& original)
{
    if(this != &original)
    {
        std::cout << "ScavTrap Copy assignment operator called" << std::endl;
        ClapTrap::operator =(original);
    }
    else 
        std::cout << "assignment of the same object" << std::endl;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (Energy_Points == 0 || Hit_Points == 0)
    {
        std::cout << "ScavTrap " << Name << " can't attack: energy or hit points are not enough" << std::endl;
        return;
    }
    Energy_Points--;
    std::cout << "ScavTrap " << Name << " attacks " << target << ", causing  " << Attack_damage << " points of damage!" << std::endl;
}