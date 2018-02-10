#include "Suits.h"
#include <map>
#include <cctype>
#include <algorithm>
#include <string>

Suits::Suits()
{
	mySuit = CLUBS;
}

Suits::Suits(string initString)
{
	map<string, Suit> lookup;
	lookup["CLUBS"] = CLUBS;
	lookup["DIAMONDS"] = DIAMONDS;
	lookup["HEARTS"] = HEARTS;
	lookup["SPADES"] = SPADES;

	transform(initString.begin(), initString.end(), initString.begin(), toupper);

	mySuit = lookup[initString];
}

Suits::Suits(int initInt)
{
	mySuit = static_cast<Suit>(initInt);
}

string Suits::toString() const
{
	string suitString[4] = { "CLUBS", "DIAMONDS", "HEARTS", "SPADES" };

	return suitString[mySuit];
}

int Suits::toInt() const
{
	return int(mySuit);
}

bool Suits::operator<(Suits otherSuit) const
{
	return mySuit < otherSuit.toInt();
}

bool Suits::operator==(Suits otherSuit) const
{
	return mySuit == otherSuit.toInt();
}
