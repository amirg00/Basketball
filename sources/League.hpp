#pragma once
#include "vector"
#include <ctime>
#include "cmath"
#include "Team.hpp"

using std::vector;

#define LEAGUE_TEAMS_AMOUNT 20

namespace b_ball{
    class League {
    private:
        vector<Team> _teams;
        Team getRandTeam();
        static double floatRand(int min, int max);
    public:
        League();
        explicit League(vector<Team>& teams);
        vector<Team>& getTeams();
    };
}
