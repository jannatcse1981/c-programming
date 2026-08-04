#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int odsum = 0;
    //print odd numbers from 1 to n;
    for ( int i = 1; i<= n; i++) {
          if ( i%2 != 0) {
                cout << i << endl;
                odsum += i;
          }



    }
    cout << "Sum of odd numbers: " << odsum << endl;
    return 0;
}        