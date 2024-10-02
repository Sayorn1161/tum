#pragma once
#include <vector>
#include "Unit.h"

class Team {
public:
    void addUnit(const Unit& unit);

    Unit& getUnit(int index);

    int getSize() const;

private:
    std::vector<Unit> units_;
};
