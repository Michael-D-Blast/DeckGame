#pragma once
#include <string>

using namespace std;

class Values
{
public:
	Values();
	Values(string initString);
	Values(int initInt);

	string toString() const;
	int toInt() const;

	bool operator<(Values otherValue) const;
	bool operator==(Values otherValue) const;

	enum Value {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

private:
	Value myValue;
};