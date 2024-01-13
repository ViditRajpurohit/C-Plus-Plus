#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total=1;
    for(int row=0;row<n;row++){
        
        for(int col=0;col<row+row+1;col++){
            if(col==1 || col%2==1){
                cout<<"* ";
            }
            else{
                cout<<total++<<" ";
                
            }
        }
        cout<<endl;
    }

    //loop for second part

    int start=total-n;

    for(int row=0;row<n;row++){
        int k=start;
        for(int col=0;col<n*2-1-row-row;col++){
            if(col==1 || col%2==1){
                cout<<"* ";
            }
            else{
                cout<<k++<<" ";
            }
        }
        cout<<endl;
        start=start-n+row+1;
    }
}