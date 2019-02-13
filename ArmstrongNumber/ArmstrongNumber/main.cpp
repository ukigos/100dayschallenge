//
//  main.cpp
//  ArmstrongNumber
//
//  Created by YUKTI GOSWAMI on 13/02/19.
//  Copyright © 2019 yuktigoswami. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int T, N;
    cout<<"Enter the value of T:"<<endl;
    cin>>T;
    for(int i=0;i<T;i++){
        cout<<"Enter the number:"<<endl;
        cin>>N;
        int o = N%10;
        cout<<"ones= "<<o<<endl;
        int t = ((N-o)/10)%10;
        cout<<"tens= "<<t<<endl;
        int h = N/100;
        cout<<"hundreds= "<<h<<endl;
        int x;
        x = (h*h*h)+(t*t*t)+(o*o*o);
        if(x==N){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
