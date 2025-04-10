#include <iostream>
using namespace std;
//by thomas haffenreffer
//this program finds all multibles of 3 or 5 under 1000 and returns the sum
//working
int main()
{
  int sum; //this will be our sum
  for(int i = 1;i<1000;i++){ //note that this is asking for the sum of %3 OR %5, not and
    //cout<<"i equals "<<i<<endl;
    if (i%5==0||i%3==0){
      sum=sum+i;
  }// end of is %3
}//end of the for loop
  cout<<"the sum is "<<sum<<endl;
//  cout<<"e equals"<<x<<endl;

}//end of main
