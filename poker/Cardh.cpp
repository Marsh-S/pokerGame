#include "Cardh.h"

card::card()
{
	cardNo_ = 0;
	suit_ = "Null";
}

card::card(int cardNo, std::string suit)
{
	SetCardNo(cardNo);
	SetSuit(suit);
}

std::string card::GetSuit() const
{
	return suit_;
}

void card::SetSuit(std::string suit)
{
		suit_ = suit;
}

int card::GetCardNo() const
{
	return cardNo_;
}

void card::SetCardNo(int cardNo)
{
		cardNo_ = cardNo;
}
