#pragma once
#include "Cardh.h"
class hand {
private:
	card hand1_;
	card hand2_;

public:

	hand();
	hand(card hand1, card hand2);

	void SetHand1_(card hand1);
	card GetHand1_() const;
	void SetHand2_(card hand2);
	card GetHand2_() const;
};