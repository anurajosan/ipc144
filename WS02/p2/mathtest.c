#include<stdio.h>
int main(void)
{
    double amt= 18.568;
    int pbread = .4199;
    int amtInt = amt * 1000;// Reason for multiplying is to preserve all decimal numbers
    printf("%d",amt);
	int pBreadInt = pbread * 1000;
    printf("%d\n",pBreadInt);
    int numBread = amtInt / pBreadInt;
    printf("%d\n",numBread);
	int rem = amtInt % pBreadInt;
	printf("Preferred Method: You can Buy=%d and change=%lf\n", numBread, rem/1000.0);


}