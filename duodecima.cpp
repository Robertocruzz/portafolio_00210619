/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on October 13, 2019, 1:49 PM
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct orden{
    int revueltas;
    int frijolconqueso;
    int queso;
    char arroz;
    string ans;
};

orden pedirorden(){
    orden r;
    cout<<"cuantas pupusas de? "<<endl;
    cout<<"queso"<<endl; cin>>r.queso;
    cout<<"frijol con queso"<<endl;  cin>>r.frijolconqueso;
    cout<<"revueltas"<<endl;  cin>>r.revueltas;
    cout<<"maiz(M) o arroz(A)"<<endl; cin>>r.arroz;
    if(r.arroz=='A' ||r.arroz== 'a'){
        r.ans="de arroz";
    }
    else if(r.arroz=='M' || r.arroz=='m'){
        r.ans="de maiz";
    }
    else{
        r.ans="de arroz";
    }
    return r;
}

void mostrarorden(orden r){
    cout<<"su orden es: "<<endl;
    cout<<r.queso<<" de queso"<<endl;
    cout<<r.frijolconqueso<<" de frijol con queso"<<endl;
    cout<<r.revueltas<<" revueltas"<<endl;
    cout<<r.ans;
            
}
        
int main(){
    struct orden r;
    r=pedirorden();
    mostrarorden(r);
    
    return 0;
}

