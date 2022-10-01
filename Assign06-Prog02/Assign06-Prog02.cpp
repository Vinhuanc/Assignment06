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

