#include"student.h"
#include"libstudent.h"
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;
libstudent::libstudent(string a,int b,string c,int d,string e[2][2], int f):student( a, b, c,d ){

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            borrowHistory[i][j]=e[i][j];
        }
    }
    borrowNumber=f;

}

 string libstudent::getborrowHistory(){
   string str=" ";
   char s[1]="";

   char *c1=(char*)malloc(sizeof(char)*1000);
   char *b[4];
   int c=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(char d :borrowHistory[i][j]){
               *(c1+c)=d;
               c++;
               }


        }

    }





str.assign(c1);
return str;



    }
