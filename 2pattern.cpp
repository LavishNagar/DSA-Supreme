#include <iostream>
using namespace std;

// a
// bb
// ccc
// dddd
// eeeee

int main() {
    for(int row=0;row<5;row++){
        for(int col=0;col<=row;col++){
            char name='a'+row;
            cout<< name;
            
        }
        cout<<endl;
    }

    return 0;
}