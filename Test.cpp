#include "doctest.h"
#include "Team.hpp"
#include "Schedule.hpp"
using namespace b_ball;
using namespace std;

TEST_CASE(""){
    League league{};
    for (const &Team t : league.getTeams()){
        cout << t.name() << endl;
    }
}