#include "doctest.h"
#include "iostream"
#include "sources/Team.hpp"
#include "sources/League.hpp"
#include "sources/Schedule.hpp"
using namespace b_ball;
using namespace std;

TEST_CASE("Random League Constructor"){
    cout << "***************** Teams Showcase *******************" << endl;
    /*Create League*/
    League league{};
    for (const auto& t : league.getTeams()){
        cout << "Team Name: "  << t.name() << ", Team's skill: " << t.skill() << endl;
    }
    cout << "****************************************************" << endl;

    /*Create Schedule for games*/
    Schedule schedule{league};


    cout << "====================================================" << endl;

}