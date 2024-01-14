#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //Code for Upper Part

    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        for(int col=0;col<row+row+1;col++){
            cout<<"  ";
        }
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Code for Lower Part

    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        for(int col=0;col<n*2-1-row-row;col++){
            cout<<"  ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}