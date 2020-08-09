//
//  main.cpp
//  prog1
//
//  Created by saarim khan on 09/08/20.
//  Copyright © 2020 saarim khan. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[])
{
    for(int i=0;i<argc;i++)
    { int n=atoi(argv[i]);
        if(isdigit(n)==false)
            cout<<"INVALID INPUT ENTER ANOTHER VALUE";
    }
    int sm=atoi(argv[1]);
    for(int i=0;i<argc;i++)
    {
        if(sm<atoi(argv[i]))
            sm=atoi(argv[i]);
    }
    cout<<"LEAST NUMBER="<<sm;
    
   
    return 0;
}
