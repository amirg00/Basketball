#include "Schedule.hpp"
#include "iostream"

using namespace b_ball;
using std::cout; using std::endl;


b_ball::Schedule::Schedule(League &league) {
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
