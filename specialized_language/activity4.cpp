#include <iostream>
using namespace std;

int main(){
    //declare variables
    
    int  litterSize;
    int YearlyLitters;
    int annualMice;


    

    cout <<"One female mouse may give birth to ";

    annualMice = litterSize*YearlyLitters;
    
    cout <<annualMice  ;
    cout <<" to " ;
    //assign values to variables and output
        litterSize = 14;
        YearlyLitters = 10;
    annualMice = litterSize *YearlyLitters;

    cout <<annualMice;
    cout <<" mice per year. ";
    return 0;
}