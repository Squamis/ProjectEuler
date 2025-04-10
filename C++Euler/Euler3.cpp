#include <iostream>
using namespace std;

//this program finds the largest prime factor of 600851475143
//note to self, you can start high and move low
//this is not working, I have a running version of this in python 
int main(){
    long int number=600851475143;
        for (long int i=number/3;i>=0;i--){ //I can cut this in half because we can not have the largest prime factor just be the value times itself 
            if (number % i==0){
                cout<<i<<endl;
            }
            




        }//end of main search for loop
        




    return 0;

}//end of main
