//
//  Controller.hpp
//  lab4
//
//  Created by Alexandra Negru on 07/04/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <stdio.h>
#include "Pharmacy.h"
class Controller: public Pharmacy {
public:
    Controller();
    ~Controller();

    //adds medicine
    void add_med();
    //deletes medicine
    void delete_med();
    //updates name, concentration, price, quantity
    void update_med();
    //searches meds by name
    void sort_med_name();
    //searches for meds that have a quantity less than given quantity and displays them
    void search_med_quantity();
    //sorts the meds by price
    void group_by_price();
};
#endif /* Controller_hpp */
