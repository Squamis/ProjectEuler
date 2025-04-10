#include<cmath>
#include <iostream>
using namespace std;


int main(){

    int a,b,c,product;
    for (int m=1; m<100;m++){
        for (int n=1; n<m; n++){


        a=pow(m,2)-pow(n,2);
        b=2*n*m;
        c=pow(m,2)+pow(n,2);
        
        if(a+b+c==1000){
            product=a*b*c;
            cout<<a<<endl<<b<<endl<<c<<endl;
            cout<<product<<endl;
            return 0;
        }
        }//end of n for loop
    }//end of m for loop

}// end of main
