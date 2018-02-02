//
//  FileController.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 1/31/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

using namespace std;

#include "../Data/CrimeData.hpp"
#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};


#endif /* FileController_hpp */
