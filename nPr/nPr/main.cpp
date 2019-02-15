//
//  main.cpp
//  nPr
//
//  Created by YUKTI GOSWAMI on 15/02/19.
//  Copyright © 2019 yuktigoswami. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    long int T, n, r, nPr;
    long int factn;
    long int factnr;
    cout<<"Enter the value of T: "<<endl;
    cin>>T;
    for(int i=0;i<T;i++){
        cout<<"Enter the value of n and r: "<<endl;
        cin>>n>>r;
        factn = n;
        factnr = n-r;
        if(factnr==0){
            factnr=1;
        }
        if(n>=r){
            for(long int j=(n-1);j>0;j--){
                factn = factn * j;
                cout<<"factn: "<<factn<<endl;
            }
            for(long int k=factnr-1;k>0;k--){
                factnr = factnr * k;
                cout<<"factnr: "<<factnr<<endl;
            }
            cout<<"factn: "<<factn<<endl;
            cout<<"factnr: "<<factnr<<endl;
            nPr = factn/factnr;
            cout<<"nPr: "<<nPr<<endl;
        }
        else{
            return 0;
        }
    }
    return 0;
}
