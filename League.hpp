#pragma once
#include "vector"
#include <ctime>
#include "Team.hpp"

using std::vector;

#define LEAGUE_TEAMS_AMOUNT 20


class League {
private:
    vector<Team> _teams;
    static string getRandTeam();
    static double floatRand(int min, int max);
public:
    League() = default;
    Leauge(vector<Team>& teams);
};

