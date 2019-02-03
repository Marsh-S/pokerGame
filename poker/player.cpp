#include "player.h"

player::player()
{
}

void player::SetHand1(card hand1)
{
	pokerHand_.SetHand1_(hand1);
}

card player::GetHand1() const
{
	 return pokerHand_.GetHand1_();
}

void player::SetHand2(card hand2)
{
	pokerHand_.SetHand2_(hand2);
}

card player::GetHand2() const
{
	return pokerHand_.GetHand2_();
}

int player::calcChips()
{
	int whiteChipTot = playerChips_.GetWhiteChips() * playerChips_.GetWhiteChipVal();
	int redChipTot = playerChips_.GetRedChips() * playerChips_.GetRedChipVal();
	int blueChipTot = playerChips_.GetBlueChips() * playerChips_.GetBlueChipVal();
	int greenChipTot = playerChips_.GetGreenChips() * playerChips_.GetGreenChipVal();
	int blackChipTot = playerChips_.GetBlackChips() * playerChips_.GetBlackChipVal();
	return whiteChipTot + redChipTot + blueChipTot + greenChipTot + blackChipTot;
}
