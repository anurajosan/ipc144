/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
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
int main()
{
    double num;
        const double TAX = 0.13;
        const char patSize = 'S';
    double s_price,m_price,l_price;
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf",&s_price);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf",&m_price);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf",&l_price);
    printf("\nShirt Store Price List\n");
    printf("========================\n");
    printf("SMALL  : $%2.2lf\n",s_price);
    printf("MEDIUM : $%2.2lf\n",m_price);
    printf("LARGE  : $%2.2lf\n\n",l_price);
    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&num);
    printf("\n");

    double subtotal = s_price * num * 100;
    int m_tax = (int)((subtotal * TAX) + 0.5);
    double total = subtotal + m_tax;     

    printf("Patty's shopping cart...");
    printf("\nContains : %d shirts\n",num);
    printf("Sub-total: $%-3.4lf\n",subtotal/100);
    printf("taxes    : $ %-3.4lf\n",(double)m_tax/100);
    printf("total    : $%-3.4lf",total/100);



    return 0;
}
