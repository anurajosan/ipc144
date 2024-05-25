#include<stdio.h>
int main(void)
{
    int marks=0;
    int mid_marks=0;
    printf("Enter studnets marks:");
    scanf("%d",&marks);
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks");
    }
    else
    {
        if(marks < 50)
        {
            printf("F");
        }
        else if(marks >=50 && marks < 65)
        {
            printf("C");
             printf("Enter mid term marks ");
            scanf("%d",&mid_marks);
            if (mid_marks <0 || mid_marks > 100)
            {
                printf("Invalid marks");
            }
            else
            {
                if (mid_marks< 50)
                {
                    printf("F");
                }
                else 
                {
                    printf("c");
                }
            }
        }
        else if(marks >= 65 && marks <85 )
        {
            printf("B");

        }
        else if (marks > 85 )
        {
            printf("A");
        }

    }
    
    return 0;
}