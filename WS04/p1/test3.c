#include<stdio.h>
int main()
{
    int marks,i,total,max=-1,min=101;
    for(i=1;i<=5;i++)
    {
        do
        {
            printf("Enter student marks %d: ",i);
            scanf("%d",&marks);
            if ((marks < 0 || marks > 100 ))
            {
                printf("Oops wrong input try again\n");    
            }   
            
        } while(marks < 0 || marks > 100 );
       printf("Student %d marks : %d\n",i,marks);
       total += marks;
       if(marks > max)
        {
            max = marks;
        }
        if(marks < min)
        {
            min = marks;
        }
    }
    printf("Average = %d\n",marks);
    printf("Max = %d\n",max);
    printf("min = %d\n",min);
}