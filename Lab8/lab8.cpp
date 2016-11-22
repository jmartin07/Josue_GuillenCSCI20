/*
Created by: Josue Guillen
Date: 11/9/2016
Assignment: Create a program that converts pounds to kilograms and kilograms to pounds. 
User should first enter Kilograms and then pounds. 
*/ 

#include <iostream>
#include <string>
using namespace std;

void toKilo () 
{
    float Kilo1 = 2.204622, Pound1 = 0; // These are the variables I calculated to make the conversion. 1 lb is 453.6 grams
    
    cout << "Please enter how many pounds you would like to convert to kilograms: ";
    cin >> Pound1;                      // User input
    cout << "You have entered " << Pound1 << " pounds." << endl;
    cout << "You are measuring a mass of " << Pound1 / Kilo1 << " kilograms today. Thank you." << endl; // Conversion happens here
    cout << "                                                                                " << endl; // Created a space to make program look neat
    return;
}

void toPounds ()
{
    float Kilo1 = 0, Pound1 = 0.4536; // Variables being used to make conversion. Calculated from knowing that 1000 grams is 1kg
    
    cout << "Please enter how many kilograms you would like to convert to pounds: ";
    cin >> Kilo1;
    cout << "You have enterd " << Kilo1 << " kilograms." << endl;
    cout << "You are measuring a mass of " << Kilo1 / Pound1 << " pounds today. Thank you."; // Conversion happens here by putting enterd Kilo amt over our given pounds factor
}


int main ()
{
    toKilo();
    toPounds();
    return 0;
}