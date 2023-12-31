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
        for(int k=0;k<row+1;k+=1){
            if(row==0|| row==1||k==0||k==row||row==n-1){
                cout<<k+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
 }