#pragma once
#include "Values.h"
#include "Suits.h"

class Card
{
public:
	Card();
	Card(Values initValue, Suits initSuit);

	Values GetValue() const;
	Suits GetSuit() const;

	bool operator<(Card otherCard) const;
	bool operator>(Card otherCard) const;
	bool operator==(Card otherCard) const;
	bool operator<=(Card otherCard) const;
	bool operator>=(Card otherCard) const;
	bool operator!=(Card otherCard) const;

private:
	Values myValue;
	Suits mySuit;
	int rank() const;
};