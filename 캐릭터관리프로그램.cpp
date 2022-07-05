#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
using namespace std;

class GameCharacter 
{  

	char* name;
	int age;
	char* job;
public:
	
	

	void change(char* name, int age, char* job) 
	{
		strcpy(this->name, name);
		this->age = age;
		strcpy(this->job, job);
	} 
	void show_Information() 
	{
		cout << "******ĳ���� ����*******" << endl;
		cout << "ĳ���� �̸�: " << name << endl;
		cout << "ĳ���� ����: " << age << endl;
		cout << "ĳ���� ����: " << job << endl << endl;
	} 

	GameCharacter(const char* name, int age, const char* job);  //������ ����
	GameCharacter(const GameCharacter& character);  //���� ������ ����
	~GameCharacter();
	  
};

GameCharacter::GameCharacter(const char* name, int age, const char* job) 
{  
	int len_n = strlen(name);
	this->name = new char[len_n + 1];
	strcpy(this->name, name);

	this->age = age;

	int len_j = strlen(job);
	this->job = new char[len_j + 1];
	strcpy(this->job, job);
}

GameCharacter::GameCharacter(const GameCharacter& c) { 
	this->name = c.name;
	int len_n = strlen(c.name);
	this->name = new char[len_n + 1];
	strcpy(this->name, c.name);

	this->age = c.age;

	this->job = c.job;
	int len_j = strlen(c.job);
	this->job = new char[len_j + 1];
	strcpy(this->job, c.job);
}

GameCharacter::~GameCharacter() {  
	delete[]name, job;
}

int main()
{
	int input, age2, age3;
	char name2[100], job2[100], name3[100], job3[100];
	
	while (1) {    
		string menu[5] = { "ĳ���� ����", "ĳ���� ����", "ĳ���� ���� Ȯ��", "ĳ���� ���� ����", "����" }; //�ݺ������� �޴� ���
		cout << "======== ĳ���� ���� ========" << endl;
		for (int i = 0; i < 5; i++)
			cout << i + 1 << ". " << menu[i] << endl;

		cout << "��ȣ�� �������ּ���: ";
		cin >> input;
		cout << endl;



		if (input == 1)
		{
			cout << "������ ĳ������ �̸�, ����, ������ ������� �Է����ּ���.(�������� ����)" << endl;
			cout << "�������: ������ ������ �����Ӱ�!" << endl;
			cout << "--> ";
			cin >> name2 >> age2 >> job2; 
			cout << "ĳ���Ͱ� �����Ǿ����ϴ�." << endl;
		}
		GameCharacter person(name2, age2, job2); 
		GameCharacter copy(person); 
		if (input == 2)
		{
			cout << "ĳ���Ͱ� ����Ǿ����ϴ�." << endl;
			GameCharacter copy(person);
		}
		if (input == 3)
		{
			person.show_Information();
			copy.show_Information();
		}
		if (input == 4)
		{
			cout << "�����ϰ� ���� ĳ���͸� �����ϼ���.(1 or 2): ";
			int input2;
			cin >> input2;
			cout << "�����ϰ� ���� �̸�, ����, ������ �Է����ּ���." << endl;

			if (input2 == 1) {
				cout << "--> ";
				cin >> name3 >> age3 >> job3;
				person.change(name3, age3, job3);  
				cout << "���������� �����Ǿ����ϴ�." << endl;
			}
			if (input2 == 2) {
				cout << "--> ";
				cin >> name3 >> age3 >> job3;
				copy.change(name3, age3, job3);  
				cout << "���������� �����Ǿ����ϴ�." << endl;
			}

		}
		if (input == 5)  
		{
			cout << "����Ǿ����ϴ�." << endl;
			break;
		}
	}
	return 0;
}