#pragma once
#include<iostream>
#include<vector>
#include "Medicine.h"
#include "string.h"
class Pharmacy
{
private:
	vector<Medicine> medicine;
public:
	//constructor
	Pharmacy();

	//constructor
	Pharmacy(vector<Medicine> med);

	//getter for vector<Medicine>
	vector<Medicine> getMedicines();

	//add method (adding medicine to the medicine vector)
	void add_medicine(Medicine);

	//delete method (deleting a medicine by it's name)
	void delete_medicine(string);

	//sorting and displying the medicines in alphabetical order
	void sort_medicine_by_name();

	//sorting and displying the medicines searched by string/name in alphabetical order
	void display_medicine_by_certain_string(string);

	//size method created for tests 
	int size()
	{
		return medicine.size();
	}
    
    //searches for meds that have a quantity less than given quantity and displays them
    void search_medication_by_quantity(int quant);

    //sorts the meds by price
    void group_meds_by_price();
};
