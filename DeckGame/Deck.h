#pragma once
#include "Card.h"
#include <deque>
#include <algorithm>

using namespace std;

class Deck {
public:
	Deck();

	bool empty() const;
	bool isThere(Card aCard) const;
	int size() const;
	
	void Shuffle();
	Card Deal();

private:
	deque<Card> theDeck;
};