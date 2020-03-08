/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-03-04 05:18:30
 * @modify date 2020-03-04 05:18:30
 * @desc [description]
 */
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
    integer();
    integer(int,int);
    integer(integer &m);
    void display();
};
void integer:: display(){
    cout<<a<<" "<<b;
}
integer::integer(){
    cout<<"Constructor invoked";
}
integer::integer(int c,int d){
    a=c;
    b=d;
}
integer::integer(integer &m){
    a=m.a;
    b=m.b;
}
int main(){
    integer j;
    integer i(10,20);
    integer l(50,60);
    integer k(l);
    i.display();
}