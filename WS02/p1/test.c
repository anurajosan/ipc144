#include<stdio.h>


double roundNumber(double num, int pos){
    double rounded = 0.0;
    double tmp = num;
    for(int i = 0;i < pos;i++){
        tmp *= 10.0;
    }
    printf("%3.5lf", tmp);

    return rounded;
}




int main(){
    double tmp = roundNumber(18.56789, 2);
    return 0;
}