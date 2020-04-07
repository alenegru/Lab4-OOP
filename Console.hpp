//
//  Console.hpp
//  lab4
//
//  Created by Alexandra Negru on 07/04/2020.
//  Copyright © 2020 Alexandra Negru. All rights reserved.
//

#ifndef Console_hpp
#define Console_hpp

#include <stdio.h>
#include "Controller.hpp"

class Console : public Controller {
public:
    Console();

    ~Console();

    void main();
};
#endif /* Console_hpp */
