#pragma once

#include "Player.hpp"

const int ASSASSIN_COUP_COST = 3;

namespace coup{

    class Assassin : public Player{

        public:
        Assassin(Game &game, std::string name);
        virtual void coup(Player& player);
    };



}