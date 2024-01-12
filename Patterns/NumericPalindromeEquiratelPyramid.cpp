#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row+1;col++){
            cout<<"  ";
        }
    for(int k=1;k<=row;k++){
        cout<<k<<" ";
    }
    for(int p=row-1;p>=1;p--){
        cout<<p<<" ";
    }    
    cout<<endl;
    }
    
}