#include "Medicine.h"
#include <iostream>
using namespace std;

//getters
Medicine::Medicine()
{

}
Medicine::Medicine(string name_, int concentration_, int price_)
{
	name = name_;
	concentration = concentration_;
	quantity = 1;
	price = price_;
}
string Medicine::getName()
{
	return name;
}
int Medicine::getConcentration()
{
	return concentration;
}
int Medicine::getQuantity()
{
	return quantity;
}
int Medicine::getPrice()
{
	return price;
}

//setters
void Medicine::setName(string name_)
{
	name = name_;
}
void Medicine::setQuantity(int quantity_)
{
	quantity = quantity_;
}
void Medicine::setConcentration(int concentration_)
{
	concentration = concentration_;
}
void Medicine::setPrice(int price_)
{
	price = price_;
}


