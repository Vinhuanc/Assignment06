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

//When an object is falling because of gravity, the following formula can be used to determine the distance the object falls in a specific time period: d = (1/2)gt^2. The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the amount of time, in seconds, that the object has been falling.
//Write a function named fallingDistance that accepts an object’s falling time (in seconds) as an argument. The function should return the distance, in meters, that the object has fallen during that time interval. Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments and displays the return value.
//• Display two significant digits for the distance fallen (i.e. 17.00, not 17)
//• Do not print data from the fallingDistance function, only return a value.
//Sample Output:
//Seconds   Distance
//===============================
//1 2 3 4 5 6 7 8 9
//  4.90 meters
// 19.60 meters
// 44.10 meters
// 78.40 meters
//122.50 meters
//176.40 meters
//240.10 meters
//313.60 meters
//396.90 meters
//490.00 meters
//10
//Press any key to continue . . .
