/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on November 9, 2019, 6:23 PM
 */

#include <iostream>
#include <cmath>        

using namespace std;

	int main (){

	int t;

	cout<<"Cuantos datos va a ingresar?"<<endl;

	cin>>t;

	float num[t];

	cout<<"Ingrese sus datos: "<<endl;

	for(int i=1;i<=t;i++){

	    cout<<i<<": ";

	    cin>>num[i];

	    cout<<endl;

	}
	if(t%2 ==0)

	   cout<<"La mediana es: "<<((num[t/2] + num[(t/2)+1])/2);

	else

	   cout<<"La mediana es: "<<num[(t/2)+1]<<endl;

	
			
	   return 0;
	}