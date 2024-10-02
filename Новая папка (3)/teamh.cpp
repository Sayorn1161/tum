#include "Team.h"

void Team::addUnit(const Unit& unit) {
    units_.push_back(unit);
}

Unit& Team::getUnit(int index) {
    return units_.at(index);
}

int Team::getSize() const {
    return units_.size();
}
