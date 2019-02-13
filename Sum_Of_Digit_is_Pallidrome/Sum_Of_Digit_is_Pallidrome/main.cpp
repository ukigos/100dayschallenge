//
//  main.cpp
//  Sum_Of_Digit_is_Pallidrome
//
//  Created by YUKTI GOSWAMI on 13/02/19.
//  Copyright © 2019 yuktigoswami. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int T, N, remainder, rem;
    int reversedNumber;
    int sum = 0;
    int n;
    cout<<"Enter the value of T:"<<endl;
    cin>>T;
    for(int i=0;i<T;i++){
        cout<<"Enter the value of N:"<<endl;
        cin>>N;
        n = N;
        while(N!=0){
            rem = N%10;
            cout<<"rem="<<rem<<endl;
            sum = sum + rem;
            cout<<"sum="<<sum<<endl;
            N = N/10;
            cout<<"N="<<N<<endl;
        }
        int originalNumber = sum;
        reversedNumber=0;
        while(sum!=0){
            remainder = sum%10;
            cout<<"remainder="<<remainder<<endl;
            reversedNumber = reversedNumber*10 + remainder;
            cout<<"reversedNumber="<<reversedNumber<<endl;
            sum = sum/10;
            cout<<"sum="<<sum<<endl;
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
