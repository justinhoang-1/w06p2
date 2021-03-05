/*
	==================================================
	Workshop #6 (Part-2):
	==================================================
	Name   :Justin Hoang
	ID     :021569132
	Email  :jhoang11@myseneca.ca
	Section:NCC
*/

// ----------------------------------------------------------------------------
// defines/macros
#define MAX_PRODUCT 3
#define SUGGESTED_SERVING 64
#define KG_UNIT 2.20462

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo
{
	int sku;
	double productPrice;
	int caloriesPerServing;
	double productWeight;
};

struct ReportData
{
	int sku;
	double productPrice;
	int caloriesPerServing;
	double productWeightLbs;
	double productWeightKg;
	int productWeightGram;
	double numberServing;
	double costPerServing;
	double costPerCalorie;
};

// ----------------------------------------------------------------------------
// function prototypes

// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* number);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* positiveDouble);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(void);

// 4. Get user input for the details of cat food product
void getCatFoodInfo(int num, int* sku, double* price, double* weight, int* calories);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(struct CatFoodInfo* data);



// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(double* poundsKg);

// 9. convert lbs: g
double convertLbsG(double* poundsGrams);

// 10. convert lbs: kg / g
void convertLbs(double* poundsKg, double* poundsGrams);

// 11. calculate: servings based on gPerServ


// 12. calculate: cost per serving


// 13. calculate: cost per calorie


// 14. Derive a reporting detail record based on the cat food product data


// 15. Display the formatted table header for the analysis results
//void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table


// 17. Display the findings (cheapest)


// ----------------------------------------------------------------------------


// 7. Logic entry point
int start(void);

