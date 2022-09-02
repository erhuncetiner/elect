#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

#include "GameObject.h"
#include "gameSettingsReader.h"

using namespace std;
gameSettingsReader::gameSettingsReader(){
	gameSettingsReaderF();
}
void gameSettingsReader::gameSettingsReaderF(){
	int row = 2;
	int col = 2;
	double myArray[row][col];
    ifstream inputfile("erhun.txt");
    
    if (!inputfile.is_open()){
	
	    // If you get the error below, there is a problem with file A
	    cout << "Error opening file A" << endl;
	}

    //loop for input of A
    
    for (int r = 0; r < row; r++) //if r is smaller than the row number starting from 0, it increases
    // that is a common practice throughout this whole project, so I won't be recommenting for that
    {
        for (int c = 0; c < col; c++) 
        {
        	inputfile >> myArray[r][c];  
        	cout << myArray[r][c] << "\t";
        }
    }
}
