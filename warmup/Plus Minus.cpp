#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,a,i,neg=0,zero=0,pos=0;
   float neg1,pos1,zero1;
   
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++){
       cin >> a;
        if(a==0){zero++;}
        if(a<0){neg++;}
        if(a>0){pos++;}    
    }
      neg1=(float)neg/n;
    zero1=(float)zero/n;
    pos1=(float)pos/n;
    cout<<pos1<<endl;
    cout<<neg1<<endl;
    cout<<zero1<<endl;
    
   return 0;
}           
        
    
  
