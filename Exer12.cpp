#include <iostream>
using namespace std;

int main()
{
   int n,first,last;
    cout << " Input any number: ";
    cin >> n;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<"Sum of first and last digit: "<<first + last;
}
