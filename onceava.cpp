/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on October 6, 2019, 10:36 PM
 */

#include <iostream>
#include <cmath>

using namespace std;
void arreglocircular();

int main() {
    arreglocircular();
    return 0;
}

void arreglocircular(){
    int ultimosnumeros[5]={0};
    int actual = 0;
    
    for(int i=1; i<=7; i++){
       ultimosnumeros[actual] = i;
       actual++;
       if(actual == 5) actual = 0; 
    }
    
    for(int i=0; i<5; i++) 
        cout<<ultimosnumeros[i]<<endl;
    
    
}

