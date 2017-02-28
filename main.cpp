#include <iostream>
#include "libstudent.h"

using namespace std;

/*int main(){
	student A(" Jenny ",12, " 0919350533 ",279);
	cout << "Name: " <<A.getname()<<endl;
	cout << "ID: " <<A.getID()<<endl;
	cout << "Phone: " <<A.getPhone()<<endl;
	cout << "Class: " <<A.getclass()<<endl;
	return 0;
}*/

int main(){
    const int borrowNumber = 2;
 	string borrowHistory[borrowNumber][2]={"HarryPotter","2016-08-19","TheHungerGames","2016-08-31"};

	libstudent A("Jenny",12,"0919350533",279,borrowHistory,borrowNumber);

	cout << "Name: " <<A.getname()<<endl;
	cout << "ID: " <<A.getID()<<endl;
	cout << "Phone: " <<A.getPhone()<<endl;
	cout << "Class: " <<A.getclass()<<endl;
	cout << "Borrow History: " <<A.getborrowHistory()<<endl;

	return 0;
}
