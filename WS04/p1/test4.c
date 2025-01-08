#include<stdio.h>
int main(void)
{
    int num,i=0;
    char aplh;
    do
    {
        printf("Enter a number :");
        scanf("%c%d%*c",&aplh,&num);
        if(!((aplh == 'a' || aplh == 'e' || aplh == 'i' || aplh == 'o' || aplh == 'u') && (num >=5 && num<=10)))
        {
            if (!(aplh == 'a' || aplh == 'e' || aplh == 'i' || aplh == 'o' || aplh == 'u'))
            {
                printf("Not a vowel,Input again ...\n");
            }
            else if(!(num >=5 && num<=10))
            {
                printf("Not valid number,Input agian...\n");
            } 
        }
        else if(((aplh == 'a' || aplh == 'e' || aplh == 'i' || aplh == 'o' || aplh == 'u') && (num >=5 && num<=10)))
        {
            printf("Valid vowel and number ");
            i++;
        }

    } while (i==0);
    
}