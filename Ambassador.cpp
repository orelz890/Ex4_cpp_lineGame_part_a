
#include "Ambassador.hpp"

namespace coup
{

    Ambassador::Ambassador(Game &game, std::string name) : Player(game, name) 
    {
        this->my_role = "Ambassador";
        game.add_player(name);
    }

    void Ambassador::transfer(Player& from, Player& to)
    {
    }

    void Ambassador::block(Player &captain)
    {
    }

}