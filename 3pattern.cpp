
#include <iostream>
using namespace std;
// 12345
// 1234
// 123
// 12
// 1


int main() {
  
for(int row=0;row<5;row++){
    for (int col=0;col<5-row;col++){
        cout<<col+1;
    }
    cout<<endl;
}
  
  return 0;
}