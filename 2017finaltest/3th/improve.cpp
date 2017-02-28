#include <iostream>
#include <fstream>

using namespace std;

void result(int* p, int I, int C, int &x, int &y) {
    int temp, flag = 0, change;
    for(int i = 0; i < I; i++) {
        for(int j = 0; j < I; j++) {
            if(j == i) j++;
            else {
                temp = *(p + i) + *(p + j);
                if(temp == C) {
                    if(i > j) {
                        change = i;
                        i = j;
                        j = change;
                    }
                    x = i + 1;
                    y = j + 1;
                    flag++;
                    break;
                }
            }
        }
        if(flag != 0) break;
    }
}


int main()
{

    ifstream fileIn;
    fileIn.open("TestData.txt", ios::in);

    ofstream fileOut;
    fileOut.open("output.txt", ios::out);

    int Ntimes, Credit, Items, Price, temp[2000], x, y;
    int *p;
    p = temp;
    fileIn >> Ntimes;

    for(int i = 0; i < Ntimes; i++) {
        fileIn >> Credit;
        fileIn >> Items;
        for(int j = 0; j < Items; j++) {
            fileIn >> Price;
            temp[j] = Price;
        }
        fileOut << "case #" << i + 1 << ": ";
        result(p, Items, Credit, x, y);
        fileOut << x << " " << y << endl;
    }
    return 0;
}
