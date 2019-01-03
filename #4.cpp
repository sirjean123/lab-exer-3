#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char input1, input2;
	
	
	cout << "Input a first character: ";
	cin >> input1;
	cout << "Input a second character: ";
	cin >> input2;
	
	for (char between = input1; between <= input2; between++)
	{
		cout << between;
	}


}
