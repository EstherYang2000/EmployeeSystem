// Employee.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>

#include "CEmployee.h"
#include "CEmployees.h"
using namespace std;

void insertEmployee();
void searchEmployee();
void reviseEmployee();
void deleteEmpolyee();
CEmployees Company1;

int main()
{
	int choice = 0;

	while (choice != 5)
	{

	
		
		cout << "1.新增Employee資料" << endl;
		cout << "2.利用Employee id查詢基本資料" << endl;
		cout << "3.修改一筆Employee 基本資料" << endl;
		cout << "4.刪除一筆Employee 基本資料" << endl;
		cout << "5.退出" << endl;
		cout << "請選擇你要的選項:";
		cin >> choice;
		cout << endl;
		switch (choice) {

			case 1:
				insertEmployee();
				break;

			case 2:
				searchEmployee();
				break;

			case 3:
				reviseEmployee();
				break;

			case 4:
				deleteEmpolyee();
				break;
			case 5:
				break;
		}
		cout << endl;


	};





}


void insertEmployee() {

	char name[50] = {0,};
	char ID[50] = { 0, };
	int salary=0;
	string rank;
	int m_nDate;
	string yourDepartment;
	

	
	CEmployee employee1; //(ID,0,"");CEmployee::CEmployee(char* ID, int date, string depart) 
	//CHuman human1(name, 0);
	cout << "請輸入你的名字:";
	cin >> name;
	employee1.SetName(name);
	cout << "姓名:" << employee1.GetName();
	cout << endl;
	cout << "請輸入你的出生日期(yyyymmdd):";
	cin >> m_nDate;
	employee1.CHuman::SetAge(m_nDate);
	//cout << endl;
	cout << "年齡:" << employee1.CHuman::GetAge();
	cout << endl;
	cout << "生日:" << employee1.GetBirthday();//改
	cout << endl;
	cout << "請輸入你的到職日(yyyymmdd):";
	cin >> m_nDate;
	employee1.SetAge(m_nDate);
	cout << "年資:" << employee1.GetAge() <<"年";//改(employee1.GetAge() >= 1) ? "年" : "月"
	cout << endl;
	cout << "請輸入你的部門:";
	cin >> yourDepartment;
	employee1.SetDepartment(yourDepartment);
	//cout << endl;
	cout << "你的部門:" << employee1.GetDepartment();
	cout << endl;
	cout << "請輸入你的員工ID:";
	cin >> ID;
	employee1.SetID(ID);
	//cout << endl;
	cout << "你的員工ID:" << employee1.GetID() << endl;
	//Company1.GetEmployee();
	
	cout << "請輸入你的員工薪水:";
	cin >> salary;
	employee1.SetSalary(salary);
	//cout << endl;
	cout << "你的員工薪水: "<< "NT$" << employee1.GetSalary() << endl;
	cout << "請輸入你的員工級別:";
	cin >> rank;
	employee1.SetRank(rank);
	//cout << endl;
	cout << "你的員工級別:" << employee1.GetRank() << endl;
	
	Company1.Add(employee1);
	//Company1.GetEmployee();
	//test
}

void searchEmployee() {

	char ID1[50] = {0,};
	bool isexist = true;
	//CEmployee CE1;
	CEmployee* pEmployee = nullptr;

	do {

		cout << "請輸入要尋找的員工編號:";
		cin >> ID1;
		
		//isexist = Company1.check(ID1);//false 不存在 不跳出 一直搜尋 &true 存在 跳出
		pEmployee = Company1.GetEmployee(ID1);
		//if (isexist) {
			
			//CE1 = *Company1.GetEmployee(ID1);//CE1.operator=(*Company1.GetEmployee(ID1));
			

			if (pEmployee != nullptr) {
				cout << endl;
				cout << "1. 員工編號:" << pEmployee->GetID() << endl;
				cout << "2. 員工姓名:" << pEmployee->GetName() << endl;
				cout << "3. 員工部門:" << pEmployee->GetDepartment() << endl;
				cout << "4. 員工年資:" << pEmployee->GetAge() << "年" << endl;
				cout << "5. 員工年齡:" << pEmployee->CHuman::GetAge() << "歲" << endl;
				cout << "6. 員工生日:" << pEmployee->GetBirthday() << endl;
				cout << "7. 員工級別:" << pEmployee->GetRank() << endl;
				cout << "8. 員工薪水:" << "NT$" << pEmployee->GetSalary() << endl;
				
				/*
				cout << endl;				
				cout << "員工編號:" << CE1.GetID() << endl;
				cout << "員工姓名:" << CE1.GetName() << endl;
				cout << "員工部門:" << CE1.GetDepartment() << endl;
				cout << "員工年資:" << CE1.GetAge() << endl;
				cout << "員工年齡:" << CE1.CHuman::GetAge() << endl;
				cout << "員工生日:" << CE1.GetBirthday() << endl;
				cout << "員工級別:" << CE1.GetRank() << endl;
				cout << "員工薪水:" << "NT$" << CE1.GetSalary() << endl;
				cout << endl;
				*/
				break;
			}
			else {
			 
				cout << "No Data!!!";
				
			
			}
		
		//}else{

			cout << "查無此人，員工資料不存在" << endl;

		//}



	} while (pEmployee == nullptr);
	
	
	



}

