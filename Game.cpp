#include "Game.hpp"

Game::Game(Team indoor, Team outdoor) : _indoor(std::move(indoor)), _outdoor(std::move(outdoor)), _indoor_points(0), _outdoor_points(0)
{}