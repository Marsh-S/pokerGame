#include "hand.h"

hand::hand()
{
	hand1_.SetCardNo(0);
	hand1_.SetSuit("Null");
	hand2_.SetCardNo(0);
	hand2_.SetSuit("Null");
}

hand::hand(card hand1, card hand2)
{
	hand1_ = hand1;
	hand2_ = hand2;
}

void hand::SetHand1_(card hand1)
{
	hand1_ = hand1;
}

card hand::GetHand1_() const
{
	return hand1_;
}

void hand::SetHand2_(card hand2)
{
	hand2_ = hand2;
}

card hand::GetHand2_() const
{
	return hand2_;
}
