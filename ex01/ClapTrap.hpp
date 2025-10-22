#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    protected:
        std::string Name;
        int Hit_Points;
        int Energy_Points;
        int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string a);
        ~ClapTrap();
        ClapTrap(const ClapTrap& original);
        ClapTrap& operator = (const ClapTrap& original);

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void attack(const std::string& target);//attak_demege loos
};
#endif
