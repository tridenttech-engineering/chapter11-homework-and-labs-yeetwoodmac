//Introductory21.cpp - Displays the average stock price
//Created/revised by <Tyler Sharer> on <10/25/2023>
//Program that calculates and displays the average stock price from the prices array.

#include <iostream>
#include <iomanip>
using namespace std;

//function to find average
double findAverage(double prices[], int SIZE) {
	double total = 0.0; //initialize total to 0
	for (int i = 0; i < SIZE; ++i) { //loop through array
		total += prices[i]; //add current element to total
	}
	return total / SIZE; //return average
}
int main()
{
	//Array function prototypes
	int SIZE = 10; //size of array
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double average = 0.0;

	//call function
	average = findAverage(prices, SIZE); //store average price

	//output results
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

