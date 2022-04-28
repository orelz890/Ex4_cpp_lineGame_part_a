
#include "Player.hpp"

namespace coup
{
    Player::Player(){
        this->name = "non";
        this->money = 0;
    }

    Player::Player(Game &game, std::string &name)
    {
        this->my_game = game;
        this->name = name;
        this->money = 0;
        std::vector<std::string> game_players = game.players();
        for(auto &player : game_players){
            if (strcmp(player.c_str() , name.c_str()) == 0)
            {
                throw "This nickname already in use!\n";
            }
        }
        
        
    }

    bool Player::before_my_turn()
    {
        return true;
    }

    std::string Player::get_player_name()
    {
        return this->name;
    }

    int Player:: coins()
    {
        return 0;
    }

    void Player::set_coins(const int c)
    {
    }

    void Player::set_last_action(std::string &act, std::string &name)
    {
    }

    std::string Player::role()
    {
        return "";
    }

    void Player::income()
    {
    }

    void Player::foreign_aid()
    {
    }

    void Player::coup(Player& player)
    {
    }

}
