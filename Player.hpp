
#include "Game.hpp"
#pragma once

const int MUST_COUP_AMOUNT = 10;
const int LAST_ACTION_VALS = 2;
const int FOREGIN_AID_AMOUNT = 2;
const int TRANSFER_AMOUNT = 1;
const int TAX_AMOUNT = 3;
const int COUP_COST = 7;

namespace coup
{

    class Player
    {

    protected:
        Game my_game;
        std::string name;
        std::string my_role;
        int money;

    public:
        std::string last_action[LAST_ACTION_VALS];
        Player();
        Player(Game &game, std::string &name);

        virtual bool before_my_turn();
        std::string get_player_name();
        static int coins();
        void set_coins(const int c);
        void set_last_action(std::string &act, std::string &name);
        static std::string role();
        void income();
        void foreign_aid();
        virtual void coup(Player& player);
    };

}
