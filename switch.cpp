#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit;
    cout<<"Enter your integer digit : ";
    cin>>digit;
    switch(digit)
    {
    case 0:
        cout<<"Your digit is zero";
        break;
    case 1:
        cout<<"Your digit is one";
        break;
    case 2:
        cout<<"Your digit is two";
        break;
    case 3:
        cout<<"Your digit is three";
        break;
    case 4:
        cout<<"Your digit is four";
        break;
    case 5:
        cout<<"Your digit is five";
        break;
    case 6:
        cout<<"Your digit is six";
        break;
    case 7:
        cout<<"Your digit is seven";
        break;
    case 8:
        cout<<"Your digit is eight";
        break;
    case 9:
        cout<<"Your digit is nine";
        break;
    default :
        cout<<"Your digit is not correct";

    }
    getch();
}
