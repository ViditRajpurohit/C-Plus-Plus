#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
//loop for printing space
for(int row=0;row<n;row++){
    for(int col=0;col<n-1-row;col++){
        cout<<" ";
    }
    //loop for printing stars
     for(int col=0;col<row+1;col++){
        cout<<"*";
    }
    cout<<endl;

}
}
