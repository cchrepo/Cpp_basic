//============================================================================
// Name        : class.cpp
// Author      : CCH
// Version     : Ver1
// Copyright   : Your copyright notice
// Description : This is discription for class and object.
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;
// class
class car {

	private:
	int value;

	public:
		string carname;
		string collor;
		int amount;

		car(){ // @suppress("Class members should be properly initialized")
			cout << "create a object" << endl;
		}
};

class Book {
	public:
		string tittle;
		string author;
		int pages;
		//contructor
		Book(string atittle, string aauthor, int apages) {
			tittle = atittle;
			author = aauthor;
			pages  = apages;
		}
};

//class with two obj
class Box{
	int width, height,lenght;
public:
	Box();
	Box(int, int, int);
	void set_value(int, int, int);
	int area(){return width*height*lenght;}
};


void Box::set_value(int x, int y, int z){
	width = x;
	height = y;
	lenght = z;
}
//Overload + operator
Box operator+(const Box& b){
	Box box;

}

//Constructor

Box::Box (){
	width = 5;
	height = 6;
	lenght = 7;
}

int main() {
	// this is a object
	int x, y, z;

	Box box_input;
	printf("What is the box value?!\n");
	cin >> x;
	cin >> y;
	cin >> z;
	box_input.set_value(x, y, z);
	Box boxsize;

	cout << "area:" << box_input.area() << endl;
	cout << "areaB nummer" << boxsize.area() << endl;


	car car1;
	car1.carname ="BMW";
	car1.collor = "black";
	car1.amount = 2;

	car car2;
	car2.carname = "Merz";
	car2.collor = "Write";
	car2.amount = 5;

	Book book1("BadForLife", "Kim", 69);


	// print function
	cout << car1.carname << endl;
	cout << car1.collor << endl;
	cout << car1.amount << endl << endl;

	cout << car2.carname << endl;
	cout << car2.collor << endl;
	cout << car2.amount << endl << endl;

	cout << book1.tittle << endl;
	cout << book1.author << endl;
	cout << book1.pages << endl;

	return 0;
}
