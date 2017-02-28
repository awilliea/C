#include<iostream>
#include "student.h"

using namespace std;
student::student(string a,int b ,string c ,int d){
    name=a;
    id=b;
    phone=c;
    class1=d;


}


    string student::getname(){


        return name;

    }
    int student::getID(){
        return id;
    }
    string student::getPhone(){
        return phone;

    }
    int student::getclass(){
        return class1;
    }
