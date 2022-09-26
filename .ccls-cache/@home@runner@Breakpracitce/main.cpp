#include <iostream>
#include <fstream>

using namespace std;

int main() {
  //declare variables
  int dataTemp;
  int sumData = 0;
  int counter = 0;
  
  //load input file 
  ifstream inFile; //declare stream variable
  inFile.open("NumberData1.txt");

  //load all data in while loop
  while (inFile >> dataTemp)
    {
       
      
      inFile >> dataTemp;
      //cout << dataTemp <<endl;
      if (dataTemp>=0)
      {
        sumData = sumData + dataTemp;
      counter ++;
        
      
        
      }
      else{
       
        
        
        
        
      }
    }
  
  
}