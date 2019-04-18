//
//  Pr4.cpp
//  Pr4
//
//  Created by student on 18/04/2019.
//  Copyright © 2019 student. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer;
    bool rep = true;
    while (rep == true){
        double *tm;
        int i, k;
        cout << "Enter number of array's elements: ";
        cin >> i;
        tm = new double[i];
        for (k = 0; k < i; k++)
        {
            cout << "tm[" << k << "]:";
            cin >> tm[k];
        }
        for (k = 0; k < i; k++)
        {
            cout << "tm[" << k << "] = " << tm[k] << endl;
        }
        delete[] tm;
        cout << "Would you like to continue? Type <yes> or <no>";
        cin >> answer;
        if (answer == "yes")
            rep = true;
        else if (answer == "no")
            rep = false;
        else
            cout << "Pls stop, is it fun 4u?";
}
    return 0;
}
