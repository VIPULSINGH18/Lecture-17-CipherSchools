// Declaring two functions and then calling two function in one main function...




#include<iostream>
using namespace std;
void PrintHi(){
	cout<<"Hi How Are You??"<<endl;
	return;
	
}

int Sum(int a, int b){
	int c;
	c= a+b;
	cout<<"Sum of two numbers is equal to :"<<c;
	return c;
}
int main(){
	PrintHi();
	Sum(10,20);
	return 0;
}

