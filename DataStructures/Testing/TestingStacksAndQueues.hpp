//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 2/28/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include "/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Controller/Tools/Timer.hpp"
#include "/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Controller/FileController.hpp"
#include "/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Model/Structures/Linear/Queue.hpp"
#include "/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Model/Structures/Linear/Stack.hpp"
#include "/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Model/Structures/Linear/List.hpp"
#include <iostream>
using namespace std;

class TestingStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};
#endif /* TestingStacksAndQueues_hpp */
