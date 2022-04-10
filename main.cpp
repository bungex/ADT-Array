/*
Name: Mueen Bunglawala
Due Date: 04/17/2021
Name: Project 4
Course: CIS 260
Description: This program creates ADT array to manage user given data.
*/

#include <iostream>
#include <iomanip>
#include "project.h"
#include "proj.cpp"

using namespace std;


int main() {
	
	Student<float> stud1;  // a student
    char choice, answer;  // handles input from menu and controls loop
    int score;             // the iten to be added to the end of the array
     do{
    //system("CLS");          // clears the screen
    cout <<setw(30)<< " Main Menu\n\n";   // menu of options to add/remove or clear
    cout << setw(15)<< " "<< "(1)- (A)dd\n";
    cout << setw(15)<< " "<< "(2)- (R)emove\n";
    cout << setw(15)<< " "<< "(3)- (C)lear\n";
    cout << setw(35)<< "Enter Choice ";cin >> choice;
    choice = toupper(choice);
    switch (choice)
    {   case '1':
        case 'A':
                cout << "\nAdd what Score "; cin >> score;
                if (stud1.add(score))       // call to the add method
                    cout << score << "\nAdded\n";
                    cin.ignore();
                break;
        case '2':
        case 'R':
                if(stud1.remove())          // call to the remove method
                    cout << "\nRemoved\n";
                break;
        case '3':
        case 'C':
                stud1.clear();              // call to the clear method
                cout << "\n";
                break;
     }
     cout << "another Operation "; cin >> answer; answer = toupper(answer);
    }     while (answer == 'Y'); 
	
	system("pause"); 

return 0;
}
