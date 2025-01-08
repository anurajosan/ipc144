/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* numRef)
{
	int num;
	do{
		scanf("%d", &num);
		if(num <= 0){
			printf("ERROR: Enter a positive value: ");
		}
	}while(num <= 0);
	if(numRef != NULL){
		*numRef = num;
	}
	return num;
}


// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* numRef){
	double num;
	do{
		scanf("%lf", &num);
		if(num <= 0){
			printf("ERROR: Enter a positive value: ");
		}
	}while(num <= 0);
	if(numRef != NULL){
		*numRef = num;
	}
	return num;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int numOfProds){
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", numOfProds);
	printf("NOTE: A 'serving' is %dg\n", NUMOFGRAMS);
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int prodSeqNum){
	struct CatFoodInfo catFoodInfo;
	
	printf("\nCat Food Product #%d\n", prodSeqNum);
	printf("--------------------\n");
	printf("SKU           : ");
	catFoodInfo.m_sku = getIntPositive(NULL);
	printf("PRICE         : $");
	getDoublePositive(&catFoodInfo.m_prodPrice);
	printf("WEIGHT (LBS)  : ");
	catFoodInfo.m_weight = getDoublePositive(NULL);
	printf("CALORIES/SERV.: ");
	getIntPositive(&catFoodInfo.m_calories);

	return catFoodInfo;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku, int calories, double* weight, double* prodPrice){
	printf("%07d %10.2lf %10.1lf %8d\n",sku, *prodPrice, *weight,  calories);
}

// 7. Logic entry point
void start(){
	struct CatFoodInfo catFoodInfo[MAXPRODS];
	openingMessage(MAXPRODS);
	for(int i = 0; i < MAXPRODS; i++){
		catFoodInfo[i] = getCatFoodInfo(i+1);
	}

	printf("\n");
	displayCatFoodHeader();
	for(int i = 0; i < MAXPRODS; i++){
		displayCatFoodData(catFoodInfo[i].m_sku, catFoodInfo[i].m_calories, &catFoodInfo[i].m_weight, &catFoodInfo[i].m_prodPrice);
	}
}