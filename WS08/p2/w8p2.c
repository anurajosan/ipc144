/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  : Anuraj Singh Osan
Student ID#: 165546235
Email      : asosan@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p2.h"

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
void displayCatFoodData(int sku, int calories, double* weight, double* prodPrice)
{
	printf("%07d %10.2lf %10.1lf %8d\n",sku, *prodPrice, *weight,  calories);
}

// 7. Logic entry point

// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* kilograms)
{
	double weight;
	weight = *pounds  / CONVERSION;
	if(kilograms != NULL)
	{
		*kilograms = weight;
	}
	return weight;
	
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* grams)
{
	int weight;
	double gramsDouble = 0;
	if (grams != NULL) {
		gramsDouble = *grams;
	}
	weight = convertLbsKg(pounds, &gramsDouble) * 1000;
	if(grams != NULL)
	{
		//grams = (int*)doubleGrams;
		*grams = gramsDouble;
		*grams = weight;

	}
	return weight;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* kilograms , int* grams)
{
	
	convertLbsKg(pounds, kilograms);
	convertLbsG(pounds, grams);

}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingGrams, const int totalGramsForProd, double* numOfServings)
{
	double result = (double)totalGramsForProd / servingGrams;
	if(numOfServings != NULL)
	{
		*numOfServings = result;
	}
	return result;
}


// 12. calculate: cost per serving
double calculateCostPerServing(const double* prodPrice, const double* totalServings, double* costPerServings)
{
	double result;
	result = *prodPrice / *totalServings;
	if(costPerServings != NULL)
	{
		*costPerServings = result;
	}
	return result;
}

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* prodPrice, const double* totalNumCalories, double* costPerCalories)
{
	double result;
	//result = *totalNumCalories / *prodPrice;
	result = *prodPrice / *totalNumCalories;
	if(costPerCalories != NULL)
	{
		*costPerCalories = result;
	}
	return result;
}


// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo catFoodData)
{
	struct ReportData reportDetails;
	reportDetails.sku = catFoodData.m_sku;
	reportDetails.prodPrice = catFoodData.m_prodPrice;
	reportDetails.calories = catFoodData.m_calories;
	reportDetails.weightLbs = catFoodData.m_weight;
	convertLbs(&reportDetails.weightLbs, &reportDetails.weightKg, &reportDetails.weightGrams);
	reportDetails.totalServings = calculateServings(NUMOFGRAMS, reportDetails.weightGrams, NULL);
	reportDetails.costPerServings = calculateCostPerServing(&reportDetails.prodPrice, &reportDetails.totalServings, NULL);
	double totalCal = reportDetails.calories * reportDetails.totalServings;
	calculateCostPerCal(&reportDetails.prodPrice, &totalCal, &reportDetails.costPerCalories);
	return reportDetails;
}


// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", NUMOFGRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData reportDetails, const int prodCheapest)
{
	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf %s\n",reportDetails.sku, reportDetails.prodPrice, reportDetails.weightLbs, reportDetails.weightKg, reportDetails.weightGrams, reportDetails.calories, reportDetails.totalServings, reportDetails.costPerServings, reportDetails.costPerCalories, prodCheapest != 0 ? "***" : "");
}

// 17. Display the findings (cheapest)
void dispalyFinalAnalysis(const struct CatFoodInfo prodCheapest)
{
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%7d Price: %.2lf\n\n",prodCheapest.m_sku, prodCheapest.m_prodPrice);
	printf("Happy shopping!\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start()
{
	struct ReportData reportDetails[MAXPRODS];
	struct CatFoodInfo catFoodInfo[MAXPRODS];
	int i, cheapest = 0;
	openingMessage(MAXPRODS);
	for(i = 0; i < MAXPRODS; i++){
		catFoodInfo[i] = getCatFoodInfo(i+1);
	}

	printf("\n");
	displayCatFoodHeader();
	for(i = 0; i < MAXPRODS; i++){
		displayCatFoodData(catFoodInfo[i].m_sku, catFoodInfo[i].m_calories, &catFoodInfo[i].m_weight, &catFoodInfo[i].m_prodPrice);
	}
	for ( i = 0; i < MAXPRODS; i++)
	{
		reportDetails[i] = calculateReportData(catFoodInfo[i]);
	}
	double temp = reportDetails[0].costPerServings;
	for ( i = 0; i < MAXPRODS; i++)
	{
		
		if(reportDetails[i].costPerServings < temp)
		{
			temp = reportDetails[i].costPerServings;
			cheapest = i;
		}
	}
	printf("\n");
	displayReportHeader();
	for ( i = 0; i < MAXPRODS; i++)
	{
		if(i == cheapest)
		{
			displayReportData(reportDetails[i], 1);
		}
		else
		{
			displayReportData(reportDetails[i], 0);
		}
	}
	printf("\n");
	dispalyFinalAnalysis(catFoodInfo[cheapest]);
	
}