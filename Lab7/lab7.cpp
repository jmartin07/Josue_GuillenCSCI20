/*
Created by: Josue Guillen
Date: 11/20/2016
Assignment: Create a program to display a song of your choice that uses functions with parameters and arguments.
*/ 

#include <iostream>
#include <string>
using namespace std;

void printChorus (string Verses7, string Verses8, string Verses9)
{
    cout << Verses7 << endl;
    cout << Verses8 << endl;
    cout << Verses9 << endl;
    cout << "     " << endl;
   return; 
}

void printChorus2 (string Verses13, string Verses14, string Verses15, string Verses16)
{
    cout << Verses13 << endl;
    cout << Verses14 << endl;
    cout << Verses15 << endl;
    cout << Verses16 << endl;
    cout << "      " << endl;
    cout << "      " << endl;
    cout << Verses13 << endl;
    cout << Verses14 << endl;
    cout << Verses15 << endl;
    cout << Verses16 << endl;
    cout << "      " << endl;
    cout << "      " << endl;
    return;
}

void printsongBody1 (string Verses1, string Verses2, string Verses3)
{
    cout << Verses1 << endl;
    cout << Verses2 << endl;
    cout << Verses3 << endl;
    cout << "     " << endl;
    return;
}

void printsongBody2 (string Verses4, string Verses5, string Verses6)
{
    cout << Verses4 << endl; 
    cout << Verses5 << endl;
    cout << Verses6 << endl;
    cout << "     " << endl;
    return;
}

void printsongBody3(string Verses10, string Verses11, string Verses12)
{
    cout << Verses10 << endl;
    cout << Verses11 << endl;
    cout << Verses12 << endl;
    cout << "      " << endl;
}

int main ()
{
    printsongBody1("I come home in the morning light, my mother says when are you gonna live your life right", "Oh mother dear we're not the fortunate ones... and girls they want to have fun", "Oh girls just want to have fun");
    printsongBody2("The phone rings in the middle of the night, my father yells what you gonna do with your life", "Oh daddy dear you know you're still number one... but girls they want to have fun", "Oh girls just want to have");
    printChorus("That's all they really want.... some fun", "When the working day is done", "Girls - they want to have fun.... Oh girls just want to have fun");
    printsongBody3("Some boys take a beautiful girl, and hide her away from the rest of the world", "I want to be the one to walk in the sun... Oh girls they want to have fun", "Oh girls just want to have ");
    printChorus2("That's all they really want... Some fun", "When the working day is done... girls - they want to have fun", "Oh girls just want to have fun", "They want to have fun, they want to have fun...");
    return 0;
}