void reviseEmployee() {

	char ID1[50] = { 0, };
	bool isexist = true;
	//CEmployee CE1;
	CEmployee* pEmployee = nullptr;

	do {

		cout << "請輸入要修改的員工編號:";
		cin >> ID1;
		pEmployee = Company1.GetEmployee(ID1);
		//isexist = Company1.check(ID1);//false 不存在 不跳出 一直搜尋 &true 存在 跳出
		if (pEmployee != nullptr) {
			//CE1 = *Company1.GetEmployee(ID1);//CE1.operator=(*Company1.GetEmployee(ID1));
			
			cout << "以下是你要修改的員工資料";
			cout << endl;
			cout << "1. 員工編號:" << pEmployee->GetID() << endl;
			cout << "2. 員工姓名:" << pEmployee->GetName() << endl;
			cout << "3. 員工部門:" << pEmployee->GetDepartment() << endl;
			cout << "4. 員工年資:" << pEmployee->GetAge() << "年"<<endl;
			cout << "5. 員工年齡:" << pEmployee->CHuman::GetAge() <<"歲" << endl;
			cout << "6. 員工生日:" << pEmployee->GetBirthday() << endl;
			cout << "7. 員工級別:" << pEmployee->GetRank() << endl;
			cout << "8. 員工薪水:" << "NT$" << pEmployee->GetSalary() << endl;
			cout << endl;
			/*
			cout << endl;
			cout << "1. 員工編號:" << CE1.GetID() << endl;
			cout << "2. 員工姓名:" << CE1.GetName() << endl;
			cout << "3. 員工部門:" << CE1.GetDepartment() << endl;
			cout << "4. 員工年資:" << CE1.GetAge() << endl;
			cout << "5. 員工年齡:" << CE1.CHuman::GetAge() << endl;
			cout << "6. 員工生日:" << CE1.GetBirthday() << endl;
			cout << "7. 員工級別:" << CE1.GetRank() << endl;
			cout << "8. 員工薪水:" << "NT$" << CE1.GetSalary() << endl;
			cout << endl;
			*/
			int reviseNum = 0;
			cout << "請輸入要更改的項目編號:";
			cin >> reviseNum;
			char reviseItem[50] = { 0, };
			int reviseItemInt = 0;
			switch (reviseNum) {

			case 1://1. 員工編號:
				cout << "請輸入你的員工ID:";
				cin >> reviseItem;

				break;

			case 2://2. 員工姓名 :
				cout << "請輸入你的名字:";
				cin >> reviseItem;
				break;

			case 3://3. 員工部門 :
				cout << "請輸入你的部門:";
				cin >> reviseItem;

				break;

			case 4://4. 員工年資://CEmployee
				cout << "請輸入你的到職日(yyyymmdd):";
				cin >> reviseItemInt;
				

				break;
			case 5://5. 員工年齡//CHuman
				cout << "請輸入你的出生日期(yyyymmdd):";
				cin >> reviseItemInt;

				break;
			case 6://6. 員工生日://CHuman
				cout << "請輸入你的出生日期(yyyymmdd):";
				cin >> reviseItemInt;
				break;
			case 7://7. 員工級別:
				cout << "請輸入你的員工級別:";
				cin >> reviseItem;
				break;
			case 8://8. 員工薪水:
				cout << "請輸入你的員工薪水:";
				cin >> reviseItemInt;
				break;
			}
			Company1.Modify(reviseNum, reviseItem,ID1);
			Company1.Modify(reviseNum, reviseItemInt, ID1);

		}
		else {

			cout << "查無此人，員工資料不存在" << endl;

		}



	} while (pEmployee == nullptr);




}

void deleteEmpolyee() {
	char ID1[50] = { 0, };
	bool isexist = true;
	//CEmployee CE1;
	CEmployee* pEmployee = nullptr;

	do {

		cout << "請輸入要刪除員工資料的編號:";
		cin >> ID1;
		
		isexist = Company1.check(ID1);//false 不存在 不跳出 一直搜尋 &true 存在 跳出
		if (isexist) {
			//CE1 = *Company1.GetEmployee(ID1);//CE1.operator=(*Company1.GetEmployee(ID1));
			pEmployee = Company1.GetEmployee(ID1);

			cout << "以下是你要刪除的員工資料";
			cout << endl;
			cout << "員工編號:" << pEmployee->GetID() << endl;
			cout << "員工姓名:" << pEmployee->GetName() << endl;
			cout << "員工部門:" << pEmployee->GetDepartment() << endl;
			cout << "員工年資:" << pEmployee->GetAge() << endl;
			cout << "員工年齡:" << pEmployee->CHuman::GetAge() << endl;
			cout << "員工生日:" << pEmployee->GetBirthday() << endl;
			cout << "員工級別:" << pEmployee->GetRank() << endl;
			cout << "員工薪水:" << "NT$" << pEmployee->GetSalary() << endl;
			/*
			cout << endl;
			cout << "1. 員工編號:" << CE1.GetID() << endl;
			cout << "2. 員工姓名:" << CE1.GetName() << endl;
			cout << "3. 員工部門:" << CE1.GetDepartment() << endl;
			cout << "4. 員工年資:" << CE1.GetAge() << endl;
			cout << "5. 員工年齡:" << CE1.CHuman::GetAge() << endl;
			cout << "6. 員工生日:" << CE1.GetBirthday() << endl;
			cout << "7. 員工級別:" << CE1.GetRank() << endl;
			cout << "8. 員工薪水:" << "NT$" << CE1.GetSalary() << endl;
			cout << endl;
			*/
			
			Company1.Erase(ID1);
			Company1.GetAllEmployee();

		}
		else {

			cout << "查無此人，員工資料不存在" << endl;

		}



	} while (!isexist);



}