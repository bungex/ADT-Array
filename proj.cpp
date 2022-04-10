#include "project.h"
#include <iostream>
using namespace std;

// This constructor intializes score count and student's name
template<class T>
Student<T> :: Student(){
	cout << "Enter Name: "; getline(cin,name);
	scoreCount = 0;
}

// This method adds scores/element
template<class T>
bool Student<T> :: add(const T & score){
	
	// Checking if array is full
	bool hasRoomToAdd = !isFull();
	if(hasRoomToAdd){
		scoreArr[scoreCount] = score;
		scoreCount++;
	}
	return hasRoomToAdd;			// Return true if score is added, otherwise false
}

// This method removes last most entered scores from the array
template<class T>
bool Student<T> :: remove(){
	
	// Checking if array is empty
	bool canRemove = !isEmpty();
	if(canRemove){
		scoreCount--;
	}
	return canRemove;				// Return true if score is removed, otherwise false
}

// This method calls another method print the element before clearing the whole array
template<class T>
void Student<T> :: clear(){
	
	print();						// calling print funcion
	scoreCount = 0;

}

// This function prints name of the student and array in reverse order
template<class T>
void Student<T> :: print(){
	
	cout << "Name: " << name << endl;
	cout << "Scores: ";
	for(int i = scoreCount - 1; i > -1; i--){
		cout << scoreArr[i] << " ";
	}
	
}

// This methods returns true is array is empty, otherwise false
template<class T>
bool Student<T>::isEmpty() const
{
	return scoreCount == 0;
}

// This method returns true if array is full, otherwise false
template<class T>
bool Student<T>::isFull() const
{
	return scoreCount == SIZE;
} 
 
