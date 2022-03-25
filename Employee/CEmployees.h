#pragma once
#include "CEmployee.h"


class CEmployees
{
	CEmployee* m_Employees;

	int m_number;
	bool ischeck;

protected:
	
	
public:
	CEmployees();
	~CEmployees();
	 CEmployee* GetEmployee(char* id);//char* id
	void Add(const CEmployee& CE);
	void Modify(int number, char* reviseItem, char* id);//¦h¸ü
	void Modify(int number, int reviseItem, char* id);
	void Erase(char* id);
	void GetAllEmployee();
	bool check(char* id);
};

