#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <string>
using namespace std;

class student{
protected:
    string name;
    int id;
    string phone;
    int class1;
public:
    student(string,int,string,int);
    string getname();
    int getID();
    string getPhone();
    int getclass();


};

#endif // STUDENT_H_INCLUDED
