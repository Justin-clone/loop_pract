#include <iostream>

using namespace std;

int main() {
    int i, n, sum = 0;

    cout << "Enter any number : ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        if((i % 2)!=0) {
        	sum += i;
        }
    }
    cout << endl << "Sum of odd numbers from 1 to " << n << " is : " << sum;

    return 0;
}
