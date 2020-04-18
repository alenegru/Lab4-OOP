//
//  Controller.cpp
//  lab4
//
//  Created by Alexandra Negru on 07/04/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>
#include <string>

using namespace std;

Controller::Controller() : Pharmacy() {

}

void Controller::add_med() {
    cout << "Add med.\n";

    string name;
    double concentration;
    double price;

    cout << "Name: ";
    cin >> name;

    cout << "Concentration: ";
    cin >> concentration;

    cout << "Price: ";
    cin >> price;
    
    Medicine m(name, concentration, price);
    add_medicine(m);
    
    int option;
    cout << "Redo/Undo?\n1.Redo\n2.Undo\n3.Go back to menu.\nYour option: ";
    cin >> option;
    if (option == 1) {
        add_medicine(m);
    } else if (option == 2) {
        delete_medicine(m.getName());
    } else return;
}

void Controller::delete_med() {
    cout << "Delete med\n";
    cout <<"Please enter the name of the medicine: ";
    string name;
    cin >> name;
    delete_medicine(name);
    
    int option;
    cout << "Redo/Undo?\n1.Redo\n2.Undo\n3.Go back to menu.\nYour option: ";
    cin >> option;
    if (option == 1) {
        for (int i = 0; i < size(); i++) {
            if (getMedicines()[i].getName() == name) {
                add_medicine(getMedicines()[i]);
                cout << "Added back!\n";
                break;
            }
        }
    } else if (option == 0)
        delete_med();
    else return;
}

void Controller::update_med() {
    cout << "Update med\n";
    cout << "Please enter the name of the medicine:";
    string name;
    cin >> name;
    
    int price;
    cout << "Please enter the price:";
    cin >> price;
    Pharmacy::update_price(name, price);
}

void Controller::sort_med_name() {
    Pharmacy::sort_medicine_by_name();
}

void Controller::search_med_quantity() {
    cout << "Please enter the quantity: ";
    int quant;
    cin >> quant;
    Pharmacy::search_medication_by_quantity(quant);
}

void Controller::group_by_price() {
    Pharmacy::group_meds_by_price();
}

Controller::~Controller(){
}
