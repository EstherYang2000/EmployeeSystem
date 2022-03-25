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

//CEmployees::CEmployees(char* ID, int date, string depart) //自訂建構子
//{
//	
//}

CEmployees::~CEmployees()//解構子
{
	if (m_Employees != nullptr) {

		//for (int i = 0; i < 1000; i++) {
			delete[] m_Employees;

			m_Employees = nullptr;

		//}
		
		}

}

 CEmployee* CEmployees::GetEmployee(char* id) {//比對---抓資料----記住I ---輸出資料CEmployee*


	
	for (int i = 0; i < m_number; i++) {
	
		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			printf("equal\n");
			return &m_Employees[i];//傳物件指標位址
			break;
		}
		//else {
		
			//printf("No Data!!\n");//如何回去
			//return nullptr;
		
		//}
	
		
	}
	return nullptr;

}
void CEmployees::Add(const CEmployee& CE) {//傳位址節省運算時間
	
	m_Employees[m_number]=CE;
	m_Employees[m_number].operator= (CE);  //operator
	m_number++;
	 
}

void CEmployees::Modify(int reviseNum, char* reviseItem, char* id) {
	
	for (int i = 0; i < m_number; i++) {


		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			
			switch (reviseNum) {

			case 1://1. 員工編號:

				m_Employees[i].SetID(reviseItem);

				break;

			case 2://2. 員工姓名 :
				m_Employees[i].SetName(reviseItem);
				break;

			case 3://3. 員工部門 :
				m_Employees[i].SetDepartment(reviseItem);

				break;
/*
			case 4://4. 員工年資://CEmployee

				revisem_JobDate = atoi(reviseItem);
				m_Employees[i].SetAge(revisem_JobDate);

				break;
			case 5://5. 員工年齡//CHuman
				reviseage = atoi(reviseItem);
				m_Employees[i].CHuman::SetAge(reviseage);

				break;
			case 6://6. 員工生日://CHuman
				revisem_nDate = atoi(reviseItem);
				m_Employees[i].SetAge(revisem_nDate);
				break;
*/
			case 7://7. 員工級別:
				m_Employees[i].SetRank(reviseItem);
				break;
				/*
			case 8://8. 員工薪水:
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

	cout << "修改失敗";

}
void CEmployees::Modify(int number, int reviseItem, char* id) {
	int revisem_JobDate = 0;
	int reviseage = 0;
	int revisem_nDate = 0;
	int reviseSalary = 0;
	for (int i = 0; i < m_number; i++) {



		if (strcmp(id, m_Employees[i].GetID()) == 0) {
			
			switch (number) {

			
			case 4://4. 員工年資://CEmployee
	
				m_Employees[i].SetAge(reviseItem);

				break;
			case 5://5. 員工年齡//CHuman
				
				m_Employees[i].CHuman::SetAge(reviseItem);

				break;
			case 6://6. 員工生日://CHuman
				
				m_Employees[i].SetAge(reviseItem);
				break;
			
			case 8://8. 員工薪水:
				
				m_Employees[i].SetSalary(reviseItem);
				break;
			}
			
			break;
		}
		else {

			

		}

		cout << "修改失敗";

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

			ischeck = true;//傳物件指標位址
			break;
		}
		else {
			ischeck = false;
		}
		
		//沒搜尋到回傳false;
			
		


	
	}

	return ischeck;
}

void CEmployees::GetAllEmployee() {//輸出全部資料CEmployee



	for (int i = 0; i < m_number; i++) {

		cout << i+1<<"." << endl;
			cout << "員工編號:" << m_Employees[i].GetID() << endl;
			cout << "員工姓名:" << m_Employees[i].GetName() << endl;
			cout << "員工部門:" << m_Employees[i].GetDepartment() << endl;
			cout << "員工年資:" << m_Employees[i].GetAge() << endl;
			cout << "員工年齡:" << m_Employees[i].CHuman::GetAge() << endl;
			cout << "員工生日:" << m_Employees[i].GetBirthday() << endl;
			cout << "員工級別:" << m_Employees[i].GetRank() << endl;
			cout << "員工薪水:"  << "NT$"<< m_Employees[i].GetSalary() << endl;
			

	}


}
