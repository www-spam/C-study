#include <iostream>
using namespace std;



//�ּ����� ���� ����


string getName(string Name) // 1. getName() : Name �� ����
{
	return Name;
}
string getId(string Id) //2. getId() : Id�� ����
{
	return Id;
}
int getPassword(int Password) //3. getPassword : Password �� ����
{
	return Password;
}

string setName() //4-1. setName() ȸ�������� �� �̸� �Է¹ޱ�
{
	string Name;
	cout << "�̸� : ";
	cin >> Name;
	return Name;
}
string setId() //4-2. setId() ȸ�������� �� ���̵� �Է¹ޱ�
{
	string Id;
	cout << "���̵� : ";
	cin >> Id;
	return Id;
}
int setPassword() //4-3. setPassword() ȸ�������� �� �̸� �Է¹ޱ�
{
	int Password;
	cout << "��й�ȣ : ";
	cin >> Password;
	return Password;
}

class Member  //5. Ŭ���� Member : �α��� ���� �ڵ�
{
	void login(string Name, string Id, int Password)
	{
		cout << "���̵� : ";
		string id;
		cin >> id;

		cout << "��й�ȣ : ";
		int pw;
		cin >> pw;

		if (Id == id || Password == pw)
		{
			cout << "=== �α��� ���� ===" << endl << endl;
			cout << Name << "�� ȯ���մϴ�" << endl << endl;
		}
		else
			cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�" << endl << endl;
	}

};

