/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-03-04 05:07:31
 * @modify date 2020-03-04 05:07:31
 * @desc implicit constructor
 */

#include<iostream>
using namespace std;
class integer
{
    int a,b;
    public:
    integer();
    void display();
};
void integer:: display(){
    cout<<a<<" "<<b;
}
integer::integer(){
    a=5;
    b=6;
}

int main(){
    integer i;
    i.display();
}