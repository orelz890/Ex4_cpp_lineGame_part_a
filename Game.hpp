#pragma once

#include <string>
#include <string.h>
#include <vector>
#include <map>


namespace coup
{

    class Game
    {
    private:
        std::vector<std::string> active_players;
        std::map<std::string, std::string> action;
        std::map<std::string, std::string> kill_list;
        int player_turn;
        bool game_is_on;

    public:
        Game();
        void add_player(std::string &name);
        void kill_player(std::string &name);
        void set_next_player_turn();
        static void set_player_action(std::string &do_action, std::string &to);
        static std::string is_alive(std::string &name);
        static std::string get_player_action(std::string &name);
        void clear_action(std::string &name);
        void check_nickname(std::string &name);
        // void Game::undo_kill(std::string name);
        static std::string turn();
        static std::string winner();
        std::vector<std::string> players();
    };

}
