#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };

    struct pokemon squirtle;
    squirtle.hp=60;
    squirtle.speed=50;
    squirtle.attack=70;
    squirtle.tier='D';
    
    struct pokemon raichu;
    raichu.hp=squirtle.hp;
    raichu.speed=squirtle.speed;
    raichu.attack=squirtle.attack;
    raichu.tier=squirtle.tier;


    printf("The qualities of raichu are: %d\n%d\n%d\n%c",raichu.hp,raichu.speed,raichu.attack,raichu.tier);
    return 0;
}