#include "ScavTrap.hpp"


int main() 
{
    std::cout << "--- Creating ScavTrap ---" << std::endl;
    ScavTrap scav("Sgt-Scav");

    std::cout << "\n--- Testing Actions ---" << std::endl;
    scav.attack("Target-A");
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "\n--- Testing Inheritance/Damage ---" << std::endl;
    scav.takeDamage(150); // died
    scav.attack("Target-B"); // fail (0 HP)

    std::cout << "\n--- Destruction ---" << std::endl;
    return 0;
}