// print inverted hollow tringle

#include <iostream>
using namespace std;
int main(){
    cout<<"enter number of rows: ";
    int n;
    cin>>n;
    for(int row=0;row<n;row+=1){
        for(int i=0;i<row;i+=1){
            cout<<"  ";

        }
        for(int j=0;j<2*(n-row)-1;j+=1){
            if(row==0|| j==0|| j==2*(n-row-1)){
                cout<<" *";
            }
            else{
                cout<<"  ";
                
            }
        }
        cout<<endl;
    }

}