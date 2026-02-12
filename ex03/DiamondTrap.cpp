#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),FragTrap(name),ScavTrap(name)
{
    this->name = name;//this-> in this case is for seperat between the member of the class and the parametr that will be takeing by the constructor
    Hit_Points = FragTrap::Hit_Points;
    Energy_Points = ScavTrap::Energy_Points;
    Attack_damage = FragTrap::Attack_damage;
    
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
    std::cout << "Hit Points: " << Hit_Points << std::endl;
    std::cout << "Energy Points: " << Energy_Points << std::endl;
    std::cout << "Attack Damage: " << Attack_damage << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap as " << this->name << " ClapTrap name is " << ClapTrap::name << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack (target);
}

DiamondTrap::DiamondTrap() : 
    ClapTrap("default_clap_name"),
    FragTrap(),
    ScavTrap()
{
    name = "default";
    Hit_Points = FragTrap::Hit_Points;
    Energy_Points = ScavTrap::Energy_Points;
    Attack_damage = FragTrap::Attack_damage;
    
    std::cout << "DiamondTrap default constructor called" << std::endl;
    std::cout << "Hit Points: " << Hit_Points << std::endl;
    std::cout << "Energy Points: " << Energy_Points << std::endl;
    std::cout << "Attack Damage: " << Attack_damage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original)
    : ClapTrap(original) , FragTrap(original),  ScavTrap(original)
{
    this->name = original.name;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
    if(this != &original)
    {
        ScavTrap::operator=(original);
        this->name = original.name;
    }
    else
        std::cout << "YOU assignment the same Object" << std::endl;
    return *this;
}

