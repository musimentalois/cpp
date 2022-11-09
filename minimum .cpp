#include <iostream>
using namespace std;

int main() {
    int x[] =  {14,3,6,7,41,56,11,25,9};
    int length = sizeof(x) / sizeof(x[0]);


    if ( length > 0 ) {
        int minimum = x[0];

        for ( int i = 1; i < length; i++ ) {
            if ( minimum > x[i] ) {
                minimum = x[i];
            }
        }

        cout << "The minimun number is: " << minimum << endl;
    }
    }
