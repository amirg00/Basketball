#pragma once
#include "League.hpp"
#include "Game.hpp"
/*
    BRIEF: in the season we have 2 cycles.
           For each cycle, A is an indoor group and will play with any other group.
           In second cycle, it would be the same, except that A will be an outdoor group
           this time.

    GOAL: Need to match the groups, such that in the end of the cycle,
          each group had a game with every other group.
 */
namespace b_ball{
    class Schedule {
    private:
        vector<vector<Game>> _first_cycle, _second_cycle;
        bool _end_season;                                       /*Flag: indicates if this is the end of the season.*/
    public:
        explicit Schedule(League& league);
        void run_season();
        bool end_season();
    };
}