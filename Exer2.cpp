#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter Input =  ";
	cin >> number;
	
	cout << "\nNatural numbers in reverse are " << number << " to 1 are\n"; 
	for(int i = number; i >= 1; i--)
  	{
		cout << i <<" ";
  	}
		
 	return 0;
}	
