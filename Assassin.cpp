
#include "Assassin.hpp"

namespace coup
{

    Assassin::Assassin(Game &game, std::string name) : Player(game, name)
    {
        this->my_role = "Assassin";
        game.add_player(name);
    }

    void Assassin::coup(Player &player)
    {
    }

}