/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P2)
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
    int positionPlayed[MAX];
    

};
struct Gameinfo
{
    int moves;
    int pathLength;
    int bomb[MAX];
    int treasure[MAX];
    int nextMove;
};

int main(void)
{
    int i,j;
    int flag = 1;
    struct Playerinfo player = {0};
    struct Gameinfo game = {0};
    printf("================================\n");
    printf("         Treasure Hunt!\n");
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
    } while (game.moves < player.numLives || game.moves > game.pathLength * 0.75);
    printf("\n");
    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",game.pathLength);
    for(i = 0; i < game.pathLength; i+= 5)
    {
        printf("   Positions [%2d-%2d]: ",i+1,i+5);
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
        printf("   Positions [%2d-%2d]: ",i+1,i+5);
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
    do
    {
        if(player.numLives == 0 || game.moves == 0)
        {
            flag = 0;
            printf("\n");
            printf("No more LIVES remaining!\n");
        }
    for(i = 1; i <= game.pathLength; i++)
    {
        if(game.nextMove == 0){
            i = game.pathLength;
        }
        else if(game.nextMove == i)
        {
    
            printf("  %c", player.playerName);
            i=game.pathLength;
        }
        else
        {
            printf(" ");
        }
    }
	printf("\n");
	printf("  ");

        for(i = 0; i < game.pathLength; i++)
        {
            switch (player.positionPlayed[i])
            {
            case 0:
                printf("-");
                break;
            case 1:
                printf(".");
                break;
            case 2:
               printf("&");
               break;
            case 3:
                printf("$");
                break;
            default:
                printf("!");
                break;
            }
        }
        printf("\n");
	printf("  ");
        for (i = 1; i <= game.pathLength; i++)
        {
            
            if (i % 10 == 0)
            {
                printf("%d",i / 10);
            }
            else{
                printf("|");
            }
        }
        printf("\n");
	printf("  ");
        for (i = 1; i <= game.pathLength; i++)
        {
            printf("%d", i % 10);
        }
        printf("\n");
        printf("+---------------------------------------------------+\n");
        printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n",player.numLives,player.numTreasure,game.moves);
        printf("+---------------------------------------------------+\n");
        if(flag != 0){
            do
            {
                printf("Next Move [1-20]: ");
                scanf("%d",&game.nextMove);
                if (game.nextMove < 1 || game.nextMove > game.pathLength)
                {
                    printf("  Out of Range!!!\n");
                }
              
            } while (game.nextMove < 1 || game.nextMove > game.pathLength);
            printf("\n");
            if (game.treasure[game.nextMove - 1] == 1 && game.bomb[game.nextMove - 1] == 1)
            {
                printf("===============> [&] !!! BOOOOOM !!! [&]\n");
                printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n");
                player.numLives--;
                player.numTreasure++;
                player.positionPlayed[game.nextMove-1] = 2;
                game.moves--;
            }
            else if (game.treasure[game.nextMove - 1] == 1)
            {
                printf("===============> [$] $$$ Found Treasure! $$$ [$]\n");
                player.numTreasure++;
                player.positionPlayed[game.nextMove-1] = 3;
                game.moves--;
            }
            else if (game.bomb[game.nextMove - 1] == 1)
            {
                printf("===============> [!] !!! BOOOOOM !!! [!]\n");
                player.numLives--;
                player.positionPlayed[game.nextMove-1] = 4;
                game.moves--;
            }
            else if (player.positionPlayed[game.nextMove -1] == 1){
                printf("===============> Dope! You've been here before!\n");
            }
            else 
            {
                printf("===============> [.] ...Nothing found here... [.]\n");
                player.positionPlayed[game.nextMove-1] = 1;
                game.moves--;
            }
        }
	
        printf("\n");
	
    } while (flag !=0 );

    printf("\n");
    printf("##################\n");
    printf("#   Game over!   #\n");
    printf("##################\n");
    printf("You should play again and try to beat your score!");
    
    return 0;
}
