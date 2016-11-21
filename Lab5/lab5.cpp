/*
Created by: Josue Guillen
Date: 11/17/2016
Assignment: Create a program that has a monsterstruct and 4 monster objects
*/ 

#include <iostream>
#include <string>
using namespace std;

struct monsterStruct
{
    string Name;
    string Head;
    string Eyes;
    string Ears;
    string Nose;
    string Mouth;
    string Body;
    
};

int main () 
{
    monsterStruct OneMonster;
    monsterStruct devilDog;
    monsterStruct giantCat;
    monsterStruct DrPc;
    
    DrPc.Name = "Dr PC";
    DrPc.Head = "Square";
    DrPc.Eyes = "Big Xs";
    DrPc.Ears = "None";
    DrPc.Nose = "None";
    DrPc.Body = "Keyboard";
    DrPc.Mouth = "Screen Monitor";
    
    giantCat.Name = "Giant Cat";
    giantCat.Head = "Cat";
    giantCat.Eyes = "Yellow";
    giantCat.Ears = "Sharp";
    giantCat.Mouth = "Whiskas";
    giantCat.Body = "Mutant";
    
    devilDog.Head = "Dog";
    devilDog.Eyes = "Red";
    devilDog.Ears = "Pointy";
    devilDog.Mouth = "Sharp";
    devilDog.Name = "Devildog";
    
    OneMonster.Name = "OneMonster";
    OneMonster.Head = "Zombus";
    OneMonster.Eyes = "Spritem";
    OneMonster.Ears = "Vegitas";
    OneMonster.Nose = "None";
    OneMonster.Mouth = "Wackus";
    
    cout << "Monster Output: "
         << OneMonster.Name << " is the name, "
         << OneMonster.Head << " is the head, "
         << OneMonster.Eyes << " are the eyes, "
         << OneMonster.Ears << " are the ears, "
         << OneMonster.Nose << " is the nose, "
         << OneMonster.Mouth << " is the mouth." << endl;
         
    cout << "Monster Output 2: "
         << devilDog.Name << " is the name, "
         << devilDog.Head << " is the head, "
         << devilDog.Ears << " are the ears, "
         << devilDog.Mouth << " is the mouth, "
         << devilDog.Eyes << " are the eyes." << endl;

    cout << "Monster Output 3: "
         << giantCat.Name << " is the name, "
         << giantCat.Head << " is the head, "
         << giantCat.Eyes << " are it's eyes, "
         << giantCat.Ears << " are it's ears, "
         << giantCat.Mouth << " is it's mouth, "
         << giantCat.Body << " is it's body size." << endl;
    
    cout << "Monster Output 4: "
         << DrPc.Name << " is the name, "
         << DrPc.Head << " is his head, "
         << DrPc.Eyes << " are his eyes, "
         << DrPc.Ears << " are his ears, "
         << DrPc.Nose << " is his nose, "
         << DrPc.Body << " is his body type, "
         << DrPc.Mouth << " is his mouth type." << endl;  

return 0;    
}