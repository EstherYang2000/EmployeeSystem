#include "CEmployees.h"
#include <string> 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
using std::string;

CEmployees::CEmployees()
{
	m_Employees = nullptr;
	m_Employees = new CEmployee[1000];
	m_number = 0;
	ischeck=false;
}

//CEmployees::CEmployees(char* ID, int date, string depart) //�ۭq�غc�l
//{
//	
//}

CEmployees::~CEmployees()//�Ѻc�l
{
	if (m_Employees != nullptr) {

		//for (int i = 0; i < 1000; i++) {
			delete[] m_Employees;

			m_Employees = nullptr;

		//}
		
		}

}

 CEmployee* CEmployees::GetEmployee(char* id) {//���---����----�O��I ---��X���CEmployee*


	
	for (int i = 0; i < m_number; i++) {
	
		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			printf("equal\n");
			return &m_Employees[i];//�Ǫ�����Ц�}
			break;
		}
		//else {
		
			//printf("No Data!!\n");//�p��^�h
			//return nullptr;
		
		//}
	
		
	}
	return nullptr;

}
void CEmployees::Add(const CEmployee& CE) {//�Ǧ�}�`�ٹB��ɶ�
	
	m_Employees[m_number]=CE;
	m_Employees[m_number].operator= (CE);  //operator
	m_number++;
	 
}

void CEmployees::Modify(int reviseNum, char* reviseItem, char* id) {
	
	for (int i = 0; i < m_number; i++) {


		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			
			switch (reviseNum) {

			case 1://1. ���u�s��:

				m_Employees[i].SetID(reviseItem);

				break;

			case 2://2. ���u�m�W :
				m_Employees[i].SetName(reviseItem);
				break;

			case 3://3. ���u���� :
				m_Employees[i].SetDepartment(reviseItem);

				break;
/*
			case 4://4. ���u�~��://CEmployee

				revisem_JobDate = atoi(reviseItem);
				m_Employees[i].SetAge(revisem_JobDate);

				break;
			case 5://5. ���u�~��//CHuman
				reviseage = atoi(reviseItem);
				m_Employees[i].CHuman::SetAge(reviseage);

				break;
			case 6://6. ���u�ͤ�://CHuman
				revisem_nDate = atoi(reviseItem);
				m_Employees[i].SetAge(revisem_nDate);
				break;
*/
			case 7://7. ���u�ŧO:
				m_Employees[i].SetRank(reviseItem);
				break;
				/*
			case 8://8. ���u�~��:
				reviseSalary = atoi(reviseItem);
				m_Employees[i].SetSalary(reviseSalary);
				break;
				*/
			}
			

			break;

		}
		else {

			

		}



	}

	cout << "�ק異��";

}
void CEmployees::Modify(int number, int reviseItem, char* id) {
	int revisem_JobDate = 0;
	int reviseage = 0;
	int revisem_nDate = 0;
	int reviseSalary = 0;
	for (int i = 0; i < m_number; i++) {



		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			
			switch (number) {

			
			case 4://4. ���u�~��://CEmployee
	
				m_Employees[i].SetAge(reviseItem);

				break;
			case 5://5. ���u�~��//CHuman
				
				m_Employees[i].CHuman::SetAge(reviseItem);

				break;
			case 6://6. ���u�ͤ�://CHuman
				
				m_Employees[i].SetAge(reviseItem);
				break;
			
			case 8://8. ���u�~��:
				
				m_Employees[i].SetSalary(reviseItem);
				break;
			}
			
			break;
		}
		else {

			

		}

		cout << "�ק異��";

	}

}
void CEmployees::Erase(char* id) {//getdata 

	for (int i = 0; i < m_number; i++) {



		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			
			


			for (int j = i; j <  m_number - 1; j++) {

				m_Employees[j] = m_Employees[j + 1];
			}

			printf("delete successfully\n");
			break;
		}
		else {

			

		}



	}

	m_number--;

}
bool CEmployees::check(char* id){

	for (int i = 0; i < m_number; i++) {



		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			printf("equal\n");

			ischeck = true;//�Ǫ�����Ц�}
			break;
		}
		else {
			ischeck = false;
		}
		
		//�S�j�M��^��false;
			
		


	
	}

	return ischeck;
}

void CEmployees::GetAllEmployee() {//��X�������CEmployee



	for (int i = 0; i < m_number; i++) {

		cout << i+1<<"." << endl;
			cout << "���u�s��:" << m_Employees[i].GetID() << endl;
			cout << "���u�m�W:" << m_Employees[i].GetName() << endl;
			cout << "���u����:" << m_Employees[i].GetDepartment() << endl;
			cout << "���u�~��:" << m_Employees[i].GetAge() << endl;
			cout << "���u�~��:" << m_Employees[i].CHuman::GetAge() << endl;
			cout << "���u�ͤ�:" << m_Employees[i].GetBirthday() << endl;
			cout << "���u�ŧO:" << m_Employees[i].GetRank() << endl;
			cout << "���u�~��:"  << "NT$"<< m_Employees[i].GetSalary() << endl;
			

	}


}
