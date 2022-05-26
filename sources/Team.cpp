#include "Team.hpp"


b_ball::Team::Team(string &name, double skill_rate) : _name(name), _skill_rate(skill_rate)
{
    if (skill_rate < SKILL_MIN || skill_rate > SKILL_MAX){
        throw invalid_argument("ERR: skill is a real number defined in following scope: [0, 1].");
    }
}

// Returns team's name
string b_ball::Team::name() const {
    return _name;
}

// Returns team's skill
double b_ball::Team::skill() const {
    return _skill_rate;
}
