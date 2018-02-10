#include <iostream>
#include "Deck.h"
using namespace std;

int main()
{
	Deck myDeck;
	cout << "The deck has " << myDeck.size() << " cards."
		<< endl << endl;

	for (int i = 1; i <= 10; i++)
	{
		Card aCard = myDeck.Deal();
		cout << aCard.GetValue().toString() << " of " << aCard.GetSuit().toString() << endl;
	}
	cout << endl << "The deck has " << myDeck.size() << " cards." << endl;

	cout << "Shuffling" << endl << endl;
	myDeck.Shuffle();

	cout << "Enter the name of a suit: ";
	string suit;
	cin >> suit;
	cout << "Enter the name of a card (ace, two, ...): ";
	string value;
	cin >> value;
	if (myDeck.isThere(Card(value, suit)))
		cout << "The card is in the deck." << endl;
	else
		cout << "The card has already been dealt." << endl;

	cout << "The remaining cards are:" << endl;
	while (!myDeck.empty())
	{
		Card aCard = myDeck.Deal();
		cout << aCard.GetValue().toString() << " of " << aCard.GetSuit().toString() << endl;
	}

	cout << endl << "The deck has " << myDeck.size() << " cards" << endl;
}