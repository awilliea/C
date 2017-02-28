#include <iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<stdlib.h>

using namespace std;

int main()
{
    ifstream ifile1;
    string str,str1;
    int c=0,n,credit,number=1;
    int *price=(int*)malloc(sizeof(int)*number);
    int small[10][2],geti,getj;
    ifile1.open("small.txt");
    if(ifile1){
        while(getline(ifile1,str)){
                int cou=0;
                if(c==0){str1=str;}
                stringstream ss(str);
                while(ss>>n){

                    if(c%3==1){
                        credit=n;
                    }
                    else if(c%3==2){
                        number=n;
                    }
                    else {
                        *(price+cou)=n;
                        cou++;
                    }

                }

                if(c%3==0&&c>2){
                    for(int i=0;i<number;i++){
                        for(int j=i+1;j<number;j++){
                            if(*(price+i)+*(price+j)==credit){
                                cout<<"Case "<<"#"<<c/3<<": "<<i+1<<" "<<j+1<<endl;
                                geti=i+1;
                                getj=j+1;
                            }
                        }
                    }
                    small[(c/3)-1][0]=geti;
                    small[(c/3)-1][1]=getj;
                }
                c++;
        }

    }
    else{
        cout<<"Error"<<endl;
    }
    ifile1.close();

    ofstream ofile1;
    ofile1.open("small.Answer.txt");
    if(ofile1){
        for(int i=0;i<10;i++){
                ofile1<<"Case #"<<i+1<<": ";
            for(int j=0;j<2;j++){
                ofile1<<small[i][j]<<" ";
            }
            ofile1<<'\n';
        }


    }
    else{
        cout<<"Error"<<endl;
    }
    ofile1.close();
    return 0;
}
