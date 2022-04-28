
#include "Contessa.hpp"


namespace coup{

    
    Contessa::Contessa(Game &game, std::string name):Player(game, name){
        this->my_role  = "Contessa"; 
        game.add_player(name);
    }
    
    void Contessa::block(Player& player){
    }





}
