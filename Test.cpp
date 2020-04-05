#include "Test.h"
#include "Pharmacy.h"
#include "Medicine.h"
#include <assert.h>

void test()
{
	vector<Medicine>meds, m;
	Medicine med("NO-spa", 20, 30), med2("Paracetamol", 23, 45), med3("Paracetamol", 23, 5);
	meds = { med, med2, med3 };
	Pharmacy apotheke(meds);
	assert(apotheke.size() == 2);

	apotheke.add_medicine(Medicine("Ibrubrofen", 10, 2));
	apotheke.add_medicine(Medicine("Ibrubrofen", 10, 2));

	apotheke.add_medicine(Medicine("Nurofen", 3, 5));

	assert(apotheke.size() == 4);
	apotheke.delete_medicine("Paracetamol");
	assert(apotheke.size() == 3);


	apotheke.display_medicine_by_certain_string("fen");
	//Paracetamol was deleted 
	apotheke.display_medicine_by_certain_string("Paracetamol");


	//assert(farmacie.getterLastMedicamentName() == "Nurofen");

	cout << " Alles palleto !" << endl;
}

