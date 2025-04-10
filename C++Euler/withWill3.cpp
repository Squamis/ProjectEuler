#include <iostream>
using namespace std;

bool isPrime(int i);

int main(){
  int value;
  cout << "Enter the value: " << endl;
  cin >> value;
  for (int i = value-1; i > 1; i--) {
      if (value % i == 0) { //if a factor of value
        cout<<" is?" <<i<< " a factor of "<<value<<endl;
        if (isPrime (i)) { //if is prime
          cout << "is prime ran" << endl;
          cout << i << endl;
          //break;
       }
   }
  }
  


}



bool isPrime(int i){

   for(int j = i-1; j > 1; i--) { //we can do /2 because n/2 *n/2 > n
      if(i % j == 0) {
         return false;
      }
      return true;

  }//end of i for loop
  
}//end of isPrime
