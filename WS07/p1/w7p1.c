/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
Full Name  : Anuraj Singh Osan 
Student ID#: 165546235
Email      : asosan@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/
#include<stdio.h>
#define MAX 70
#define MIN 10

struct Playerinfo
{
    int numLives;
    char playerName;
    int numTreasure;
    int position[MAX];

};
struct Gameinfo
{
    int moves;
    int pathLength;
    int bomb[MAX];
    int treasure[MAX];
};

int main(void)
{
    int i,j;
    struct Playerinfo player;
    struct Gameinfo game;
    printf("================================\n");
    printf("         Treasure Hunt!         \n");
    printf("================================\n\n");
    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c",&player.playerName);
    do
    {
        printf("Set the number of lives: ");
        scanf("%d",&player.numLives);
        if (player.numLives < 1 || player.numLives > 10)
        {
            printf("     Must be between 1 and 10!\n");
        }
        else
        printf("Player configuration set-up is complete\n\n");
    } while (player.numLives < 1 || player.numLives > 10);
    printf("GAME Configuration\n");
    printf("------------------\n");
    do
    {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d",&game.pathLength);
        if (game.pathLength%5!=0 || (game.pathLength < MIN || game.pathLength > MAX))
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
    } while (game.pathLength%5!=0 || (game.pathLength < MIN || game.pathLength > MAX));
    do
    {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d",&game.moves);
        if (game.moves < player.numLives || game.moves > game.pathLength * 75 / 100)
        {
            printf("    Value must be between %d and %d\n",player.numLives,game.pathLength * 75 / 100); 
        }    
        else
        printf("\n");
    } while (game.moves < player.numLives || game.moves > game.pathLength * 0.75);
    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",game.pathLength);
    for(i = 0; i < game.pathLength; i+= 5)
    {
        printf("   Positions [%2d- %2d]: ",i+1,i+5);
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&game.bomb[i+j]);
        }
    }
    printf("BOMB placement set\n\n");
    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",game.pathLength);
    for(i = 0; i < game.pathLength; i+= 5)
    {
        printf("   Positions [%2d- %2d]: ",i+1,i+5);
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&game.treasure[i+j]);
        }
        
    }
    printf("TREASURE placement set\n\n");
    printf("GAME configuration set-up is complete...\n\n");
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");
    printf("Player:\n");
    printf("   Symbol     : %c\n",player.playerName);
    printf("   Lives      : %d\n",player.numLives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n\n");
    printf("Game:\n");
    printf("   Path Length: %d\n",game.pathLength);
    printf("   Bombs      : ");
    for (j = 0; j < game.pathLength; j++)
    {
        printf("%d",game.bomb[j]);
    }
    printf("\n");
    printf("   Treasure   : ");
    for (j = 0; j < game.pathLength; j++)
    {
        printf("%d",game.treasure[j]);
    }
    printf("\n\n");
    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");

    return 0;
}

