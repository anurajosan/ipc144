#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double getDouble(double , double );
double getData(int );
void display(double );

double getDouble(double min, double max) {

	double val;

	do {
		printf("Enter Double Value: ");
		scanf("%lf", &val);

		if (val < min || val > max) {
			printf("Invalid Double, Enter Again!!!\n");
		}

	} while (val < min || val > max);

	return val;
}
double getData(int nstd) {

	int i;
	double sum = 0;
	
	for (i = 0; i < nstd; i++) {
		sum += getDouble(0, 100);
	}

	return sum / nstd;
}
void display(double data) {
	printf("Average is %.2lf\n", data);
}
int main(){

	double avg = getData(3);
	display(avg);

	return 0;
}