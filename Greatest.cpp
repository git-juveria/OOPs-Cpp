/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-18 19:14:43
 * @modify date 2020-02-18 19:22:08
 * @desc define a friend function with object as 
 * arguments of class A nd class B to find the max value.
 */

#include<iostream>
using namespace std;

class ABC;

class XYZ{
    int num1;
    public:
    void setValue(int x){
        num1=x;
    }
    friend int max(XYZ,ABC);
};

class ABC{
    int num2;
    public:
    void setValue(int a){
        num2=a;
    }
    friend int max(XYZ,ABC);
};

int max(XYZ xyz, ABC abc){
    if(xyz.num1>abc.num2)
        return xyz.num1;

    else
        return abc.num2;
}

int main(){
    ABC a;
    XYZ x;
    int num1, num2;

    cout<<"\nEnter Two Numbers: ";
    cin>>num1>>num2;

    x.setValue(num1);
    a.setValue(num2);

    int greatest=max(x,a);

    cout<<"\nThe greatest btw "<<num1<<"&"<<num2<<" is: "<<greatest;
}