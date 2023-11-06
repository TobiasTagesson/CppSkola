#include <iostream>
#include <iomanip>
#include <float.h>
using namespace std;
#include <string.h>
#include <ctime>
//#include "functions.h"

int main(){
 /*  
 
 // Uppgift 9:
 
   double amount, total;
    

    cout << "enter digit: ";
    cin >> amount;

    cout << "Priset äro: " << calculateVAT2(amount) << endl; */

  /*   int totalMinutes;
    cout << "Enter a number of minutes: " << endl;
    cin >> totalMinutes;

    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
  
    cout << totalMinutes << " is " << hours << " hours and " << minutes << " minutes" << endl; */

 // Uppgift 10:

    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    int noOfThousandBills = amount / 1000;
    amount  %= 1000;

    int noOfFiveHundredBills = amount / 500;
    amount %= 500;

    int noOfTwoHundredBills = amount / 200;
    amount %= 200;

    int noOfHundredBills = amount / 100;
    amount %= 100;

    int noOfFiftyBills = amount / 50;
    amount %= 50;

    int noOfTwentyBills = amount / 20;
    amount %= 20;

    int noOfTenCoins = amount / 10;
    amount %= 10;

    int noOfOneCoins = amount;


    if (noOfThousandBills != 0)
        cout << "1000: " << noOfThousandBills << endl;
    if (noOfFiveHundredBills != 0)
        cout << "500: " << noOfFiveHundredBills << endl;
    if (noOfTwoHundredBills != 0)
        cout << "200: " << noOfTwoHundredBills << endl;
    if (noOfHundredBills != 0)
        cout << "100: " << noOfHundredBills << endl;
    if (noOfFiftyBills != 0)
        cout << "50: " << noOfFiftyBills << endl;
    if (noOfTwentyBills != 0)
        cout << "20: " << noOfTwentyBills << endl;
    if (noOfTenCoins != 0)
        cout << "10: " << noOfTenCoins << endl;
    if (noOfOneCoins != 0)
        cout << "1: " << noOfOneCoins << endl;

    return 0;
}
