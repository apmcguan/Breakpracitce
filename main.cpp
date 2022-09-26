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
      
      
        
      }
      else{
       cout<<"negative value encountered of "<<dataTemp<<"."<<endl;
        cout<<"Will not use rest of the data.."<<endl;
        cout<<"the sum of vaild data is: "<<sumData<<endl;
        cout<< "the number of vaild data points is: "<< counter<<endl;
        cout<< "The average of teh vaild datat is "<<(static_cast<double>(sumData) / counter)<<endl;
        break;
        
      
        
      }
    }
  
  
}