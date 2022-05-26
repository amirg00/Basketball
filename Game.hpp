#pragma once
#include "Team.hpp"

class Game {
private:
    Team _indoor, _outdoor;
    size_t _indoor_points, _outdoor_points;
public:
    Game(Team& indoor, Team& outdoor);
};
