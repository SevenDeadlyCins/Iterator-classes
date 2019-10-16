#pragma once
#include <iostream>
using namespace std;

template <class item>  //makes it so that item can be any class
class iterator:
{
public:
	virtual void first() = 0;  //goes to the first element in the collection
	virtual void next() = 0; //goes to the next element in the collection
	virtual bool isDone() const = 0; //returns true if the end of the collection is reached
	virtual item curentItem() const = 0; //returns the location of the current item in the collection
protected:
	iterator();
};