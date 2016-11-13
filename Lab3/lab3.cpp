/*
Created by: Josue Guillen
Date: 11/12/2016
Assignment: Create a program that aks the user to input information for mad libs. Then output the mad libs
*/ 

#include <iostream>
using namespace std;

int main() {

string pluralnoun1, pluralnoun2, noun1, noun2, verb1, color1, specialNoun, bodyPart;
int Number1;
float Number3;
char character1;
string Story;

    cout << "Let's play a game of Mad Libs ;)" << endl;
    cout << "Enter a plural noun: ";
    cin >> pluralnoun1;
    cout << "Enter another plural noun: ";
    cin >> pluralnoun2;
    cout << "Enter a noun: ";
    cin >> noun1;
    cout << "Enter another noun: ";
    cin >> noun2;
    cout << "Enter a verb: ";
    cin >> verb1;
    cout << "Enter your favorite color: ";
    cin >> color1;
    cout << "Enter a noun that is special to you: ";
    cin >> specialNoun;
    cout << "Name a body part: ";
    cin >> bodyPart;
    cout << "Enter a number: ";
    cin >> Number1;
    cout << "Enter a special character: ";
    cin >> character1;
    
Number3 = 3.14159;


Story = "This is plain " + pluralnoun1 + ".";
Story += " I am an amazing " + noun1 + " and I love to " + verb1 + ".";
Story += " The last thing I ate were "; 
Story += pluralnoun2 + ".";
Story += " And now my " + bodyPart + " has become so " + color1 + ".";
Story += " It has only been " + to_string (Number1) + " days" + " since I washed my " + bodyPart + ".";
Story += " This is because I am also a(n) " + specialNoun + character1;
Story += " But it is only a matter of time until " + noun2 + " returns" + ".";
Story += " Until then, I only have " + to_string(Number3);
Story += " dollars.";


cout << Story;

return 0;
}

