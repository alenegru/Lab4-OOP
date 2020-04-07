#pragma once
#include <iostream>
using namespace std;

class Medicine
{

private:
	string name;
	int concentration;
	int quantity;
	int price;

public:
	Medicine();
	Medicine(string, int, int);
    //getters
	string getName();
	int getConcentration();
	int getQuantity();
	int getPrice();
    //setters
	void setName(string);
	void setConcentration(int);
	void setQuantity(int);
	void setPrice(int);
};
