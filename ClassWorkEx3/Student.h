#pragma once

#include <iostream>

class Student
{
private:
	char* name;
	int marksCount;
	int* marks;
public:
	Student();
	Student(const char* pName);
	Student(const char* pName, const int pMarkCount, const int* pMarks);
	~Student();

	float getAver();
	const char* getName();

	void setName(const char* pName);
	void setMarks(const int pMarkCount, const int* pMarks);
	void setMark(const int pMark, const int index);
};

