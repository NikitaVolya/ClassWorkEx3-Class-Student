
#include <iostream>

#include "Student.h"

using namespace std;

int main()
{
	int marks[3]{ 5, 5, 8 };
	Student a("Nikita", 3, marks);
	Student b("Oleg");



	cout << a.getName() << " " << a.getAver() << endl;
	a.setMark(10, 1);
	cout << a.getName() << " " << a.getAver() << endl;
	cout << b.getName() << " " << b.getAver() << endl;

	return 0;
}