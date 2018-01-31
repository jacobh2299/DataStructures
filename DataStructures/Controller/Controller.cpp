//
//  Controller.cpp
//  DataStructures
//
//  Created by Harris, Jacob on 1/31/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for(int i = 0; i < 1000000; i++)
    {
        cout << "The index is " << i << "\t";
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    
}
