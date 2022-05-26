#include "League.hpp"
using namespace b_ball;

League::League() {
    srand(time(nullptr)); /* Make a random generator - FOR UNIQUE NAMES*/
    for (int i = 0; i < LEAGUE_TEAMS_AMOUNT; ++i) {
        Team randTeam = getRandTeam();
        _teams.push_back(randTeam);
    }
}

League::League(vector<Team>& teams) {
    if (teams.size() != LEAGUE_TEAMS_AMOUNT) {
        throw invalid_argument("ERR: teams amount for season is 20!");
    }
    // Push to stack the given teams
    for(const Team& t : teams){
        _teams.push_back(t);
    }
}

// Return current teams vector
vector<Team>& League::getTeams(){
    return _teams;
}

// Function creates a random float number in range [min, max].
// Returns the random number.
double League::floatRand(int min, int max)
{
    double randFloat = (double)rand() / RAND_MAX;
    return min + randFloat * (max - min);
}

Team League::getRandTeam() {
    string charsSet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string randTeamName;
    int randLen = 1 + (rand() % 5);
    for (unsigned long j = 0; j < randLen; ++j) {
        unsigned long randPos = (unsigned long)(rand()) % charsSet.length();
        randTeamName += charsSet[(unsigned long)randPos];
    }
    double randSkill = round(floatRand(0, 1) * 100.0) / 100.0;
    Team randTeam{randTeamName, randSkill};
    return randTeam;
}

