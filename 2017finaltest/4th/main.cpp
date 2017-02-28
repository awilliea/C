#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
   int a,b;

    cout << "Please enter the number of the pebbles of kind A" << endl;
    cin>>a;
    int*x1=(int*)malloc(sizeof(int)*a);
    int*y1=(int*)malloc(sizeof(int)*a);
    cout << "Please enter the positions(x,y) of the pebbles of kind A" << endl;
    for(int i=0;i<a;i++){
        cout<<"The #"<<i+1<<" position (x,y): ";
        cin>>*(x1+i)>>*(y1+i);
        cout<<endl;
    }


    cout << "Please enter the number of the pebbles of kind B" << endl;
    cin>>b;
    int*x2=(int*)malloc(sizeof(int)*b);
    int*y2=(int*)malloc(sizeof(int)*b);
    cout << "Please enter the positions(x,y) of the pebbles of kind B" << endl;
    for(int i=0;i<b;i++){
        cout<<"The #"<<i+1<<" position (x,y): ";
        cin>>*(x2+i)>>*(y2+i);
        cout<<endl;



    }
    return 0;
}
