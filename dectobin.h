#ifndef DECTOBIN_H
#define DECTOBIN_H
#include <math.h>
#include <iostream>
using namespace std;
typedef  unsigned int ui;

void DECtoBIN(ui DECnumber);

void DECtoBIN(ui DECnumber)
{
    long long i = 31;
    do
    {
        if ((long long)DECnumber - (long long)pow(2, i) >= 0)
        {
            DECnumber -= (ui)pow(2,i);
            cout << "1";
        }else{
            cout << "0";}
        --i;
     //   cout << i;
    } while (i > -1);
    cout << endl;
}


#endif // DECTOBIN_H
