/*
	==================================================
	Workshop #6 (Part-2):
	==================================================
	Name   :Justin Hoang
	ID     :021569132
	Email  :jhoang11@myseneca.ca
	Section:NCC
*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include <stdio.h>

// User-Defined Libraries
#include "w6p2.h"

// ----------------------------------------------------------------------------
// PART-1

	// 1. Get user input of int type and validate for a positive non-zero number
	//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* numInt)
{

	int posIntNumber;

	int a = 0;
	do
	{
		scanf("%d", &posIntNumber);
		if (posIntNumber > 0)
		{
			a++;
		}
		else
		{
			printf("ERROR: Enter a positive value: ");
		}

	} while (a < 1);
	if (numInt != NULL)
	{
		*numInt = posIntNumber;
	}


	return posIntNumber;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

double getDoublePositive(double* numDouble)
{
	double posDoubleNumber = 0.0;
	int a = 0;
	do
	{
		scanf("%lf", &posDoubleNumber);
		if (posDoubleNumber > 0)
		{
			a++;

		}
		else
		{
			printf("ERROR: Enter a positive value: ");
		}
		if (numDouble != NULL)
		{
			*numDouble = posDoubleNumber;
		}
	} while (a < 1);
	return posDoubleNumber;
}
// 3. Opening Message (include the number of products that need entering)
void openingMessage(void)
{
	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_PRODUCT);
	printf("NOTE: A 'serving' is %dg\n", SUGGESTED_SERVING);
	return;
}

// 4. Get user input for the details of cat food product
void getCatFoodInfo(int num, int* sku, double* price, double* weight, int* calories)
{
	printf("\n");
	printf("Cat Food Product #%d\n", num);
	printf("--------------------\n");

	printf("SKU           : ");
	getIntPositive(sku);

	printf("PRICE         : $");
	*price = getDoublePositive(NULL);

	printf("WEIGHT (LBS)  : ");
	*weight = getDoublePositive(NULL);

	printf("CALORIES/SERV.: ");
	getIntPositive(calories);
	return;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}
// 6. Display a formatted record of cat food data
void displayCatFoodData(struct CatFoodInfo* data)
{
	printf("%07d %10.2lf %10.1lf %8d\n",
		data->sku,
		data->productPrice,
		data->productWeight,
		data->caloriesPerServing);
}


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(double* poundsKg)
{
	double weightKg = 0.0;
	int a = 0;

		if (poundsKg != NULL)
		{
			*poundsKg = weightKg / KG_UNIT;
		}
	return weightKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
double convertLbsG(double* poundsGrams)
{
	double weightGrams = 0.0;
	int a = 0;
	convertLbsKg(poundsGrams);
	if (poundsGrams != NULL)
	{
		*poundsGrams = weightGrams * 1000;
	}
	return weightGrams;
}

// 10. convert lbs: kg and g
void convertLbs(double* poundsKg, double* poundsGrams)
{
	convertLbsKg(poundsKg);
	convertLbsG(poundsGrams);

}

// 11. calculate: servings based on gPerServ


// 12. calculate: cost per serving


// 13. calculate: cost per calorie


// 14. Derive a reporting detail record based on the cat food product data


// 15. Display the formatted table header for the analysis results
//void displayReportHeader(void)
//{
//	printf("Analysis Report (Note: Serving = %dg\n", ???);
//	printf("---------------\n");
//	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
//	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
//}

// 16. Display the formatted data row in the analysis table


// 17. Display the findings (cheapest)


// ----------------------------------------------------------------------------


// 7. Logic entry point
int start(void)
{
	struct CatFoodInfo foodInfo[MAX_PRODUCT] = { { 0 } };
	struct ReportData summaryData[MAX_PRODUCT] = { { 0 } };

	int i;

	openingMessage();
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		getCatFoodInfo(i + 1, &foodInfo[i].sku, &foodInfo[i].productPrice, &foodInfo[i].productWeight, &foodInfo[i].caloriesPerServing);
	}

	convertLbsKg(&summaryData->productWeightKg);
	convertLbsG(&summaryData->productWeightGram);
	convertLbs(&summaryData->productWeightKg, &summaryData->productWeightGram);

						



	printf("\n");
	displayCatFoodHeader();
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		displayCatFoodData(&foodInfo[i]);
	}
	
	return 0;
}

