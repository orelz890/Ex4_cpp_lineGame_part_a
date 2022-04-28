
#include "Duke.hpp"

namespace coup
{

    Duke::Duke(Game &game, std::string name) : Player(game, name)
    {
        this->my_role = "Duke";
        game.add_player(name);
    }

    void Duke::tax()
    {
    }

    void Duke::block(Player &blocked_player)
    {
    }

}