#pragma once
#include<iostream>
#include<vector>
#include "Medicine.h"
class Pharmacy
{
private:
	vector<Medicine> medicine;
public:
	Pharmacy();
	Pharmacy(vector<Medicine> med);
	void add_medicine(Medicine);
};
