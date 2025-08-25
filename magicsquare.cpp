#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=3;
    // int c=0;
    
    int s[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    int max=INT32_MAX;
    int m[8][3][3]={
        {{8,1,6},{3,5,7},{4,9,2}},
        {{6,1,8},{7,5,3},{2,9,4}},
        {{4,9,2},{3,5,7},{8,1,6}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{8,3,4},{1,5,9},{6,7,2}},
        {{4,3,8},{9,5,1},{2,7,6}},
        {{6,7,2},{1,5,9},{8,3,4}},
        {{2,7,6},{9,5,1},{4,3,8}}    
    };
    for(int i=0;i<8;i++){
       int c=0;
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
               c+=abs(m[i][j][k]-s[k][j]);
            }
        }
        if(c<max){
           max=c;
        }
    }
       cout<<max<<endl;
   
}
