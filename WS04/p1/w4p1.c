/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : Anuraj Singh Osan
Student ID#: 165546235
Email      : asosan@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    char loopType=0;
    int num, i=0;
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    do 
    {

        if (loopType == 'D' && (num >= 3 && num <= 20))
        {
            i=0;
            do 
            {
                printf("%c",loopType);
                i++;
            }while(i<num);
        
        }
        else if(loopType == 'W' && (num >= 3 && num <= 20) )
        {
            i=0;
            while (i<num)
            {
                printf("%c",loopType);
                i++;
            }
            
        }
        else if(loopType == 'F' && (num >= 3 && num <= 20))
        {
            for(i=0;i<num;i++)
            {
                printf("%c",loopType);
            }         
        }
        else if((loopType != 'D' || loopType != 'W' || loopType != 'F') && (num >= 3 && num <= 20))
        {
            printf("ERROR: Invalid entered value(s)!");
        }
        else if ((loopType == 'D' || loopType == 'W' || loopType == 'F') && (num < 3 || num > 20))
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!");
        }
        printf("\n");
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d",&loopType,&num);

    }while (!(loopType == 'Q' && num == 0));
    printf("\n\n");
    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");
    return 0;
}