#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include<cmath>

using namespace std;

int main() {

string str;
    ifstream ifile;

    //This array is used to deposit the data importing from csv
    int data[100][11];
    //You can change the filename to open the specific data
    string filename="Problem1_TestData.csv";

    ifile.open(filename);

    if (ifile)
    {

        int c = 0;
        while (getline (ifile,str)){
            stringstream ss(str);
            string temp;
            // ss → 每一行資料轉成串流
            for(int i=0;i<11;i++){
                getline(ss,temp,',');
                //atoi is used to transform string to int
                data[c][i]=atoi(temp.c_str());
            }
            c++;
        }
        cout << "Finish reading data" << endl;
        //Now, you can start to use the data array to complete this problem
    }
    else
    {
        cout << "Error" <<endl;
    }


    ifile.close();

    double av[100];
    double sd[100];

    for(int i=0;i<100;i++){
            double average=0;
        for(int j=0;j<11;j++){
            average+=data[i][j];
        }
        cout<<"The average of the line "<<i+1<<" is: "<<(double)average/11<<endl;
        av[i]=(double)average/11;
    }

    for(int i=0;i<100;i++){
            double pow1=0;
        for(int j=0;j<11;j++){
                pow1+=pow((data[i][j]-av[i]),2);
        }
        sd[i]=pow((pow1/11),0.5);
        cout<<"The SD of the line "<<i+1<<" is : "<<sd[i]<<endl;

    }

    ofstream ofile;
    ofile.open("Problem1_AnswerData.csv");

    if (ofile){
        for(int i=0;i<100;i++){
            for(int j=0;j<11;j++){
                ofile<<data[i][j]<<',';


            }
            ofile<<av[1]<<','<<sd[i]<<','<<endl;
        }
    }
        else{
            cout<<"Error"<<endl;
        }




    ofile.close();

    return 0;
}

