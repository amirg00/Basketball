#pragma once
#include "League.hpp"
#include "Game.hpp"
/*
    BRIEF: in the season we have 2 rounds.
           For each round, A is an indoor group and will play with any other group.
           In second round, it would be the same, except that A will be an outdoor group
           this time.

    GOAL: Need to match the groups, such that in the end of the round,
          each group had a game with every other group.
 */

class Schedule {
private:
    vector<Game> _first_round, _second_round;
public:
    explicit Schedule(League& league);
};
