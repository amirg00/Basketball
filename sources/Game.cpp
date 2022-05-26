#include "Game.hpp"
using namespace b_ball;

b_ball::Game::Game(Team& indoor, Team& outdoor) : _indoor(indoor), _outdoor(outdoor), _indoor_points(0), _outdoor_points(0)
{}