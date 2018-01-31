//
//  Timer.hpp
//  DataStructures
//
//  Created by Harris, Jacob on 1/31/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#include <time.h>
#include <assert.h>
#include <iostream>
#include <stdio.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};



#endif /* Timer_hpp */
