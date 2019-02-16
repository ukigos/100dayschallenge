//
//  main.cpp
//  ReverseDigits
//
//  Created by YUKTI GOSWAMI on 17/02/19.
//  Copyright © 2019 yuktigoswami. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int i, T;
    long int N;
    int remainder;
    long int digit;
    cout<<"Enter the value of T: "<<endl;
    cin>>T;
    for(i=0;i<T;i++){
        cout<<"Enter the value of N: "<<endl;
        cin>>N;
        digit = 0;
        while(N!=0){
            remainder = N%10;
            digit = (digit * 10) + remainder;
            N = N/10;
        }
        cout<<"ReverseNumber: "<<digit<<endl;
        //cout<<digit<<endl;
    }
    return 0;
}
