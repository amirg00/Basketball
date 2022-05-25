#include "Team.hpp"


Team::Team(string &name, double skill_rate) : _name(name), _skill_rate(skill_rate)
{
    if (skill_rate < SKILL_MIN || skill_rate > SKILL_MAX){
        throw invalid_argument("ERR: skill is a real number defined in following scope: [0, 1].");
    }
}