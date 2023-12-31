// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter number of rows:-";
//     int n;
//     cin>>n;

//     for(int row=0;row<n;row+=1){
//         for(int i=0;i<row+1;i+=1){
//             cout<<row+1;
//             if(i!=row){
//                 cout<<" * ";
//             }
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;

int main(){
    cout<<"enter number of rows:-";
    int n;
    cin>>n;
    for(int row=0;row<n;row+=1){
        for(int i=0;i<n-row;i+=1){
            cout<<(n-row);
            if(i!=(n-row-1)){
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}

















