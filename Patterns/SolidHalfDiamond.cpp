#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;    
    for(int row=0;row<n;row++){
        if(row<=n/2-1){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
            }
        }
        else{
            for(int col=0;col<n-row-1;col++){
                cout<<"* ";
            }
        }

           
        cout<<endl;
            
 }
        
    }
