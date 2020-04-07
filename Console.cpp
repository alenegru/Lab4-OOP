//
//  Console.cpp
//  lab4
//
//  Created by Alexandra Negru on 07/04/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#include "Console.hpp"
#include <iostream>
#include "Medicine.h"

using namespace std;

Console::Console() {
}

Console::~Console() {
}

void Console::main() {
    cout << "Menu\n\n";

    int option = 69;

    cout << "Choose option:\n1.Add medicine.\n2.Delete medicine.\n3.Update medicine.\n4.Sort meds by name.\n5.Search meds by quantity.\n6.Group by price\n7.Exit\nYour option: ";
    
    while (option != 0) {
        cin >> option;
        while (cin.fail()) {
            cout << "Error" << endl;
            cin.clear();
            cin.ignore(256, '\n');
            cin >> option;
        }
        if (option == 1)
            Controller::add_med();
        else if (option == 2)
            Controller::delete_med();
        else if (option == 3)
            Controller::update_med();
        else if (option == 4)
            Controller::sort_medicine_by_name();
        else if (option == 5)
            Controller::search_med_quantity();
        else if (option == 6)
            Controller::group_by_price();
        else if (option == 7)
            break;
        else
            cout << "\nInvalid option.";
        
        cout << "Choose option:\n1.Add medicine.\n2.Delete medicine.\n3.Update medicine.\n4.Sort meds by name.\n5.Search meds by quantity.\n6.Group by price\n7.Exit\nYour option: ";
    }
}
