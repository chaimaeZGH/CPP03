#include "FragTrap.hpp"

FragTrap::FragTrap() 
    : ClapTrap("default")
{
    Hit_Points = 100;
    Energy_Points = 50;
    Attack_damage = 20;
    std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    Name = std::move(name);
    Hit_Points = 100;
    Energy_Points = 50;
    Attack_damage = 20;
    std::cout << "FragTrap constructor with parameter called" << std::endl;
}

FragTrap::~FragTrap()
{
        std::cout << "FragTrap destracted called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& original)
{
    if(this != &original)
    {
        std::cout << "FragTrap Copy assignment operator called" << std::endl;
        ClapTrap::operator =(original);
    }
    else 
        std::cout << "assignment of the same object" << std::endl;
    return *this;
}

void highFivesGuys(void)
{
    std::cout << "high-fives reques" << std::endl;
}