#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total=1;
    for(int row=0;row<n;row++){
        
        for(int col=0;col<row+1;col++){
            cout<<total<<" ";
            total++;
        }
        cout<<endl;
    }
}