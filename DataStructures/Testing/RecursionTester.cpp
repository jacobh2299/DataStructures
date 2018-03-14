//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Harris, Jacob on 3/5/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester:: fib(int n)
{
    if( n == 0 || n == 1)
    {
        cout << "reached a base case" << endl;
        return 1;
    }
    else
    {
        cout << "calling fib with: " << n-1<< " and "<< n - 2 << endl;
        return fib(n - 1) + fib (n - 2);
    }
}

string RecursionTester:: mystery(string word)
{
    return "";
}

void RecursionTester:: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "Testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void RecursionTester:: testRecursionString()
{
    
}



