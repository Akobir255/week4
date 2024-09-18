#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // Problem 1
    // float x;
    // cin >> x;
    // if (x>-1)
    //     cout << x <<" is positive "<< endl;
    // else
    //     cout << x <<" is negative "<< endl;
    // return 0;
    //Problem 2
    // int x;
    // cin>>x;
    // if (x>-1)
    //     if (x%2==0)
    //         cout<<"The given number is positive and Even"<<endl;
    //     else
    //         cout<<"The given number is positive and odd"<<endl;
    // if (x<0)
    //     if (x%2==0)
    //         cout<<"The given number is  negative and even"<<endl;
    //     else
    //         cout<<"The given number is negative and odd"<<endl;

    //Problem 3
    // int a,b,c;
    // cin>>a>>b>>c;
    // if (a>b && a>c)
    //     cout<<a<<" is the largest number" <<endl ;
    // else if (b>a && b>c)
    //     cout<<b<<" is the largest number" <<endl ;
    // else if (c>a && c>b)
    //     cout<<c<<" is the largest number" <<endl ;

    //Problem4
    //     int a,b;
    //     cin>>a>>b;
    //     if (a%b==0)
    //         cout<<"a is divisible to b"<< endl;
    //     else;
    //         cout<<"a is not divisible to b"<< endl;

    //Problem5

    // int x;
    // cin >> x;
    // if ( x%4==0 && x%100!=0 && x%400!=0 )
    //     cout << x <<" is a lуap year"<< endl;
    // else
    //     if ( x%2000==0)
    //         cout << x << " is a leap year" << endl;
    //     else
    //         cout << x << " is not a leap year" << endl;

    // Problem 6
    double a;
    double b;
    double c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout<<"x1=" << (-b + sqrt(pow(b,2)-4*a*c))/(2*a) <<endl;
    cout<<"x2=" << (-b - sqrt(b*b-4*a*c))/(2*a) <<endl;
}
