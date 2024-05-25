#include<stdio.h>
int main()
{
    int num;
        const double TAX = 0.13;
    double s_price,m_price,l_price;
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    // scanf("%lf",&s_price);
    s_price = 17.96;
    printf("Enter the price for a MEDIUM shirt: $");
    // scanf("%lf",&m_price);
    m_price = 26.96;
    printf("Enter the price for a LARGE shirt: $");
    // scanf("%lf",&l_price);
    l_price = 35.97;
    printf("\nShirt Store Price List\n");
    printf("========================\n");
    printf("SMALL  : $%2.2lf\n",s_price);
    printf("MEDIUM : $%2.2lf\n",m_price);
    printf("LARGE  : $%2.2lf\n\n",l_price);
    printf("Patty's shirt size is 'S'\n");
    printf("Number of shirts Patty is buying: ");
    // scanf("%d",&num);
    num = 8;
    
    double subtotal=s_price * num * 100;
    int m_tax = (int)((subtotal * TAX) + 0.5);
    double total = subtotal + m_tax;


    printf("Patty's shopping cart...");
    printf("Contains : %d shirts\n",num);
    printf("Sub-total: $%-3.4lf\n",subtotal/100);
    printf("taxes    : $ %-3.4lf\n",(double)m_tax/100);
    printf("total    : $%-3.4lf",total/100);



    return 0;
}