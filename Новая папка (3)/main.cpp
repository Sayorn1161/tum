#include <iostream>
#include "Unit.h"
#include "Team.h"

int main() {
    Team team;

    Unit unit1(10, 20, 100);
    Unit unit2(15, 25, 80);

    team.addUnit(unit1);
    team.addUnit(unit2);

    for (int i = 0; i < team.getSize(); ++i) {
        Unit& unit = team.getUnit(i);
        std::cout << "Юніт " << i + 1 << ": X = " << unit.getX() << ", Y = " << unit.getY()
                  << ", Health = " << unit.getHealth() << std::endl;
    }

    return 0;
}
