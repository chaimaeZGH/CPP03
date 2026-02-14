#include "FragTrap.hpp"

int main()
{
    std::cout << "--- Creating FragTrap ---" << std::endl;
    FragTrap frag("FRG-99"); // constructor parent class called first, then child class

    frag.attack("Target");     // Inherited from ClapTrap
    frag.beRepaired(10);       // Inherited from ClapTrap
    frag.highFivesGuys();      // FragTrap specific

    FragTrap fragCopy(frag);   // Testing Copy Constructor

    std::cout << "\n--- Destruction ---" << std::endl;
    return 0; // chiled class then parent destructor
}