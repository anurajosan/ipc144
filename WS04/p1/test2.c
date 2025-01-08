#include<stdio.h>
int main()
{ 
    int studentM = 0,i=0,grade;
    /*
    do
    {
        printf("Enter marks of student: ");
        scanf("%d",&studentM);
        if(studentM >=0 && studentM <=100)
        {
            i++;
        }    
        printf("\n");
        
    } while (i==0);
    */
   while (i==0)
   {
      printf("Enter students marks :");
      scanf("%d",&studentM);
      if (studentM >=0 && studentM <=100)
      {
        i++;
      }
      else 
      {
        printf("Oops.. wromg input try again\n");
      }
      
   }
   

    grade = studentM >50 ? 'A' : 'F'; 
    printf("%c",grade);
}