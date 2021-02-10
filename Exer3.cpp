#include <iostream>

using namespace std;
int main(){
	char i, input;
	
	cout<<"Enter upper number: ";
	cin>>input;
	 
	 
	 //initialize;condition;update{body}
	for(i = 1; i <= input; i++) {
		{
	 		std::cout<<i<<", ";
		}
		if(i%2){
		input = i;	
		}
		
	}
		
	return 0;
}
