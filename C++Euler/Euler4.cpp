#include <iostream>
using namespace std;

//find the largest palindrome made fro mthe product of two 3 dig numbers
//Thomas Haffenreffer

 //remember that you have to declare a function in c++ before calling it
bool isPalindrome(int); //this function uses a reverse number and then compares this to the orginal, if they are equal then the original is a palindrome 





int main(){
    int sum;
    bool solved=false;
    for (int i=999;i>990;i--){
        for (int y=999;y>990;y--){
            //cout<<y*i<<endl; this is working
            sum=y*i; 
            if (isPalindrome(sum)==True){
               solved=true; 




            }//end of if statmet
            if (solved=true){break;}

        }//end of for loop y
        if (solved=true){break;}

    }//end of for loop i


    return 0;
}//end main


bool isPalindrome(int sumFromMain){     
    int remainder, revNumber; 

    while(sumFromMain > 0){
        remainder=sumFromMain % 10;
        sumFromMain = sumFromMain / 10;
        revNumber=(revNumber * 10) + remainder;
        
        

    }//end of while loop sumFromMain >0
    if (sumFromMain==revNumber)

}
