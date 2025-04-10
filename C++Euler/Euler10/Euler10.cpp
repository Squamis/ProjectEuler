#include <iostream>
using namespace std;


bool isPrime(int i);

bool sieveOfEratosthenesIsPrime(i);

int main(){
    long long sum=0;
    for (int i=2;i<2000000;i++){
        if (brootIsPrime(i)==true)
        { sum=sum+i;}
    
    
   } 

    cout<<sum<<endl;

    return 0;
}




bool sieveOfEratosthenesIsPrime(i){
    if(i!=2 && i%2==0){
        return false;
    }
    if(i>=9 && i%3==0){
        return false;
    }




}//end of sieveOfEratosthenesiIsPrime






bool brootIsPrime(int i){
    //cout<<"is prime ran"<<endl;
    //if(i==0||i==1){
     //   return false;
   // }
    if (i>2&&i%2==0){
        return false;
    }
    
    for(int j = 2; j < i; j++) { 
            //cout<<"inter loop ran"<<endl;
            if(i % j == 0) {
                return false;
            }//end of 
        }

  return true;
}//end of isPrime
