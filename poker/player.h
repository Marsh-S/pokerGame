#pragma once
#include "hand.h"
#include "chips.h"

class player {

private:
	hand pokerHand_;
	chips playerChips_;
	int totalChipsWorth;

public:

	player();
	
	void SetHand1(card hand1);
	card GetHand1() const;

	void SetHand2(card hand2);
	card GetHand2() const;

	int calcChips();
};