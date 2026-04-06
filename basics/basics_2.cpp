#include <iostream>

namespace Player{
    int health = 100;
    bool isDead = false;
    int level = 6;
    float damage_output = 33.23;

    
}

namespace Enemy{
    int health = 100;
    bool isDead = true;
    int level = 5;
    float damage_output = 29.75;
}

void taking_comperison(float player, float enemy){
    if (player > enemy){
        std::cout << "Player heeft grootere dmg output!\n";
    }
    else{
        std::cout << "Enemy heeft een grootere dmg output dan speler !\n";
    }
}

void level_check(int player_lvl, int enemy_lvl){
    std:: cout << ((player_lvl > enemy_lvl) ? "Player heeft hoogere level!\n" : "Enemy heeft een grootere level!\n");
}

void living_status(bool player, bool enemy){
    if (!player && !enemy){
        std::cout << "Beide zijn leefend!\n";
    }
   else if (!player || !enemy){
    std::cout << "Een van de entiteiten is leefend!\n";
   }
   else{
    std:: cout << "Beide entiteien zijn dood!\n";
   }
      
}

int main() {
    float player_dmg_out = Player::damage_output;
    float enemy_dmg_out = Enemy::damage_output;

    int player_lvl = Player::level;
    int enemy_lvl = Enemy::level;

    bool player_status = Player::isDead;
    bool enemy_status = Enemy::isDead;

    bool test {true};

    taking_comperison(player_dmg_out, enemy_dmg_out);
    level_check(player_lvl, enemy_lvl);

    living_status(player_status, enemy_status);

    if (test) test = false;

    std::cout << test;


}