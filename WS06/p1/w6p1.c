#include<stdio.h>
#define MIN_INCOME 500
#define MAX_INCOME 400000
#define MIN_LIST 1
#define MAX_LIST 10
#define MIN_COST 100

int main()
{
    // make array
    char finance[3];
    int list,i,priority[3];
    double income,totalcost=0;
    double cost[3];
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");
    do
    {
        printf("Enter your monthly NET income: $");
        scanf("%lf",&income);
        if(income < MIN_INCOME)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
        }
        else if(income > MAX_INCOME)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }
        else 
        {
            printf("\n");
        }
    } while(income < MIN_INCOME || income > MAX_INCOME);
    do
    {
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d",&list);
        if (list < MIN_LIST || list > MAX_LIST)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }
       
    } while(list < MIN_LIST || list > MAX_LIST);
    
    for (i = 0; i < list; i++)
    {
        printf("\n");
        printf("Item-%d Details:\n",i+1);
        do 
        {
            printf("   Item cost: $");
            scanf(" %lf",&cost[i]);
            if(cost[i] < MIN_COST)
            {
                printf("      ERROR: Cost must be at least $100.00\n");
            }
            
        }while(cost[i] < MIN_COST);
        do
        {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d",&priority[i]);
            if (priority[i] < 1 || priority[i] > 3)
            {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
            
        } while(priority[i] < 1 || priority[i] > 3);
        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c",&finance[i]);
            if (finance[i] != 'y' && finance[i] != 'n')
            {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while(finance[i] != 'y' && finance[i] != 'n');
        
    } 
    printf("\n");
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for(i = 0; i < list ; i++)
    {
        printf("%3d  %5d    %5c    %11.2lf\n",i+1,priority[i],finance[i],cost[i]);
        totalcost += cost[i];
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n",totalcost);
    printf("Best of luck in all your future endeavours!\n");
    
    return 0;
}
