//
//  SortingTester.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 3/15/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <iostream>
#include "/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Controller/FileController.hpp"
#include "/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Controller/Tools/Timer.hpp"


class SortingTester
{
private:
    void quickSort(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> info, int small, int large);
    int swapCount;
    
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
