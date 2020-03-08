/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-03-04 05:15:27
 * @modify date 2020-03-04 05:15:27
 * @desc [description]
 */

#include<iostream>
using namespace std;
class integer
{
    int a,b;
    public:
    integer(int,int);
    void display();
};
void integer:: display(){
    cout<<a<<" "<<b;
}
integer::integer(int c,int d){
    a=c;
    b=d;
}

int main(){
    integer i(10,20);
    i.display();
}