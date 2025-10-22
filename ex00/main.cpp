#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("mall");
    ClapTrap b = a;
    a.attack("des");
    b.beRepaired(3);
    a.takeDamage(10);
    b.takeDamage(15);
    a.attack("ll");
}