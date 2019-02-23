//
//  main.cpp
//  Palindrome
//
//  Created by YUKTI GOSWAMI on 13/02/19.
//  Copyright © 2019 yuktigoswami. All rights reserved.
//
//
#include <iostream>
using namespace std;
int main(){
    int T, N, remainder;
    int reversedNumber = 0;
    cout<<"Enter the value of T:"<<endl;
    cin>>T;
    for(int i=0;i<T;i++){
        cout<<"Enter the value of N:"<<endl;
        cin>>N;
        int originalNumber = N;
        while(N!=0){
            remainder = N%10;
            cout<<remainder<<endl;
            reversedNumber = reversedNumber*10 + remainder;
            cout<<reversedNumber<<endl;
            N = N/10;
            cout<<N<<endl;
        }
        if(originalNumber==reversedNumber){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
