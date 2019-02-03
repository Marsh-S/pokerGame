#pragma once

class chips {
	
private: 
	int whiteChips_;
	int redChips_;
	int blueChips_;
	int greenChips_;
	int blackChips_;

	int whiteChipsVal_;
	int redChipsVal_;
	int blueChipsVal_;
	int greenChipsVal_;
	int blackChipsVal_;

public:

	chips();
	chips(int whiteChips, int redChips, int blueChips, int greenChips, int blackChips);

	int GetWhiteChips() const;
	void AddWhiteChips(int whiteChips);

	int GetRedChips() const;
	void AddRedChips(int redChips);

	int GetBlueChips() const;
	void AddBlueChips(int BlueChips);

	int GetGreenChips() const;
	void AddGreenChips(int greenChips);

	int GetBlackChips() const;
	void AddBlackChips(int blackChips);

	int GetWhiteChipVal() const;
	void SetWhiteChipVal(int whiteChipVal);

	int GetRedChipVal() const;
	void SetRedChipVal(int redChipVal);

	int GetBlueChipVal() const;
	void SetBlueChipVal(int blueChipVal);

	int GetGreenChipVal() const;
	void SetGreenChipVal(int greenChipVal);

	int GetBlackChipVal() const;
	void SetBlackChipVal(int blackChipVal);
};