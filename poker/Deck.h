#pragma once
#include <vector>
#include "Cardh.h"

class deckC {

private:
	std::vector<card> deck_;

public:
	
	deckC();
	deckC(int num);
	std::vector<card> GetDeck();
	void SetDeck(std::vector<card> deck);

	void printDeck();
	void shuffleDeck();
	void newDeck();
};