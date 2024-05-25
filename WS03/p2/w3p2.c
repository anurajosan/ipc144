/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
int main(void)
{
    char p1Type,p2Type,p3Type,p1C,p2C,p3C;
    int p1Weight,p2Weight,p3Weight;
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf("%c",&p1Type);
    printf("Bag weight (g): ");
    scanf("%d",&p1Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&p1C);
    printf("\n\n");
    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&p2Type);
    printf("Bag weight (g): ");
    scanf("%d",&p2Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&p2C);
    printf("\n\n");
    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&p3Type);
    printf("Bag weight (g): ");
    scanf("%d",&p3Weight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&p3C);
    printf("\n\n");
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |  %d   |  %d    |  %d   | %d   |  %.3lf |  %d   |\n",(p1Type == 'L') || (p1Type == 'l'),p1Type == 'M' || p1Type == 'm',p1Type == 'R' || p1Type == 'r',p1Weight,p1Weight*0.00220462,p1C == 'Y' || p1C == 'y');


 
 
    return 0;
}