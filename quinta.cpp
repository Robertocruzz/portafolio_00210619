#include <iostream>
using namespace std;

int mult(int a,int b){
	if(b==1){
		cout<<"b="<<b<<"caso base"<<endl;
		return a;
	}
	else{
		int x = b-1;
		int y = mult(a,b-1);
		cout<<"a="<<x<<"x="<<b-1<<"y="<<y<<endl;
		return a+y;
	}
	
}

int main(void){
	cout<<"multiplicasion de 4 por 5 "<<endl;
	int m = mult(4,5);
	cout<<"resultado: "<<m<<endl;
}
