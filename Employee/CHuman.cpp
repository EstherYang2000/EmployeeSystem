#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>

#include "CHuman.h"

CHuman::CHuman()
{ //�w�]�غc�l
	m_pcName = nullptr;
	m_nDate = 0;
	m_pcName = new char[100];
	thisyearage = 0;
	birthday = 0;
}
CHuman::CHuman(char* name, int date, int age, int birth) //�ۭq�غc�l
{
	m_pcName = nullptr;
	m_nDate = 0;
	m_pcName = new char[100];
	memcpy(m_pcName, name, strlen(name) + 1);
	thisyearage = 0;
	thisyearage = age;
	m_nDate = date;
	birthday = 0;
	birthday = birth;
}

CHuman::~CHuman()//�Ѻc�l
{
	if (m_pcName != nullptr) {
		delete[] m_pcName;

		m_pcName = nullptr;

	}

}

int CHuman::GetAge() { //���o�~��
	//cout << "Your name is" << m_cName;
	
	int this_year = 2021;
	thisyearage = this_year - (m_nDate / 10000);
	return thisyearage;//20000627


}
void CHuman::SetAge(int Date) { //�]�w�~��
	m_nDate = Date;
}

int CHuman::GetBirthday() { //���o�ͤ�
	birthday = m_nDate % 10000;
	//int month = birthday / 100;
	//int date = birthday % 100;

	return birthday;

}

char* CHuman::GetName() { //���o�m�W
	//cout << "Your name is" << m_cName;
	return m_pcName;
}
void CHuman::SetName(char* name) { //�]�w�m�W

	memcpy(m_pcName, name, strlen(name) + 1);

	//strncpy(m_pcName, name, 100);
	//strcpy(name,m_pcName);
	//sprintf_s(m_pcName, 100,"%s", name);

}
