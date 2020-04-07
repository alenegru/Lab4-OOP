#pragma once
#include "Pharmacy.h"
#include<string.h>
#include<vector>

Pharmacy::Pharmacy()
{

}

Pharmacy::Pharmacy(vector<Medicine> med)
{
	for (int i = 0; i < med.size(); i++)
	{
		medicine.push_back(med[i]);

	}
	if (medicine.size() > 2)
	{
	
		for (int i = 0; i < medicine.size() - 1; i++)
		{
			for (int j = i + 1; j < medicine.size(); j++)
			{
				if (medicine[i].getName() == medicine[j].getName() && medicine[i].getConcentration() == medicine[j].getConcentration())
				{
					medicine[i].setQuantity(medicine[i].getQuantity() + 1);
					medicine.erase(medicine.begin() + j);
				}
			}
		}
	}
}
vector<Medicine> Pharmacy::getMedicines()
{
	return medicine;
}

void Pharmacy::add_medicine(Medicine med)
{
	int ok = 0;
	for (int i = 0; i < medicine.size(); i++)
	{
		
		if (medicine[i].getName() == med.getName() && medicine[i].getConcentration() == med.getConcentration())
		{
			medicine[i].setQuantity(medicine[i].getQuantity() + 1);
			ok = 1;
			break;
		}
		
	}
	if(ok==0)
		medicine.push_back(med);
}

void Pharmacy::delete_medicine(string med)
{

	for (int i = 0; i < medicine.size(); i++)
	{
		if (medicine[i].getName() == med)
		{
			medicine.erase(medicine.begin() + i);
			return;
		}
	}
}

//created to display the medicines from certain vectors 
//uesd in methods 
void display(vector<Medicine>a)
{
	int i = 0;
	while (i < a.size())
	{
		cout << a[i].getName() << " " << a[i].getConcentration() << " " << a[i].getQuantity() << " " << a[i].getPrice() << endl;
		i++;

	}
}


//created to use for the method display_medicine_by_certain_string
void sort_by_name(vector<Medicine> med)
{
	
	Medicine aux;
	int j;
	int i = 0;
	while (i < med.size() - 1)
	{
		j = i + 1;
		while (j < med.size())
		{
			if (med[i].getName() > med[j].getName())
			{
				aux = med[j]; med[j] = med[i]; med[i] = aux;
			}
			j++;
		}
		i++;
	}
	display(med);
}
void Pharmacy::sort_medicine_by_name()
{

	Medicine aux; 
	int j; 
	int i = 0; 
	while (i < medicine.size() - 1)
	{ 
		j = i + 1; 
		while (j < medicine.size())
		{ 
			if (medicine[i].getName() > medicine[j].getName())
			{ 
				aux = medicine[j]; medicine[j] = medicine[i]; medicine[i] = aux;
			}
			j++;
		}
		i++;
	}
	display(medicine);

}
void Pharmacy::display_medicine_by_certain_string(string find)
{
	vector<Medicine> meds;
	int size_meds = 0;
	if (find == "")
	{
		sort_medicine_by_name();
	}
	else
	{
		for (int i = 0; i < medicine.size(); i++)
		{
			
			string name_med = medicine[i].getName();
			if (name_med.find(find) != string::npos)
			{
				meds.push_back(medicine[i]);
			}
		}

	}
	if (meds.size() > 0)
	{
		sort_by_name(meds);
	}
	else
	{
		cout << "no such medcine"<<endl;
	}
    
}

void Pharmacy::search_medication_by_quantity(int quant) {
    if (medicine.empty() == false) {
        for (int i = 0; i != medicine.size(); i++) {
            if (medicine[i].getQuantity() < quant) {
                cout << "Name: " << medicine[i].getName() << "\nConcentration: " << medicine[i].getConcentration() << "\nPrice: " << medicine[i].getPrice()
                    << "Quantity: " << medicine[i].getQuantity() << endl;
            }
        }
    } else cout << "There are no medicines.";

}

void Pharmacy::group_meds_by_price() {
    if (medicine.empty() == false) {
        for (int i = 0; i != medicine.size() - 1; i++)
            for (int j = i + 1; j != medicine.size(); j++)
                if (medicine[i].getPrice() > medicine[j].getPrice()) {
                    Medicine aux = medicine[i];
                    medicine[i] = medicine[j];
                    medicine[j] = aux;
                }
        for (int i = 0; i != medicine.size(); ++i) {
            cout << "Name: " << medicine[i].getName() << "\nPrice: " << medicine[i].getPrice() << endl;
        }
    } else cout << "There are no medicines.";
}

void Pharmacy::update_price(string name, int price) {
    if (medicine.empty() == false) {
        for (int i = 0; i != medicine.size(); i++) {
            if (medicine[i].getName() == name)
                medicine[i].setPrice(price);
        }
    } else cout << "There are no medicines.";
}
