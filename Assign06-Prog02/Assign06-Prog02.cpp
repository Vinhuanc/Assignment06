//Huan Chen Assignment06-Program02
#include<iostream>
#include<iomanip>
using namespace std;
double price;
double wholesale;
double markup;

double calculateRetail(double wholesale, double markup){
    price = (wholesale * (markup/100)) + wholesale;
    return price;
}

int main(){
    cout<<"Enter the item's wholesale cost: ";
    cin>>wholesale;
    if(wholesale <= 0){
        cout << "Invalid entered price/markdown. Wholesale price cannot be less/equal to 0."<<"\n";
        return 0;
    }
    cout<<"Enter the item's markup percentage: ";
    cin>>markup;
    
    if( markup <0){
        cout << "Invalid entered markdown.  Markup percentage cannot be less than 0."<<"\n";
        return 0;
    }
    
    calculateRetail(wholesale, markup);
    cout<< "The item's retail price is $ "<<fixed<<setprecision(2)<< price<< endl;
}

//Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. It should then display the item’s retail price. For example: if an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00. If the item’s wholesale cost is 5.00 and its markup percentage is 50% , then the item’s retail price is 7.50.
//The program should have a function named calculateRetail that receives the wholesale cost and markup percentage as arguments and returns the retail price of the item. Do not accept negative values for either the wholesale cost of the item or the markup percentage.
//• The calculateRetail function should not print anything to cout, instead it returns the value and the main-function does the printing
//Sample Output:
//Enter the item's wholesale cost: 14.25
//Enter the item's markup percentage: 95
//The item's retail price is $27.79
//Press any key to continue . . .
