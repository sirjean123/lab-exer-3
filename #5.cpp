#include <iostream>
using namespace std;

int num1=20, num2=20, num3=10, num4=15;

int linechar(int num1)
{

	for(int i=0; i<num1; i++)
	{
		cout << "*";
	}
	cout << endl << endl;
}
int linechar(int num1, int num2){
	for(int i=0; i<num2; i++)
	{
		cout << "@";
	
	}
	cout << endl << endl;
}
int linechar(int num1, int num2, int num3)
{
	for(int i=0; i<num3; i++)
	{
	
		cout << "*";
	
}
	cout << endl << endl;


}
 int linechar(int num1, int num2, int num3, int num4)
 {
	for(int i=0; i<num4; i++){
	
	
		cout << "#";
	}
	cout << endl << endl;


}
int main()
{

	linechar(num1);
	linechar(num1,num2);
	linechar(num1,num2,num3);
	linechar(num1,num2,num3,num4);

}
