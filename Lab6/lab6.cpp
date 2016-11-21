/*
Created by: Josue Guillen
Date: 11/20/2016
Assignment: Create a copyright function. This function should have an ASCII picture, your name, copyright and year. Add this function to one of your previous labs or assignments and submit.
*/ 

#include <iostream>
#include <string>
using namespace std; 

void printMoney()
{
    char printMoney = '$';
    cout << "    $    " << endl;
    cout << "   $$$   " << endl;
    cout << " $$$$$$$ " << endl;
    cout << "$$$$$$$$$" << "     Copyright Josue Guillen 2016" << endl;
    cout << " $$$$$$$ " << endl;
    cout << "  $$$$$  " << endl;
    cout << "   $$$   " << endl;
    cout << "    $    " << endl;
    cout << "    $    " << endl;
    cout << "    $    " << endl;
    cout << "         " << endl;
    cout << "Who says money doesn't grow on trees?" << endl;    
    
    return;
}

int main ()
{
    printMoney();
    
    return 0;
}