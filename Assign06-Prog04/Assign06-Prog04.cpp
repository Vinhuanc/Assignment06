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

//Write a function named coinToss that simulates the tossing of a coin. When you call the function, it should generate a random number in the range of 1 through 2. If the random number is 1, the function should display “heads”. If the random number is 2, the function should display “tails”. Demonstrate the function in a program that asks the user how many times the coin should be tossed and then simulates the tossing of the coin that number of times.
//• The coinToss function is a non-returning function, thus you should print the result of the coin toss from the function itself
//• Use the C++ Random Number Generator
//o Generates a random number between 0 and 32767.
//o You have to seed the generator before using it. A good seed value is the current
//time. Use the following code to seed your generator.
//unsigned seed = time(0); srand(seed);
//o To generate a random number, between 1 and 2, use the expression number = 1 + rand() % 2;
//o You will need to include the following header files: #include <cstdlib>
//#include <ctime>
//Sample Output:
//How many tosses should I make? 7
//1: tails
//2: heads
//3: heads
//4: heads
//5: tails
//6: heads
//7: heads
//Press any key to continue . . .
