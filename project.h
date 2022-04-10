#include <iostream>
#ifndef PROJECT_H
#define PROJECT_H

using namespace std;

template<class T>
class Student{
	
	// Private data fields
	private:
		string name;
		static const int SIZE = 5;					// Max cpacity of an array
		int scoreCount;								// cuurent count of scores
		T scoreArr[SIZE];							// Array of scores
		void print();

	public:
		// Public methods
		Student();
		~Student(){};								// NULL destructor
		bool add(const T &);
		bool remove();
		bool isEmpty() const;
		void clear();
		bool isFull() const;
};

#endif
