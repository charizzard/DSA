#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string time;
    string ans;
    
    cin >> time;
    
    
    if(time[8]=='P' )
    { if(time[1]<=55 && time[0]==48)
        {time[0]='1';
        time[1]=time[1]+2;
        
        }
      else if(time[1]==56 && time[0]==48)
          {time[0]='2';
        time[1]=48;
          
        }
     else if(time[1]==57 && time[0]==48)
         {time[0]='2';
        time[1]=49;
          
        }
      else if(time[1]=='0' && time[0]==49)
          { time[0]='2';
           time[1]= '2';
           
          }
     else if(time[1]=='1' && time[0]==49){
         time[0]='2';
           time[1]='3';
        
          }
     }
     if(time[8]=='A' && time[0]=='1' && time[1]=='2'){
        time[0]='0';
        time[1]='0';
         
       }  
     
    for(int i=0; i<8; i++)
    {
        ans+=time[i];
    
    }
    
     cout<<ans<<endl; 
}
