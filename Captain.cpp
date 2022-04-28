
#include "Captain.hpp"

namespace coup
{
    Captain::Captain(Game &game, std::string name) : Player(game, name)
    {
        this->my_role = "Captain";
        this->vic = Player();
        game.add_player(name);
    }

    bool Captain::before_my_turn()
    {
        return true;
    }

    void Captain::steal(Player &player)
    {
    }

    void Captain::block(Player &captain)
    {
    }

}
