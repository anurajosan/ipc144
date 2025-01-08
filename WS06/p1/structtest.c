#include<stdio.h>
struct Car
{
    char brand[22];
    char model[10];
    int driven;
    double price;
};

int main()
{
    struct Car c1;
    printf("Enter Car name : ");
    scanf(" %20[^\n]",c1.brand);
    printf("Enter Car Model : ");
    scanf(" %20[^\n]",c1.model);
    printf("Enter how much the car has driven (KM): ");
    scanf("%d",&c1.driven);
    printf("Enter Price of Car : ");
    scanf("%lf",&c1.price);

    printf("Car Brand : %s\n",c1.brand);
    printf("Car Model : %s\n",c1.model);
    printf("How much did car was driven : %d\n",c1.driven);
    printf("Car price : %.2lf\n",c1.price);

    return 0;
}