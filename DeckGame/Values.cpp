#include "Values.h"
#include <cctype>
#include <algorithm>
#include <string>
#include <map>

Values::Values()
{
	myValue = ACE;
}

Values::Values(string initString)
{
	map<string, Value> lookup;
	lookup["ACE"] = ACE;
	lookup["TWO"] = TWO;
	lookup["THREE"] = THREE;
	lookup["FOUR"] = FOUR;
	lookup["FIVE"] = FIVE;
	lookup["SIX"] = SIX;
	lookup["SEVEN"] = SEVEN;
	lookup["EIGHT"] = EIGHT;
	lookup["NINE"] = NINE;
	lookup["TEN"] = TEN;
	lookup["JACK"] = JACK;
	lookup["QUEEN"] = QUEEN;
	lookup["KING"] = KING;

	transform(initString.begin(), initString.end(), initString.begin(), toupper);

	myValue = lookup[initString];
}

Values::Values(int initInt)
{
	myValue = static_cast<Value>(initInt);
}

string Values::toString() const
{
	string valueString[13] = { "ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING" };
	return valueString[myValue];
}

int Values::toInt() const
{
	return myValue;
}

bool Values::operator<(Values otherValue) const
{
	return myValue < otherValue.toInt();
}

bool Values::operator==(Values otherValue) const
{
	return myValue == otherValue.toInt();
}
