/* Write a program that prints out numbers... let's say 0 to 100. 
But it prints 'fizz' for multiples of 3 and 'buzz' for multiples of 5.
It will print 'fizzbuzz' for multiples of both 3 and 5 */

#include <iostream>
using namespace std;

int main(){
string fizz = "fizz";
string buzz = "buzz";


  for(int i = 1; i <= 100; i++){
    if(i % 3 != 0 && i % 5 != 0){
      cout << i << "\n";
    }
    else if (i % 3 == 0 && i % 5 == 0) {
      cout << fizz << buzz << "\n";
    } else if (i % 3 != 0 && i % 5 == 0){
      cout << buzz << "\n";
    } else if (i % 3 == 0 && i % 5 != 0){
      cout << fizz << "\n"; 
    } 
    else {
        cout << "what the fuck";
  }

}

}