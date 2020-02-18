/**
 * @author Juveria-Manzar
 * @email juveriamanzar29@gmail.com
 * @create date 2020-02-18 18:52:24
 * @modify date 2020-02-18 19:00:03
 * paasing objects of class as arguments to sum
 */

#include<iostream>
using namespace std;

class time{
    float hours;
    int minutes;

    public:
    void Gettime();
    void sum(time,time);
    void display();
};

void time::Gettime(){
    cout<<"\nEnter Hours: ";
    cin>>hours;

    cout<<"\nEnter minutes ";
    cin>>minutes;

    display();
}

void time::sum(time t1,time t2){
    hours=0;
    hours=t1.hours+t2.hours;
    minutes=0;
    minutes=t1.minutes+t2.minutes;

    if(minutes>60){
        hours++;
        minutes-=60;
    }
    display();
}
void time::display(){
    cout<<"\ntime is: "<<hours<<":"<<minutes;
}

int main(){
    time t1;
    t1.Gettime();

    time t2;
    t2.Gettime();

    time t3;
    t3.sum(t1,t2);

    return 0;
}