//
//  main.cpp
//  prog5
//
//  Created by saarim khan on 08/08/20.
//  Copyright © 2020 saarim khan. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    string s;
    cout<<"INPUT=";
    cin>>s;
    char ch;
    int n=0;
    cout<<"OUTPUT=";
    for(int i=0;i<=s.length();i++)
    {
        ch=s[i];
        n=ch>=97? ch-96:ch-64;
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
                cout<<"#";
            else
                cout<<"$";
        }
    }
    cout<<endl;
    return 0;
}
