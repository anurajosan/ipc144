/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
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
#define MIN_INCOME 500
#define MAX_INCOME 400000
#define MIN_LIST 1
#define MAX_LIST 10
#define MIN_COST 100

int main()
{
    char finance[10];
    int list,i,priority[10],totaltime,forecast,prioritylist,numYears,numMonth,financePrint = 0;
    double income, totalcost = 0,priority1=0,priority2=0,priority3=0;
    double cost[10];
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
    printf("                      $%11.2lf\n",totalcost);
    do
    {
        printf("\n");
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d",&forecast);
        printf("\n");
        if(forecast != 1 && forecast != 2 && forecast != 0)
        {
            printf("\n");
            printf("ERROR: Invalid menu selection.\n");
        }
        else if(forecast == 1)
        {
            printf("\n");
            printf("====================================================\n");
            printf("Filter:   ALL items\n");
            printf("Amount:   $%.2lf\n",totalcost);
            totaltime = (int)(totalcost / income + 0.5);
            printf("Forecast: %d years, %d months\n",totaltime/12,totaltime%12);
            for ( i = 0; i < list ; i++)
            {
                if(finance[i] =='y')
                {
                    financePrint = 1;
                }
            }
                if (financePrint == 1)                
                    {
                        printf("NOTE: Financing options are available on some items.\n");
                        printf("      You can likely reduce the estimated months.\n");
                    }
                    printf("====================================================\n\n");
          
        }
        else if(forecast == 2)
        {
            printf("What priority do you wnat to filter by? [1-3]: ");
            scanf("%d",&prioritylist);
            printf("\n");
            printf("====================================================\n");
            printf("Filter:   by priority (%d)\n",prioritylist);
            if (prioritylist == 1)
            {
                for(i = 0; i < list; i++)
                {
                    if(priority[i] == prioritylist)
                    {
                        priority1 += cost[i];
                        if(finance[i] == 'y')
                        { 
                            financePrint = 1 ;
                        }

                    }
                }
                printf("Amount:   $%.2lf\n",priority1);
                totaltime = (int)((priority1 / income));
                numYears = totaltime / 12;
                numMonth = totaltime % 12;
                if((int)priority1 % (int)income)
                {
                    numMonth++;
                }
                printf("Forecast: %d years, %d months\n",numYears,numMonth);
                if(financePrint)
                {
                    printf("NOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                    financePrint = 0;
                }
                printf("====================================================\n\n");
            }
            else if(prioritylist == 2)
            {
                for(i = 0; i < list; i++)
                {
                    if(priority[i] == prioritylist)
                    {
                        priority2 += cost[i];
                        if(finance[i] == 'y')
                        {
                            financePrint = 1;
                        }
                    }
                    
                }
                printf("Amount:   $%.2lf\n",priority2);
                totaltime = (int)((priority2 / income));
                numYears = totaltime / 12;
                numMonth = totaltime % 12;
                if((int)priority2 % (int)income)
                {
                    numMonth++;
                }
                printf("Forecast: %d years, %d months\n", numYears,numMonth);
                if (financePrint)
                {
                    printf("NOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                    financePrint = 0 ;
                }
                printf("====================================================\n\n");
            } 
            else if(prioritylist == 3)
            {
                for(i = 0; i < list; i++)
                {
                    if(priority[i] == prioritylist)
                    {
                        priority3 += cost[i];
                        if(finance[i] == 'y')
                        {
                            financePrint = 1;
                        }
                    }
                    
                }
                printf("Amount:   $%.2lf\n",priority3);
                totaltime = (int)((priority3 / income));
                numYears = totaltime / 12;
                numMonth = totaltime % 12;
                if((int)priority3 % (int)income)
                {
                    numMonth++;
                }
                printf("Forecast: %d years, %d months\n", numYears,numMonth);
               if(financePrint)
                {
                    printf("NOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                }
                printf("====================================================\n\n");
            }
           
        }
       
    } while (forecast != 0);
    printf("Best of luck in all your future endeavours!\n");
    
    return 0;
}
