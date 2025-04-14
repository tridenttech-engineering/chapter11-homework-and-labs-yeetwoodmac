//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Tyler Sharer> on <10/25/2023>
//This program stores (5) race finish times from from the user and stores in an array. It uses two value returning functions to calculates the average time and lowest time.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//array
double finishTimes[5]; //array to hold finish times
const int SIZE = 5; //size of array

//find lowest function
double findLowest(double finishTimes[], double SIZE) {
	double lowest = finishTimes[0]; //initialize lowest to first element
	for (int i = 1; i < SIZE; ++i) { //loop through array
		if (finishTimes[i] < lowest) { //if current element is less than lowest
			lowest = finishTimes[i]; //set lowest to current element
		}
	}
	return lowest; //return lowest value
}
double findAverage(double finishTimes[], double SIZE) {
	double total = 0.0; //initialize total to 0
	for (int i = 0; i < SIZE; ++i) { //loop through array
		total += finishTimes[i]; //add current element to total
	}
	return total / SIZE; //return average
}
int main()
{
	//Array function prototypes
	
	
	//Loop to fill array
	for (int i = 0; i < SIZE; ++i) {
		cout << "Enter time " << i + 1 << ": ";
		cin >> finishTimes[i];
	}
	//variable declarations
	const int SIZE = 5; //size of array
	double averageTime = 0.0; //average time
	double lowestTime = 0.0; //lowest time


	//call functions
	lowestTime = findLowest(finishTimes, SIZE); //store lowest time
	averageTime = findAverage(finishTimes, SIZE); //store average time
	//output results
	cout << fixed << showpoint << setprecision(1); //set output format
	cout << "The average time is: " << averageTime << endl; //output average time
	cout << "The lowest time is: " << lowestTime << endl; //output lowest time

	



   
    
    return 0;
}//end of main function    
