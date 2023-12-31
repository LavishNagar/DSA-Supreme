#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows:-";
    cin>>n;
    for(int row=0;row<n;row+=1){
        for(int i=0;i<n-row-1;i+=1){
            cout<<" ";
        }
        for(int j=0;j<row+1;j+=1){
            cout<<j+row+1;
        }
        for(int k=0;k<row;k+=1){
            cout<<2*row-k;
        }
        cout<<endl;
    }
}