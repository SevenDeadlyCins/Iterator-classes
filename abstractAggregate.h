#pragma once
#include "iterator.h"
template <class item>
class abstractAggregate
{
public:
	virtual iterator<item>* createIterator() const = 0;
};

