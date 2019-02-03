// poker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Deck.h"
#include "player.h"

deckC gameDeck;
player p1;
player p2;
player p3;
player p4;

void setupAll();
void dealCards();
void printHand(player playerHand);
void turnPass();

int playerCount = 4;
int turnCount = 1;
int pot = 0;
int currentBet = 0;

bool p1Fold = false;
bool p2Fold = false;
bool p3Fold = false;
bool p4Fold = false;

int main()
{
	setupAll();
	printHand(p1);
	printHand(p2);
	printHand(p3);
	printHand(p4);
	
	std::cout << "Select player count: 2-4\n";
	std::cin >> playerCount;
	
	while (true) {
		std::cout << "Player" << turnCount << "'s hand\n";
		printHand(p1);
		std::cout << "Fold : Match : Raise : Check\n";
		std::string move; std::cin >> move; 

		if (move == "fold") {
			turnPass();
			switch (playerCount) {
			case 1: p1Fold = true; break;
			case 2: p2Fold = true; break;
			case 3: p3Fold = true; break;
			case 4: p4Fold = true; break;
			}
		}

		if (move == "match")
			;
		if (move == "raise")
			;
		if (move == "check")
			;
	}
}

void setupAll() {
	gameDeck.shuffleDeck();
	dealCards();
	
}
void dealCards() {

	std::vector<card> deck = gameDeck.GetDeck();
	p1.SetHand1(deck[(int)deck.size() - 1]); //deals last vector element of gameDeck.GetDeck() to hand
	deck.pop_back();//deletes element dealt to hand 
	p1.SetHand2(deck[(int)deck.size() - 1]); // repeated each each player twice 
	deck.pop_back();

	p2.SetHand1(deck[(int)deck.size() - 1]); //deals last vector element of gameDeck.GetDeck() to hand
	deck.pop_back();//deletes element dealt to hand 
	p2.SetHand2(deck[(int)deck.size() - 1]); // repeated each each player twice 
	deck.pop_back();

	if (playerCount > 2) {
		p3.SetHand1(deck[(int)deck.size() - 1]); //deals last vector element of gameDeck.GetDeck() to hand
		deck.pop_back();//deletes element dealt to hand 
		p3.SetHand2(deck[(int)deck.size() - 1]); // repeated each each player twice 
		deck.pop_back();
	}
	if (playerCount > 3) {
		p4.SetHand1(deck[(int)deck.size() - 1]); //deals last vector element of gameDeck.GetDeck() to hand
		deck.pop_back();//deletes element dealt to hand 
		p4.SetHand2(deck[(int)deck.size() - 1]); // repeated each each player twice 
		deck.pop_back();
	}
	gameDeck.SetDeck(deck);
}

void printHand(player playerHand) {
	
	std::cout << playerHand.GetHand1().GetCardNo();
	std::cout << " of " + playerHand.GetHand1().GetSuit() << std::endl;

	std::cout << playerHand.GetHand2().GetCardNo();
	std::cout << " of " + playerHand.GetHand2().GetSuit() << std::endl;
	std::cout << std::endl;
}

void turnPass() {
	turnCount++;
	if (turnCount > playerCount) {
		turnCount = 1;
	}
}