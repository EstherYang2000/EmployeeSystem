
#pragma once

//#include <iostream>
//#include <string> 
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
using namespace std;
//using std::string;


class CHuman
{
	


protected:
	char* m_pcName;
	int m_nDate;
	int thisyearage;
	int birthday;
	
public:
	CHuman();
	CHuman(char* name, int date, int thisyearage,int birthday);
	void SetAge(int Date);
	int GetAge();
	int GetBirthday();
	char* GetName();
	void SetName(char* name);
	~CHuman();


};
