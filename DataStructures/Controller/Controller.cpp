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
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Data/crime.csv");
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
    
    
    
    cout << "Print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();

    codeTimer.resetTimer();
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Data/crime.csv");
    
    for(int i = 234; i<400; i+=30)
    {
        cout << i << " is " << myData[i] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jhar3975/Documents/Swift/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for(int i = 1; i < myData.size(); i++)
    {
        if(myData [minIndex] > myData[i])
        {
            minIndex = i;
        }
        if(myData [maxIndex] > myData[i])
        {
            maxIndex = i;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex]<<endl;
    cout << "The largest Crime stat is as " <<maxIndex<< " and it is: " << myData[maxIndex]<<endl;
    searchTimer.displayInformation();
}



