#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if(n >= 1 && n <= 9)
  {
      switch(n)
      {
        
        case 1 : std::cout << "one";break;
        case 2 : std::cout << "two";break;
        case 3 : std::cout << "three";break;
        case 4 : std::cout << "four";break;
        case 5 : std::cout << "five";break;
        case 6 : std::cout << "six";break;
        case 7 : std::cout << "seven";break;
        case 8 : std::cout << "eight";break;
        case 9 : std::cout << "nine";break;
        
      }
  }
  else
     {std::cout << "Greater than 9 ";}
    return 0;
}
