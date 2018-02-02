//
//  FileController.cpp
//  DataStructures
//
//  Created by Harris, Jacob on 1/31/18.
//  Copyright © 2018 Harris, Jacob. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //exclude header row
            if(rowCount != 0)
            {
                //Create a CrimeData instance from the line
                CrimeData row(currentCSVLine);
                crimeVector.push_back(row);
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimeVector;
}
