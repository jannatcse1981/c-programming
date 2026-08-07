#include <iostream>
using namespace std;
int main () {
    int n=4;
    for(int i=1; i<n; i++) {
        //spaces : n-i-1
        for(int j=0; j<n-i-1; j++) {
            cout << " " ;
        }
        //nums 1 : i + 1
        for(int j=0; j<i+1; j++) {
            cout << j+1;
        //nums 2
        for(int j=1; j>0; j--)       
            cout << j;
        }
        cout << endl;    
    }        
    return 0;
}    

    