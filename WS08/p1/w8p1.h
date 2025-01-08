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

#define MAXPRODS 3
#define NUMOFGRAMS 64
// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo
{
    int m_sku;
    double m_prodPrice;
    int m_calories;
    double m_weight;
};

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
