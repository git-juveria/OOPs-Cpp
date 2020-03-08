/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-03-04 05:35:56
 * @modify date 2020-03-04 05:35:56
 * @desc [description]
 */
#include<iostream>
using namespace std;
class Student{
    int rollno;
    char name[30];
    public:
    void getData()
    {
        cout<<"Enter name and Rollno ";
        cin>>name>>rollno;
    }
    void display(){
        cout<<"Roll no and name are"<<name<<rollno;
    }
};

int main(){
    Student *p,s[3];
    p=&s[0];

    for (int i = 0; i < 3; i++)
    {
        p->getData();
        p->display();
        p++;
    }
    
}