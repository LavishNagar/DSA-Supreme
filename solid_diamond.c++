// now print a solid diamond structure

#include <iostream>
using namespace std;

int main(){
    cout<<"enter the number of rows:-";
    int n;
    cin>>n; 
    for(int row=0;row<n;row+=1){
        for(int i=0;i<n-row-1;i+=1){
            cout<<"  ";
        }
        for(int j=0;j<(2*row)+1;j+=1){
            cout<<" *";
        }
        cout <<endl;
    }



        for(int rows=0;rows<n;rows+=1){
        for(int i=0;i<rows;i+=1){
            cout <<"  ";

        }
        for(int j=0;j<2*(n-rows)-1;j+=1){
            cout <<" *";
        }
        cout<< endl;
    }
}

