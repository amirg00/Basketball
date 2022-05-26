#include "doctest.h"
#include "iostream"
#include "Team.hpp"
//#include "League.hpp"
#include "Schedule.hpp"
using namespace b_ball;
using namespace std;

TEST_CASE("Random League Constructor"){
    League league{};
    for (auto t : league.getTeams()){
        cout << "Team Name: "  << t.name() << ", Team's skill: " << t.skill() << endl;
    }
}