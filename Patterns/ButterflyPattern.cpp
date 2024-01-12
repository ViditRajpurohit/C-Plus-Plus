#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
    for(int row=0;row<n/2;row++){

        //loop for printing stars in left side of upper part of pattern

        for(int col=0;col<row+1;col++){
            cout<<"*";
        }

        //loop for printing space in middle of upper part of pattern
        
        for(int col=0;col<n/2-1-row;col++){
            cout<<"  ";
        } 
           
        //loop for printing stars in right  side of upper part of pattern

        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
    

        cout<<endl;
    }


    for(int row=0;row<n/2;row++){

    //loop for printing stars in left part of lower part of pattern

        for(int col=0;col<n/2-row;col++){
            cout<<"*";
        }

    //loop for printing space in middle in lower part of pattern

        for(int col=0;col<row;col++){
            cout<<"  ";
        }

    //loop for printing stars in right part of lower part of pattern

        for(int col=0;col<n/2-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }

}
