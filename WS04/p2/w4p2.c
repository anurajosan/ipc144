

/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Anuraj Singh Osan
Student ID#: 165546235
Email      : asosan@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int numApples,numOranges,numPears,numTomatoes,numCabbages,pickApples,pickOranges,pickPears,pickTomatoes,pickCabbages,shopAgain;
    do
    {   
        printf("Grocery Shopping\n");
        printf("================\n");
        do
        {
            printf("How many APPLES do you need? : ");
            scanf("%d",&numApples);
            if(numApples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else 
            {
                printf("\n");
            }
        } while (numApples < 0);
        do
        {
            printf("How many ORANGES do you need? : ");
            scanf("%d",&numOranges);
            if(numOranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else 
            {
                printf("\n");
            }
        } while (numOranges < 0);
        do
        {
            printf("How many Pears do you need? : ");
            scanf("%d",&numPears);
            if(numPears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (numPears < 0);
        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf("%d",&numTomatoes);
            if(numTomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (numTomatoes < 0);
        do
        {
            printf("How many CANBBAGES do you need? : ");
            scanf("%d",&numCabbages);
            if(numCabbages < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else
            {
                printf("\n");
            }
        } while (numCabbages < 0);
        printf("\n");
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------");

        if (numApples != 0)
        {
            printf("\n\n");
            do
            {
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d",&pickApples);
                if (pickApples <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickApples > numApples)
                {
                    printf("You picked too many... only %d more APPLE(S) are needed.\n",numApples);
                }
                else if (pickApples <= numApples)
                {
                    numApples-=pickApples;
                    if (numApples == 0)
                    {
                        printf("Great, that's the apples done!\n\n");
                    }
                    else
                    {
                        printf("Looks like we still need some APPLES...\n");
                    }
                }
                
            } while (numApples !=0);
        }

        if(numOranges != 0)
        {
            printf("\n\n");
            do
            {
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d",&pickOranges);
                if (pickOranges <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickOranges > numOranges)
                {
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n",numOranges);
                }
                else if (pickOranges <= numOranges)
                {
                    numOranges-=pickOranges;
                    if (numOranges == 0)
                    {
                        printf("Great, that's the oranges done!\n\n");
                    }
                    else
                    {
                        printf("Looks like we still need some ORANGES...\n");
                    }
                }
                
            } while (numOranges !=0);
        }

        if(numPears != 0)
        {
            do
            {
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d",&pickPears);
                if (pickPears <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickPears > numPears)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n",numPears);
                }
                else if (pickPears <= numPears)
                {
                    numPears-=pickPears;
                    if (numPears == 0)
                    {
                        printf("Great, that's the pears done!\n\n");
                    }
                    else
                    {
                        printf("Looks like we still need some PEARS...\n");
                    }
                }
                
            } while (numPears !=0);
        }

        if(numTomatoes != 0)
        {
            do
            {
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d",&pickTomatoes);
                if (pickTomatoes <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickTomatoes > numTomatoes)
                {
                    printf("You picked too many... only %d more TOMATOE(S) are needed.\n",numTomatoes);
                }
                else if (pickTomatoes <= numTomatoes)
                {
                    numTomatoes-=pickTomatoes;
                    if (numTomatoes == 0)
                    {
                        printf("Great, that's the tomatoes done!\n\n");
                    }
                    else
                    {
                        printf("Looks like we still need some TOMATOES...\n");
                    }
                }
                
            } while (numTomatoes !=0);
        }

        if(numCabbages != 0)
        {
            do
            {
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d",&pickCabbages);
                if (pickCabbages <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickCabbages > numCabbages)
                {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n",numCabbages);
                }
                else if (pickCabbages <= numCabbages)
                {
                    numCabbages-=pickCabbages;
                    if (numCabbages == 0)
                    {
                        printf("Great, that's the cabbages done!\n\n");
                    }
                    else
                    {
                        printf("Looks like we still need some CABBAGES...\n");
                    }
                }
                
            } while (numCabbages !=0);
        }
    
    printf("All the items are picked!\n\n");
    printf("Do another shopping? (0=NO): ");
    scanf("%d",&shopAgain);
    printf("\n");
    }while(shopAgain !=0);
    printf("Your tasks are done for today - enjoy your free time!\n");
    
    return 0;
}