#pragma once
#include <ctime>
#include "Team.hpp"

#define BONUS_POINTS 10

namespace b_ball{
    class Game {
    private:
        Team _indoor, _outdoor;
        int _indoor_points, _outdoor_points;
    public:
        Game(Team& indoor, Team& outdoor);
        void roll_game_result();
        Team& winner();
    };
}