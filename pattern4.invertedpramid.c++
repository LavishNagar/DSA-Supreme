// print inverted primid

#include <iostream>
using namespace std;
int main(){
cout<<"enter the rows;";
int n;
cin>>n;
    for(int rows=0;rows<n;rows+=1){
        for(int i=0;i<rows;i+=1){
            cout <<" ";

        }
        for(int j=0;j<2*(n-rows)-1;j+=1){
            cout <<" *";
        }
        cout<< endl;
    }
}
