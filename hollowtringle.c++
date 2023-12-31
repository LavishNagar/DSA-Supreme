//print hollow triangle

#include <iostream>
using namespace std;

int main(){
cout<<"enter the number of rows";
    int n;
    cin>>n;
    for(int row=0;row<n;row+=1){
        for (int i=0;i<n-1-row;i+=1){
            cout<<"  ";
        }
        for(int j=0;j<2*(row)+1;j+=1){

        if(j==0|| j==2*row|| row==n-1){
            cout<<" *";
        }
        else{
            cout<<"  "; 
        }
        }
        cout<<endl;
    }

}

