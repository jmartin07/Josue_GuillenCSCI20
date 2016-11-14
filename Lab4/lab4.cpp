/*
Created by: Josue Guillen
Date: 11/13/2016
Assignment: Create a program that emulates a Coinstar machine
*/ 

#include <iostream>
#include <string>
using namespace std;

int main () {
    string coinEntry2;
    int quarterRem, dimeRem, dimeRem2, dimeRem3, nickelREm, pennyRem, pennyRem2;
    float coinEntry, finalCharge, total;
    float fee = .109;
    float quarters = 0.25;
    float dimes = 0.10;
    float nickels = 0.05;
    float pennies = 0.01;
    
     cout << "Welcome to your local Coinstar machine!" << endl;
    cout << "By entering your coins, you are agreeing to letting Coinstar keep 10.9% of total money converted today. Thanks!" << endl;
    cout << endl;
    cout << "Please follow the on screen instructions and enter your coins below." <<endl;
    cin >> coinEntry;
    
    coinEntry2 = "You have inserted " + to_string(coinEntry) + " cents today.";
    
    coinEntry = coinEntry / 100;
    quarterRem = coinEntry / quarters;
    dimeRem = coinEntry/ dimes;
    dimeRem3 = (coinEntry - quarterRem * quarters) / dimes;
    nickelREm = ((coinEntry / dimes) / 100) - (dimeRem3 * dimes) / nickels;
    pennyRem = (coinEntry + 0.01 - (dimeRem * dimes)) / pennies;
    pennyRem2 = pennyRem + (nickelREm * nickels) / pennies;
 
    
    coinEntry2 += " That is " + to_string(coinEntry) + " dollars.";
    coinEntry2 += " That is " + to_string(quarterRem) + " quarter(s).";
    coinEntry2 += " That is " + to_string(dimeRem3) + " dime(s).";
    coinEntry2 += " That is " + to_string(nickelREm) + " nickel(s).";
    coinEntry2 += " That is " + to_string(pennyRem2) + " pennies.";
    
    finalCharge = fee * coinEntry;
    total = coinEntry - finalCharge;

    cout << coinEntry2;
    
    cout << "After our fee, your total is " + to_string(total) + " dollars. Goodbye.";
        
    return 0;
}