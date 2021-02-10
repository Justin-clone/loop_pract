#include <iostream>

using namespace std;
int main(){
	int i, end;
	
	cout<<"Enter any number: ";
	cin>>end;
	 
	for(int i = 1; i<= end; i++) {
		if (i%2 == 0)
		{
	 		std::cout<<i<<", ";
		}
		
	}
		
	return 0;
}
