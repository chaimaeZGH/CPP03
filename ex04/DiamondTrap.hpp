#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& original);
        DiamondTrap& operator=(const DiamondTrap& original);
        ~DiamondTrap();
        void attack(const std::string& target);
        void whoAmI();
};

#endif