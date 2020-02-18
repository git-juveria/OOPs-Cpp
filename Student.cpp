/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-18 18:17:46
 * @modify date 2020-02-18 18:49:32
 * @desc [description]
 */

#include<iostream>
using namespace std;

class Student{
    char name[50];
    float marks[5];
    int roll_no;
    float percentage;
    int i;
    public:
    void initCalPercent()
    {
        cout<<"Enter name of Student: ";
        cin>>name;

        cout<<"Enter the roll no: ";
        cin>>roll_no;

        cout<<"Enter marks of 5 subjects: ";
        for (i = 0; i < 5; i++)
        {
            cin>>marks[i];
        }
        float total=0;
        for (i = 0; i < 5; i++)
        {
            total=total+marks[i];
        }
        
        percentage =total/5;
    }

    void display(){
        cout<<"\nStudent Details";
        cout<<"\nName: "<<name;
        cout<<"\nRoll No.: "<<roll_no;
        cout<<"\nPercentage :"<<percentage<<"%"<<"\n";
        if(percentage>=90){
            cout<<"Grade: A+";
        }

        else if(percentage<90&&percentage>=85){
            cout<<"Grade: A";
        }

        else if(percentage<85&&percentage>=70){
            cout<<"Grade: B";
        }
        else if(percentage<70&&percentage>=60){
            cout<<"Grade: C";
        }
        else if(percentage<60&&percentage>=50){
            cout<<"Grade: D";
        }
        else if(percentage<50&&percentage>=30){
            cout<<"Grade: E";
        }
        else{
            cout<<"FAIL";
        }
    }
};

int main(){
    Student s1;
    s1.initCalPercent();
    s1.display();
    return 0;
}