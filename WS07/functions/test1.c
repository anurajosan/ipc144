#include<stdio.h>
#define MIN 0.00
#define MAX 100.00
double getdouble()
{
    double value;
    do
    {
        printf("Enter a value:");
        scanf("%lf",&value);
        if (value < MIN || value > MAX)
        {
            printf("ERROR... try again\n");
        }
        else
        {
        return value ;
        }
    }while (value < MIN || value > MAX);
    
}
double getData(int marks)
{
    double total = getdouble() + marks;
    double avg = total / 2;
    return avg ;


}
int main()
{
    int marks = 50;
    getData(marks);
    
}