//
//  main.cpp
//  ArithProg
//
//  Created by YUKTI GOSWAMI on 12/02/19.
//  Copyright © 2019 yuktigoswami. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    //code
    int T, A, B, N, an[1000];
    //cout<<"Enter the number of test cases"<<endl;
    cin>>T;
    //cout<<"the value of t is: "<<T<<endl;
    if(T>1){
        for(int i=0;i<T;i++){
            cin>>A>>B;
            cin>>N;
            int d=B-A;
            an[i]=A+(N-1)*d;
        }
    }
    else if(T==1){
        //cout<<"T=1 therefore enter a and b"<<endl;
        cin>>A>>B;
       // cout<<"enter the value of n"<<endl;
        cin>>N;
        int d=B-A;
        int an;
        an=A+(N-1)*d;
        cout<<an;
    }
    else{
        return 0;
    }
    for(int i=0;i<T;i++){
        cout<<an[i]<<endl;
    }
    return 0;
}
