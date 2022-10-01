//Huan Chen Assignment06-Program01
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    ifstream inputFile;
    double numbers, total=0, count;
    
    const string fileName = "/Users/hchen24/Desktop/numbers.txt";
    inputFile.open(fileName);
  
    cout << "opening file"<<endl;
    if(inputFile){
        cout << "*******  Data from the file:  *******" <<endl;
    while(inputFile >> numbers){
        cout << numbers<< endl;
        total+=numbers;
        count++;
    }
    inputFile.close();
    }else{
        cout<< "Error opening the file.";
        return 0;
    }
    double avg=total/count;
    cout<<"------------------------"<<"\n";
    cout <<"The sum of all the numbers in the file: "<< total<<"\n";
    cout << "The number of numbers in a file: "<< count<<"\n";
    cout << "The average of all the numbers in the file: "<<fixed<<setprecision(3)<<avg<<"\n";

}

//Program #1
//Download the “Random.txt” file (file name may differ). This file contains a long list of random numbers. Copy the file to your hard drive, place it in the same folder as the CPP file you are coding (inside the solution folder) and then write a program that opens the file, reads all the numbers from the file, and calculates the following:
//A) The number of numbers in the file
//B) The sum of all the numbers in the file (a running total)
//C) The average of all the numbers in the file.
//The program should display the number of numbers found in the file, the sum of the numbers, and the average of the numbers.
//• You will need a text file called “Random.txt” to complete this program. You can download it from D2L. Save it in the same directory as your source file.
//• Make sure you test for a successful file open operation, if it fails to open, display an error message – if you have trouble getting your program to open the file, please email me
//• Use a constant to refer to the file location.
//Sample Output (values may differ from actual results for this particular random file):
//Number of numbers: 201
//Sum of the numbers: 106042
//Average of the numbers: 527.572
//Press any key to continue . . .
