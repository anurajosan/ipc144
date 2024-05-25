/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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
    const double TAX = 0.13;
    double s_price,m_price,l_price;
    int s_num,m_num,l_num;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf",&s_price);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf",&m_price);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf",&l_price);
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%2.2lf\n",s_price);
    printf("MEDIUM : $%2.2lf\n",m_price);
    printf("LARGE  : $%2.2lf\n\n",l_price);
    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%2d",&s_num);
    printf("\n");
    printf("Tommy's shirt size is '%c'\n",tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%2d",&l_num);
    printf("\n");
    printf("Sally's shirt size is '%c'\n",salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%2d",&m_num);
    printf("\n");


    double s_subtotal= s_price * s_num * 100;
    int s_tax= (int)((s_subtotal * TAX) +0.5);
    double s_total= s_subtotal + s_tax;

    double m_subtotal= m_price * m_num * 100;
    int m_tax= (int)((m_subtotal * TAX) +0.5);
    double m_total= m_subtotal + m_tax;

    double l_subtotal= l_price * l_num * 100;
    int l_tax= (int)((l_subtotal * TAX) +0.5);
    double l_total= l_subtotal + l_tax;

    double main_subtotal= (s_subtotal + m_subtotal + l_subtotal);
    int main_tax= (int)(s_tax + m_tax + l_tax);
    double main_total= (s_total + m_total +l_total);
   
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",patSize,s_price,s_num,s_subtotal/100,(double)s_tax/100,s_total/100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",salSize,m_price,m_num,m_subtotal/100,(double)m_tax/100,m_total/100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",tomSize,l_price,l_num,l_subtotal/100,(double)l_tax/100,l_total/100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n",main_subtotal/100,(double)main_tax/100,main_total/100);


    int Toonies_amt= 2;
    double num_Toonies = main_subtotal / Toonies_amt;
    double rem_Tonnies = (int) (main_subtotal) % (Toonies_amt * 100);
    
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n",main_subtotal/100);
    printf("Toonies %4d %9.4lf\n",(int)num_Toonies/100,(double)rem_Tonnies/100);

    int Loonies_amt= 1;
    double num_Loonies = rem_Tonnies / Loonies_amt;
    double rem_Lonnies = (int) (rem_Tonnies) % (Loonies_amt * 100);

    printf("Loonies %4d %9.4lf\n",(int)num_Loonies/100,(double)rem_Lonnies/100);

    double Quarters_amt= 25;
    double num_Quarters = (rem_Lonnies*100) / Quarters_amt;
    double rem_Quarters = (int) (rem_Lonnies) % (int)(Quarters_amt) ;

    printf("Quarters %3d %9.4lf\n",(int)num_Quarters/100,(double)rem_Quarters/100);

    double Dimes_amt= 10;
    double num_Dimes = rem_Quarters / Dimes_amt;
    double rem_Dimes = (int) (rem_Quarters) % (int)(Dimes_amt) ;

    printf("Dimes %6d %9.4lf\n",(int)num_Dimes/100,(double)rem_Dimes/100);
    
    double Nickels_amt= 5;
    double num_Nickels = rem_Dimes / Nickels_amt;
    double rem_Nickels = (int) (rem_Dimes) % (int)(Nickels_amt) ;

    printf("Nickels %4d %9.4lf\n",(int)num_Nickels/100,(double)rem_Nickels/100);

    double Pennies_amt= 1 ;
    double num_Pennies = (rem_Nickels*1000) / Pennies_amt;
    double rem_Pennies = (int) (rem_Nickels) % (int)(Pennies_amt) ;

    printf("Pennies %4d %9.4lf\n\n",(int)num_Pennies/1000,(double)rem_Pennies/1000);

    int avg_num = s_num + m_num + l_num;
    double avg = (int)((main_subtotal*100) / avg_num + 0.5);

    printf("Average cost/shirt: $%.4lf\n\n",avg/10000);
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n",main_total/100);
     
    num_Toonies = main_total / Toonies_amt;
    rem_Tonnies = (int) (main_total) % (Toonies_amt * 100);
    
    printf("Toonies %4d %9.4lf\n",(int)num_Toonies/100,(double)rem_Tonnies/100);

    num_Loonies = rem_Tonnies / Loonies_amt;
    rem_Lonnies = (int) (rem_Tonnies) % (Loonies_amt * 100);

    printf("Loonies %4d %9.4lf\n",(int)num_Loonies/100,(double)rem_Lonnies/100);

    num_Quarters = (rem_Lonnies*100) / Quarters_amt;
    rem_Quarters = (int) (rem_Lonnies) % (int)(Quarters_amt) ;

    printf("Quarters %3d %9.4lf\n",(int)num_Quarters/100,(double)rem_Quarters/100);

    num_Dimes = rem_Quarters / Dimes_amt;
    rem_Dimes = (int) (rem_Quarters) % (int)(Dimes_amt) ;

    printf("Dimes %6d %9.4lf\n",(int)num_Dimes/100,(double)rem_Dimes/100);
    
    num_Nickels = (rem_Dimes*100) / Nickels_amt;
    rem_Nickels = (int) (rem_Dimes) % (int)(Nickels_amt) ;

    printf("Nickels %4d %9.4lf\n",(int)num_Nickels/100,(double)rem_Nickels/100);

    num_Pennies = (rem_Nickels*1000) / Pennies_amt;
    rem_Pennies = (int) (rem_Nickels) % (int)(Pennies_amt) ;

    printf("Pennies %4d %9.4lf\n\n",(int)num_Pennies/1000,(double)rem_Pennies/1000);

    avg_num = s_num + m_num + l_num;
    avg = (int)((main_total*100) / avg_num + 0.5);
    
    printf("Average cost/shirt: $%.4lf\n\n",avg/10000);



    return 0;
}