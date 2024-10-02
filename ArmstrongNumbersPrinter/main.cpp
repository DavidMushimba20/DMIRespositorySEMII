#include <iostream>
#include <math.h>

using namespace std;

bool isArmstrong(int n){
    bool y = false;
    int currentNum = 0;
    string nToString = to_string(n);
    string stringNum = "";
    int len = nToString.length();
    int total = 0;
    for(char c:nToString){
         stringNum=c;
         currentNum =  atoi(stringNum.c_str());
         if(currentNum>0){
            total+=pow(currentNum,len);
         }
    }
      if(total==n)
        return true;
    return y;
}

void PrintArms(int a,int b){
    cout    << " ARMSTRONG NUMS FROM "<< a<<" UP TO  " << b << endl;
    bool isIt=false;
    int x=0;
    for(int i=a; i<=b;i++){
       isIt=isArmstrong(i);
       if(isIt){
            cout  <<  i<< endl;
        }
    }
}

int main()
{
    PrintArms(100,10000);
    return 0;
}
