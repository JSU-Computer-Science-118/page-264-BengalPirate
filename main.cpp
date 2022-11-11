// Brandon Newton J00610524 11/9/2022
// Due Wednesday November 9, 2022
// Roots of the quadratic equation p264


#include <iostream>;
#include <cmath>;
using namespace std;

int main() 
{

  int number;

  cin >> number;
  bool isPrime = true;
  const int prime[]{ 2, 3, 5, 7, 9, 11, 13, 17, 19, 23, 29, 31};
if (number > 1000||number < 2) {
    cout << "out of bound";
  }
  else {
    for (const int i : prime)
        if (i != number)
            if (number % i == 0) {
                if (isPrime)
                  cout << " ";
              cout << i << " ";
              isPrime = false;
            }
      if (isPrime) {
        cout << "Number " << number << " is prime!";
      }
    return 0;
      }
            
  }
