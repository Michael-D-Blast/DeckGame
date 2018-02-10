#pragma once
#include <string>

using namespace std;

class Suits
{
public:
	Suits();
	Suits(string initString);
	Suits(int initInt);

	string toString() const;
	int toInt() const;

	bool operator<(Suits otherSuit) const;
	bool operator==(Suits otherSuit) const;

	enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};

private:
	Suit mySuit;
};