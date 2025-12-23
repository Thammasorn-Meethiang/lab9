#include<iostream>
using namespace std;
void printO(int x, int y){
	if(x > 1 && y > 1){
		for(int xinit = 0; xinit < x; xinit++ ){
			if(xinit > 0){cout << "\n";}
			for(int yinit = 0; yinit < y; yinit++ ){
				cout << "O";
			}
		}
	}
	else {cout << "Invalid input";}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
