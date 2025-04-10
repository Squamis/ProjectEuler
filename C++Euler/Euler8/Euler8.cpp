#include <iostream>
#include <string.h>
using namespace std;

int* stringToIntArray(string sn);
long long largestSubArray(int* array,int size,int subSize);
long long sumOfAdjacent(int* array,int startIndex,int adjacentSize);

int main(){
    //string testNum="12345";
    string number=
    "73167176531330624919225119674426574742355349194934"        
    "96983520312774506326239578318016984801869478851843"        
    "85861560789112949495459501737958331952853208805511"        
    "12540698747158523863050715693290963295227443043557"        
    "66896648950445244523161731856403098711121722383113"        
    "62229893423380308135336276614282806444486645238749"        
    "30358907296290491560440772390713810515859307960866"        
    "70172427121883998797908792274921901699720888093776"        
    "65727333001053367881220235421809751254540594752243"        
    "52584907711670556013604839586446706324415722155397"        
    "53697817977846174064955149290862569321978468622482"        
    "83972241375657056057490261407972968652414535100474"        
    "82166370484403199890008895243450658541227588666881"        
    "16427171479924442928230863465674813919123162824586"        
    "17866458359124566529476545682848912883142607690042"        
    "24219022671055626321111109370544217506941658960408"        
    "07198403850962455444362981230987879927244284909188"        
    "84580156166097919133875499200524063689912560717606"        
    "05886116467109405077541002256983155200055935729725"        
    "71636269561882670428252483600823257530420752963450";

    int* array=stringToIntArray(number);
    int length=number.length();
    long long largest=largestSubArray(array,length,13);
    cout<<largest<<endl;



    return 0;

};
//============================================================================
int* stringToIntArray(string sn){
    int length=sn.length();
    int* array= new int[length];
    int temp;

    for (int i=0;i<length;i++){
        //cout<<sn.substr(i,1);//substr(start,length) NOT (start,end)
        temp=stoi(sn.substr(i,1));
        array[i]=temp;
        //cout<<array[i]<<endl;
    }
    return array;
}
//============================================================================
long long largestSubArray(int* array,int size,int subSize){
    cout<<"size from largestSub"<<size<<endl;
    cout<<"sub from largestSub"<<subSize<<endl;

    long long largest=0;
    long long temp;
    for (int i=0;i<size-13;i++){
        //cout<<"lagestSubArray Running"<<endl;
       temp=sumOfAdjacent(array,i,subSize);
       //cout<<temp;
       if (temp>largest){
           largest=temp;
           //cout<<largest<<endl;
       } 
    }//end of for


    return largest;
}



//============================================================================

long long sumOfAdjacent(int* array,int startIndex ,int adjacentSize){
    cout<<array[startIndex];
    long long sum=array[startIndex];
   for (int i=startIndex+1; i<startIndex+adjacentSize;i++){
    cout<<array[i];
    sum=sum*array[i];
   }
   cout<<"sums to: ";
   cout<<sum<<endl;
    return sum;

}
