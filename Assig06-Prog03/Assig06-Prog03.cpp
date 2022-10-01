//Huan Chen Assignment06-program03
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double dist;
double seconds;

double fallingDistance(double seconds){
    dist = 0.5*9.8 * (pow(seconds, 2));
    return dist;
}
//This is the user-entered main
//int main(){
//    cout << "Enter seconds";
//    cin>>seconds;
//    fallingDistance(seconds);
//    cout << fixed<<fixed<<setprecision(2)<<dist;
//}

//This is the loop main
int main(){
    cout << "Seconds" << "\t\t\t" << "Distance" <<endl;
    cout <<"====================================="<<endl;
    
    for(int i =1; i<=10;i++){
        fallingDistance(i);
        cout << i<< "\t\t\t"<<fixed<<setprecision(2) <<dist << " meters"<<endl;
    }
    }
