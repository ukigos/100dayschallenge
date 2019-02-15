//
//  main.cpp
//  Binary_to_Decimal
//
//  Created by YUKTI GOSWAMI on 15/02/19.
//  Copyright © 2019 yuktigoswami. All rights reserved.
//
//Binary to decimal

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int T, i;
    long int B;
    int remainder;
    int value;
    int a;
    cout<<"Enter the value of T:"<<endl;
    cin>>T;
    for(i=0;i<T;i++){
        cout<<"Enter the value of B:"<<endl;
        cin>>B;
        value = 0;
        a = 0;
        while(B!=0){
            //cout<<"value of a: "<<a<<endl;
            remainder = B%10;
            //cout<<"remainder: "<<remainder<<endl;
            value = value + pow(2,a)*remainder;
            //cout<<"value: "<<value<<endl;
            B = B/10;
            //cout<<"changed B: "<<B<<endl;
            a = a + 1;
            
        }
        cout<<"Decimal value of number is: "<<value<<endl;
    }
    return 0;
}
