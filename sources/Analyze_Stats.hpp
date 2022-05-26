#pragma once
#include "Schedule.hpp"
#include "Game.hpp"
#include "Team.hpp"

namespace b_ball{
    class Analyze_Stats {
    private:
        vector<vector<Game>> _first_cycle, _second_cycle;
    public:
        Analyze_Stats(const vector<vector<Game>>& first_cycle, const vector<vector<Game>>& second_cycle);
//        vector<Team>& lead_teams() const;
//        size_t longest_wins_row() const;
//        size_t longest_loses_row() const;
//        size_t lead_points_teams const;
    };
}