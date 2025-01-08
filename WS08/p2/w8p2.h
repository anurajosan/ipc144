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

#define MAXPRODS 3
#define NUMOFGRAMS 64
#define CONVERSION 2.20462
// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo
{
    int m_sku;
    double m_prodPrice;
    int m_calories;
    double m_weight;
};
struct ReportData
{
    int sku;
    double  prodPrice;
    int calories;
    double weightLbs;
    double weightKg;
    int weightGrams;
    double totalServings;
    double costPerServings;
    double costPerCalories;
} ;

// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* numRef);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* numRef);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int numOfProds);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int prodSeqNum);

// 5. Display the formatted table header
void displayCatFoodHeader();

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku, int calories, double* weight, double* prodPrice);

// 7. Logic entry point
void start();
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* kilograms);

// 9. convert lbs: g
int convertLbsG(const double* pounds, int* grams);


// 10. convert lbs: kg / g
void convertLbs(const double* pounds, double* kilograms , int* grams);


// 11. calculate: servings based on gPerServ
double calculateServings(const int servingGrams, const int totalGramsForProd, double* numOfServings);


// 12. calculate: cost per serving
double calculateCostPerServing(const double* prodPrice, const double* totalCalories, double* costPerCalories);


// 13. calculate: cost per calorie
double calculateCostPerCal(const double* prodPrice, const double* totalNumCalories, double* costPerCalories);


// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo catFoodData);


// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData reportDetails, const int prodCheapest);

// 17. Display the findings (cheapest)
void dispalyFinalAnalysis(const struct CatFoodInfo prodCheapest);


// ----------------------------------------------------------------------------

// 7. Logic entry point 
