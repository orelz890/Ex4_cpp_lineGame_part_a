
#include "Game.hpp"


namespace coup
{

    Game::Game()
    {
        this->player_turn = 0;
        this->game_is_on = false;
    }

    void Game::add_player(std::string &name)
    {
    }

    void Game::kill_player(std::string &name)
    {
    }

    void Game::set_next_player_turn()
    {
    }

    void Game::set_player_action(std::string &do_action, std::string &to)
    {
    }

    void Game::clear_action(std::string &name)
    {
    }

    std::string Game::get_player_action(std::string &name){
        return "";
    }

    std::string Game::is_alive(std::string &name){
        return "";
    }

    std::string Game::turn()
    {
        return "";
    }

    std::string Game::winner()
    {
        return "";
    }

    std::vector<std::string> Game::players()
    {
        return this->active_players;
    }

    

}
