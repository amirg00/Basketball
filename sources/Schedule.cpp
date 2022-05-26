#include "Schedule.hpp"
#include "iostream"

using namespace b_ball;
using std::cout; using std::endl;


b_ball::Schedule::Schedule(League &league) : _end_season(false) {
    size_t rounds = LEAGUE_TEAMS_AMOUNT - 1;
    vector<Team>& teams = league.getTeams();

    for (size_t distance = 1; distance <= rounds; distance++){
        cout << "Round "  << distance << endl;
        vector<Game> curr_round_first_cycle;
        vector<Game> curr_round_second_cycle;
        for (size_t i = 0; i < LEAGUE_TEAMS_AMOUNT/2; i++) {
            vector<Game> currRound;
            size_t j = LEAGUE_TEAMS_AMOUNT - i - 1;
            Game game_first_cycle{teams.at(i), teams.at(j)};
            Game game_second_cycle{teams.at(j), teams.at(i)};
            curr_round_first_cycle.push_back(game_first_cycle);
            curr_round_second_cycle.push_back(game_second_cycle);
            cout << "team " << teams[i].name() << " VS team " << teams[LEAGUE_TEAMS_AMOUNT - i - 1].name() << endl;
        }
        _first_cycle.push_back(curr_round_first_cycle);
        _second_cycle.push_back(curr_round_second_cycle);

        Team tmpTeam = teams[1];
        for (size_t i = 1; i < LEAGUE_TEAMS_AMOUNT - 1; ++i) {
              Team next = teams[i+1];
              teams[i+1] = tmpTeam;
              tmpTeam = next;
        }
        teams[1] = tmpTeam;
    }
}

// Method runs a whole new season, when a season
// has two cycles - in each, every team will play against any other team.
// After running this method, we will be able to show the points table,
// sorted by two parameters: win/loss relation and points difference.
void Schedule::run_season() {
    // Run first cycle
    for (vector<Game>& round : _first_cycle){
        for (Game& game : round){
             game.roll_game_result();
        }
    }

    // Run second cycle
    for (vector<Game>& round : _second_cycle){
        for (Game& game : round){
            game.roll_game_result();
        }
    }
    _end_season = true;
}

bool Schedule::end_season() const{
    return _end_season;
}

// Prints the table points in the end of the season.
void Schedule::print_points_table() const {

}
