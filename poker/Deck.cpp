#include <algorithm>  
#include <random>
#include <chrono>       // std::chrono::system_clock
#include "Deck.h"
  
deckC::deckC(){
	newDeck();
}

deckC::deckC(int num)
{
	newDeck();
}

std::vector<card> deckC::GetDeck(){

	return deck_;
}

void deckC::SetDeck(std::vector<card> deck)
{
	deck_ = deck;
}

void deckC::printDeck()
{
	for (int i = 0; i < 52; i++) {
		std::cout << deck_[i].GetCardNo();
		std::cout << " of " + deck_[i].GetSuit() << std::endl;

	}
}

void deckC::shuffleDeck()
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < 1000; i++) {
		std::random_shuffle(deck_.begin(), deck_.end());
	}

}

void deckC::newDeck()
{
	for (int i = 0; i < 52; i++) {
		std::string suit = "";

		if (i < 13) {
			deck_.push_back(card(i + 1, "clubs"));
		}
		else if (i < 26) {
			deck_.push_back(card(i - 12, "spades"));
		}
		else if (i < 39) {
			deck_.push_back(card(i - 25, "diamonds"));
		}
		else {
			deck_.push_back(card(i - 38, "hearts"));
		}
	}

	shuffleDeck();
}


