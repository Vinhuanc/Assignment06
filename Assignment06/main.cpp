//Huan Chen Assignment06-Program01
#include<iostream>
#include<string>
#include<fstream>
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
    cout << "The average of all the numbers in the file: "<<avg<<"\n";

}
