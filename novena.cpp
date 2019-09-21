/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on September 8, 2019, 5:06 PM
 */

#include <iostream>
#include <stack>


using namespace std;


int main()
{

 int a, b, c, d;   
stack<int> s;

s.push(1);
s.push(2);
s.push(3);
s.push(4);

a=s.top();
s.pop();
b=s.top();
s.pop();
c=s.top();
s.pop();
d=s.top();

s.push(c);
s.push(b);
s.push(a);

cout<<"el elemento ultimo es"<<"  "<<d<<endl;

if(s.empty())
    cout<<"pila vacia"<<endl;
else
    cout<<"la pila no esta vacia"<<endl;

return 0;

}



