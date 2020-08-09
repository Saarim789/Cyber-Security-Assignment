//
//  main.cpp
//  Assignment-1
//
//  Created by saarim khan on 07/08/20.
//  Copyright © 2020 saarim khan. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    
        char s[100];
        cout<<"ENTER A STRING=";
        cin>>s;
        int l=strlen(s);
        int flag=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]!=s[l-i-1])
            {flag=1;
                break;}

        }
        if(flag)
            cout<<" NOT A PALINDROME STRING";
        else
            cout<<"PALINDROME STRING";
        return 0;
    }// insert code here...
    
