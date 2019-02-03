#pragma once
#include <iostream>
#include <string>

class card {

private :
	std::string suit_;
	int cardNo_;

public :
	card();
	card(int cardNo, std::string suit);

	std::string GetSuit() const;
	void SetSuit(std::string suit);
	int GetCardNo() const;
	void SetCardNo(int cardNo);
};
