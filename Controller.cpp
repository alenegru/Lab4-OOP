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
    cout << "Add med\n";
    cout <<"Please enter the name of the medicine: ";
    string name;
    cin >> name;
    while (cin.fail()) {
        cout << "Error" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> name;
    }
    
    int concentration;
    cout << "Please enter the concentration: ";
    cin >> concentration;
    while (cin.fail()) {
        cout << "Error" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        std::cin >> concentration;
    }
    Medicine m;
    m.setName(name);
    m.setConcentration(concentration);
    Pharmacy::add_medicine(m);
}

void Controller::delete_med() {
    cout << "Delete med\n";
    cout <<"Please enter the name of the medicine: ";
    string name;
    cin >> name;
    while (cin.fail()) {
        cout << "Error" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> name;
    }
    Pharmacy::delete_medicine(name);
}

void Controller::update_med() {
    cout << "Update med\n";
    cout << "Please enter the name of the medicine:";
    string name;

    cin >> name;
    while (cin.fail()) {
        cout << "Error" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> name;
    }
    int price;
    cout << "Please enter the price:";
    
    cin >> price;
    while (cin.fail()) {
        cout << "Error" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> price;
    }
    Pharmacy::update_price(name, price);
}

void Controller::sort_med_name() {
    Pharmacy::sort_medicine_by_name();
}

void Controller::search_med_quantity() {
    cout << "Please enter the quantity: ";
    int quant;
    cin >> quant;
    while (cin.fail()) {
        cout << "Error" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> quant;
    }
    Pharmacy::search_medication_by_quantity(quant);
}

void Controller::group_by_price() {
    Pharmacy::group_meds_by_price();
}

Controller::~Controller(){
}
