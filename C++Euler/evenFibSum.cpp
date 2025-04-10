#include <iostream>
using namespace std;
//working 
//this program prints the sum of the even values in the fib sequence under the vaule of 4 million
//written by thomas haffenreffer 
int main(){
    int current=1;
    int last=0;
    int temp;

    int sum=0;
    while(current<4000000){//while under 4,000,000
        

        if(current%2==0){
            sum=sum+current;}

        temp=current;
        current=current+last;
        last=temp;

    }//end of while loop

    cout<<"the sum is "<<sum<<endl;

}// end of main
