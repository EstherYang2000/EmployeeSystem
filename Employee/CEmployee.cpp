
#include "CEmployee.h"
//#include "CHuman.h"
#include <string> 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
using std::string;

CEmployee::CEmployee()
{

	m_pcID = nullptr;
	m_pcID = new char[100];

	memset(m_pcID, 0, 100);
	m_nDate = 0;
	department = "";
}

CEmployee::CEmployee(char* ID, int date, string depart) //�ۭq�غc�l
{
	m_pcID = nullptr;
	m_pcID = new char[100];
	m_nDate = 0;
	m_nDate = date;

	department = "";
	department = depart;
	memcpy(m_pcID, ID, strlen(ID) + 1);
}

CEmployee::~CEmployee()//�Ѻc�l
{
	if (m_pcID != nullptr) {
		 
			delete[] m_pcID;

			m_pcID = nullptr;

	}

}


int CEmployee::GetAge() {//���o�~��
	int year = 2021;
	int jobyear = m_nDate / 10000;

	if (jobyear == year) {
		jobyear = (m_nDate % 10000) % 100;
		jobyear /= 12;

	}
	else {
		jobyear = year - jobyear;
	}

	return jobyear;
}
void CEmployee::SetAge(int jobDate) { //�]�w�~��
	
	m_nDate = jobDate;

}
string CEmployee::GetDepartment() {//���o�~��

	return department;
}
void CEmployee::SetDepartment(string depart) {//�]�w����

	department = depart;
}
char* CEmployee::GetID() {//���o���s
	return m_pcID;
}
void CEmployee::SetID(char* id) {//�]�w���s
	memcpy(m_pcID, id, strlen(id) + 1);
}
void  CEmployee::operator=(const CEmployee& CE) {
	int this_year = 2021;
	if (this != &CE) {
		sprintf_s(m_pcID, 100, CE.m_pcID);
		m_nDate = CE.m_nDate;
		department = CE.department;
		sprintf_s(m_pcName,100,CE.m_pcName);
		CHuman::m_nDate = CE.CHuman::m_nDate;
		thisyearage= this_year -(CE.CHuman::m_nDate/10000);               //�~��
		birthday = CE.CHuman::m_nDate % 10000;;
		Salary = CE.Salary;
		Rank = CE.Rank;
	}

};


string CEmployee::GetRank() {

	return Rank;
}
int CEmployee::GetSalary() {

	return Salary;
}
void CEmployee::SetRank(string rank1) {

	Rank = rank1;
}
void CEmployee::SetSalary(int salary) {

	Salary = salary;
}

