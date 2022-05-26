#include "Game.hpp"
using namespace b_ball;

b_ball::Game::Game(Team& indoor, Team& outdoor) : _indoor(indoor), _outdoor(outdoor), _indoor_points(0), _outdoor_points(0)
{}

void Game::roll_game_result() {
    srand(time(nullptr)); /*Make a random generator*/
    const int base_result_min = 50; const int base_result_max = 101;
    const int indoor_result_min = 55; const int indoor_result_max = 101;

    //First Roll: roll teams' points
    int outdoor_rand_points = base_result_min + (rand() % base_result_max);
    int indoor_rand_points = indoor_result_min + (rand() % indoor_result_max);
    _indoor_points = indoor_rand_points;
    _outdoor_points = outdoor_rand_points;

    // Second Roll: give 10 points bonus for the team
    // to have a bigger skill rate.
    if(_indoor.skill() > _outdoor.skill()){
        _indoor_points+=BONUS_POINTS;
        return;
    }
    _outdoor_points+=BONUS_POINTS;
}

// Returns the winner of the current game,
// if the matched has ended. Otherwise, it throws an exception.
Team& Game::winner() {
    if (_indoor_points == 0 || _outdoor_points == 0){
        throw invalid_argument("Game is still running!");
    }
    return _indoor_points > _outdoor_points ? _indoor : _outdoor;
}
