//Huan Chen Assignment06-Program01
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream inputFile;
    int numbers;

    inputFile.open("/Users/hchen24/Desktop/numbers.txt");
  
    cout << "opening file"<<endl;
    if(inputFile){
        cout << "*******  Data from the file:  *******" <<endl;
    while(inputFile >> numbers){
        cout << numbers<< endl;
    }
    inputFile.close();
    }else{
        cout<< "Error opening the file.";
        return 0;
    }

}
