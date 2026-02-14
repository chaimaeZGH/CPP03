#include "DiamondTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "--- Creating DiamondTrap ---" << std::endl;
    DiamondTrap dt("Hero");

    dt.whoAmI(); // Must show "Hero" and "Hero_clap_name"

    dt.attack("Enemy"); // Must use ScavTrap's attack style
    dt.guardGate();     // Special function from ScavTrap
    dt.highFivesGuys(); // Special function from FragTrap

    dt.takeDamage(30);

    return 0;
}