#include <iostream>
#include <string>
using namespace std;

//�ּ����� ���� ����

class Member //5. Ŭ���� Member : �α��� ���� �ڵ�
{
	string Name, Id;
	int Password;
public:
	string getName() //1. getName() : Name �� ����
	{
		return Name;
	}
	string getId() //2. getId() : Id�� ����
	{
		return Id;
	}
	int getPassword() //3. getPassword : Password �� ����
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
	void login(string Name, string ID, int Password) 
	{  
		cout << "���̵�: ";
		string id;
		cin >> id;

		cout << "��й�ȣ: ";
		int pw;
		cin >> pw;

		if (ID == id && Password == pw)
		{
			cout << "=== �α��� ���� ===" << endl;
			cout << Name << "�� ȯ���մϴ�" << endl;
		}
		else
			cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�" << endl;
	}
};







int main()
{
	string Name, Id;
	int Password{};

	while (1)
	{
		cout << "------------------ ���￩�ڴ��б� ���������ý��� ------------------" << endl;
		cout << "1. ȸ������" << endl;
		cout << "2. �α���" << endl << endl;
		cout << "��ȣ�� �Է��ϼ��� >> ";
		int input;
		cin >> input;
		cout << "-------------------------------------------------------------------" << endl;

		if (input == 1)
		{
			Member member;
			member.setName();
			member.setId();
			member.setPassword();

			cout << "=== ȸ������ ���� ==="  << endl;
		}
		else if (input == 2)
		{
			Member mEmber;
			mEmber.login(Name, Id, Password);
			break;  
		}
		else
			cout << "1 �Ǵ� 2�� �Է����ּ���"  << endl;
	}

}

