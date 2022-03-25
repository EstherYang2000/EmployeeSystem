
#pragma once

#include <string> 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include "CHuman.h"
#include "IRank.h"
using namespace std;



class CEmployee:public CHuman,public IRank{
	//: public CHuman
	char* m_pcID;
	//int m_nDate;
	string department;
protected:
	int m_nDate;
public:
	CEmployee();
	CEmployee(char* ID, int date, string depart);
	~CEmployee();
	int GetAge();
	void SetAge(int jobDate);
	string GetDepartment();
	void SetDepartment(string depart);
	char* GetID();
	void SetID(char* id);
	
	virtual string GetRank();
	virtual int GetSalary();
	virtual void SetRank(string rank1);
	virtual void SetSalary(int salary);
	
	void operator=(const CEmployee& CE);


};




