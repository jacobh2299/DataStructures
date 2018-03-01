//
//  TestingStacksAndQueues.cpp
//  DataStructures
//
//  Created by Harris, Jacob on 2/28/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

void TestingStacksAndQueues:: stackVersusList()
{
    Stack<int> numberStack;
    LinkedList<int> numberList;
    Timer stackTimer, listTimer;
    
    for(int index = 0; index < 10; index++)
    {
        numberStack.add(index);
        numberList.add(index);
    }
    
    cout << "Get the third from the last item for the structure" << endl;
    
    int index = 0;
    int value = -99;
    stackTimer.startTimer();
    
    while(index < 7)
    {
        cout << numberStack.pop() << endl;
        
        index++;
    }
    
    stackTimer.stopTimer();
    index = 0;
    listTimer.startTimer();
    value = numberList.getFromIndex(7);
    listTimer.stopTimer();
    
    cout << "The Time it took to work with stack" << endl;
    stackTimer.displayInformation();
    cout << "The time it took to work with list" << endl;
    listTimer.displayInformation();
    
    cout << "What is left in the stack" << endl;
    //Here is how to cast as a parent type to get access
    //to a method that is not defined in the subclass.
    LinkedList<int> * listVersion = &numberStack;
    int stackSize = listVersion->getSize();
    cout << "Stack size is: " << stackSize << endl;
    for(int index = 0; index < stackSize; index++)
    {
        cout << numberStack.pop() << endl;
    }
    
    cout << "What is left in the list" << endl;
    int listSize = numberList.getSize();
    cout << "List size is: " << listSize << endl;
    for(int index = 0; index < listSize; index++)
    {
        cout << numberList.getFromIndex(index) << "\t";
    }
}
void TestingStacksAndQueues:: stackVersusQueue()
{
    
}
void TestingStacksAndQueues:: queueVersusList()
{
    
}
