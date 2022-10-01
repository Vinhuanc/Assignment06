//Huan Chen Assignment06-Program04
#include<iostream>
#include <cstdlib>
#include <ctime>
#include<string>
using namespace std;

void coinToss(){
   int num = rand() % 2 + 1;
   if(num == 1)
       cout<< "heads" << endl;
   else
   if (num == 2)
       cout<<"tails" <<endl;
}

int main()
{
   srand(static_cast<unsigned int>(time(0)));
   int toss;
   cout<< "How many times the coin should be tossed?" ;
   cin>> toss;

   for(int i = 1; i <= toss; i++)
   {
       cout<< i <<": "<<"\t\t\t" ;
       coinToss();
       
   }

return 0;
}


