#pragma once
#include "string"
#include "stdexcept"

using std::string; using std::invalid_argument;

#define SKILL_MAX 1
#define SKILL_MIN 0

namespace b_ball{
    class Team {
    private:
        string _name;
        double _skill_rate;
    public:
        Team(string& name, double skill_rate);
        string name() const;
        double skill() const;
    };
}