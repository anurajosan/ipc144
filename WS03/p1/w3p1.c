/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
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
    const double testValue = 330.99;
    int p1=111,p2=222,p3=111;
    char p1Tax='Y',p2Tax='N',p3Tax='N';
    double p1Price=111.4900,p2Price=222.9900,p3Price=334.4900,avg;
    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n",p1);
    printf("  Taxed: %c\n",p1Tax);
    printf("  Price: $%.4lf\n\n",p1Price);
    printf("Product-2 (ID:%d)\n",p2);
    printf("  Taxed: %c\n",p2Tax);
    printf("  Price: $%.4lf\n\n",p2Price);
    printf("Product-3 (ID:%d)\n",p3);
    printf("  Taxed: %c\n",p3Tax);
    printf("  Price: $%.4lf\n\n",p3Price);
  
    avg =  (p1Price + p2Price + p3Price)/3;

    printf("The average of all prices is: $%.4lf\n",avg);
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n",p1Tax == 'Y'|| p1Tax == 'y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n",( p2Tax == 'N' && p3Tax == 'N') ||(p2Tax == 'n' && p3Tax == 'n' ));
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n\n",testValue,!(p3Price > testValue));
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n",(p3Price > p1Price) && (p3Price > p2Price));   
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? -> %d (price difference: $%.2lf)\n\n",p1Price >= (p3Price-p2Price),p3Price-p2Price);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n",p2Price>=avg);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n",(p1 == p2) && (p1== p3) );
    printf("8. Based on product ID, product 2 is unique -> %d\n\n",(p2 != p1) && (p2 != p3) );
    printf("8. Based on product ID, product 3 is unique -> %d\n\n",(p3 == p2) && (p3 == p1) );
  // denis DENIS

    return 0;
}