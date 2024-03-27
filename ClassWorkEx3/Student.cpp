#include "Student.h"

Student::Student()
{
	marksCount = 0;
	marks = nullptr;
	name = nullptr;
}

Student::Student(const char* pName)
{
	setName(pName);

	marksCount = 0;
	marks = nullptr;
}

Student::Student(const char* pName, const int pMarkCount, const int* pMarks)
{
	setName(pName);
	setMarks(pMarkCount, pMarks);
}

Student::~Student()
{
	if (name) 
		delete[] name;

	if (marks) 
		delete[] marks;
}

float Student::getAver()
{
	if (marksCount == 0)
		return 0;
	float sum = 0.f;
	for (int i = 0; i < marksCount; i++)
		sum += marks[i];
	return sum / marksCount;
}

const char* Student::getName()
{
	if (name != nullptr)
		return name;
	else
		return "None";
}

void Student::setName(const char* pName)
{
	if (name)
		delete[] name;

	int len = std::strlen(pName) + 1;
	name = new char[len];

	for (int i = 0; i < len; i++)
		name[i] = pName[i];
}

void Student::setMarks(const int pMarkCount, const int* pMarks)
{
	if (marks)
		delete[] marks;

	marksCount = pMarkCount;
	marks = new int[pMarkCount];
	for (int i = 0; i < pMarkCount; i++)
		marks[i] = pMarks[i];
}

void Student::setMark(const int pMark, const int index)
{
	if (!marks || marksCount <= index || pMark < 0)
		return;

	marks[index] = pMark;
}
