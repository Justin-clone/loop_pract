#include <iostream>

using namespace std;
int main(){
	
	 //initialize;condition;update{body}
	for(int i = 1; i < 11; i++) {
		for(int j = 1; j < 11; j++){
	 		cout<<i<<" ";
		}
		cout<<endl;
	}
	
	
	int i = 1;
	while(i < 11){
		int j = 1;
		while(j < 11){
			cout<<i<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
	
	
	return 0;
}
