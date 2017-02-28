#ifndef LIBSTUDENT_H_INCLUDED
#define LIBSTUDENT_H_INCLUDED
#include"student.h"
#include<stdlib.h>

using namespace std;

class libstudent:public student{

private:

     int borrowNumber;
   string borrowHistory[2][2];

public:
    libstudent(string,int,string,int,string[2][2], int);
    string getborrowHistory();
};


#endif // LIBSTUDENT_H_INCLUDED
