#pragma once
#include "Team.hpp"

namespace b_ball{
    class Game {
    private:
        Team _indoor, _outdoor;
        size_t _indoor_points, _outdoor_points;
    public:
        Game(Team& indoor, Team& outdoor);
    };
}