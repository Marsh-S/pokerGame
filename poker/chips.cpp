#include "chips.h"

chips::chips()
{
}

chips::chips(int whiteChips, int redChips, int blueChips, int greenChips, int blackChips)
{
	if (whiteChips > 0)
		whiteChips_ = whiteChips;
	if (redChips > 0)
		redChips_ = redChips;
	if (blueChips > 0)
		blueChips_ = blueChips;
	if (greenChips > 0)
		greenChips_ = greenChips;
	if (blackChips > 0)
		blackChips_ = blackChips;
}

int chips::GetWhiteChips() const
{
	return whiteChips_;
}

void chips::AddWhiteChips(int whiteChips) 
{
	whiteChips_ += whiteChips;
}

int chips::GetRedChips() const
{
	return redChips_;
}

void chips::AddRedChips(int redChips) 
{
	redChips_ += redChips;
}

int chips::GetBlueChips() const
{
	return blueChips_;
}

void chips::AddBlueChips(int BlueChips) 
{
	blueChips_ += BlueChips;
}

int chips::GetGreenChips() const
{
	return greenChips_;
}

void chips::AddGreenChips(int greenChips) 
{
	greenChips_ += greenChips;
}

int chips::GetBlackChips() const
{
	return blackChips_;
}

void chips::AddBlackChips(int blackChips) 
{
	blackChips_ += blackChips_;
}

int chips::GetWhiteChipVal() const
{
	return whiteChipsVal_;
}

void chips::SetWhiteChipVal(int whiteChipVal)
{
	if (whiteChipVal > 0)
		whiteChipsVal_ = whiteChipVal;
}

int chips::GetRedChipVal() const
{
	return redChipsVal_;
}

void chips::SetRedChipVal(int redChipVal)
{
	if (redChipVal > 0)
		redChipsVal_ = redChipVal;
}

int chips::GetBlueChipVal() const
{
	return blueChipsVal_;
}

void chips::SetBlueChipVal(int blueChipVal)
{
	if (blueChipVal > 0)
		blueChipsVal_ = blueChipVal;
}

int chips::GetGreenChipVal() const
{
	return greenChipsVal_;
}

void chips::SetGreenChipVal(int greenChipVal)
{
	if (greenChipVal > 0)
		greenChipsVal_ = greenChipVal;
}

int chips::GetBlackChipVal() const
{
	return blackChipsVal_;
}

void chips::SetBlackChipVal(int blackChipVal)
{
	if (blackChipVal > 0)
		blackChipsVal_ = blackChipVal;
}
