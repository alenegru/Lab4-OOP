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

void Pharmacy::add_medicine(Medicine med)
{
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