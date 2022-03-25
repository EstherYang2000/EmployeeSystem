
#pragma once

#include <string> 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;


class IRank
	
{
	
protected:
	int Salary;
	string Rank;

public:
	IRank();
	~IRank();
	virtual string GetRank()=0 ;
	virtual int GetSalary() =0;
	virtual void SetRank(string rank1) = 0;
	virtual void SetSalary(int salary) = 0;

};

