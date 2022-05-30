#include <iostream>
#include <string>
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
string getPassword(string Password) //3. getPassword : Password �� ����
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
public:
	void login(string Name, string Id, int Password)
	{  
		cout << "���̵� : ";
		string id;
		cin >> id;

		cout << "��й�ȣ : ";
		int pw;
		cin >> pw;

		if (Id == id && Password == pw)
		{
			cout << "=== �α��� ���� ===" << endl;
			cout << Name << "�� ȯ���մϴ�" << endl;
		}
		else
			cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�" << endl;
	}

};



class Cart //6. Ŭ���� Cart : ���� ���� �ڵ�
{
	int choice2; 


public:

	int array = 0;
	string lecture[3] = { "C++ ���α׷���", "Linux ���α׷���", "������" }; 
	string lecture_n[3] = { "0001", "0002", "0003" }; 
	string num[3] = {}; 
	string num2; 
	

	void bag_course() //7. bag_course() : 2�� ���� ��� ��� �Լ�
	{

		
		cout << "�߰��� �м� ��ȣ >>";
		cin >> num2;
		cout << endl;


		for (int i = 0; i < 3; i++)
		{                                 
			if (lecture_n[i] == num2)  
			{
				for (int h = 0; h < 3; h++)
				{
					if (num[h] == lecture[i]) 
					{
						cout << "�̹� My ��ٱ��Ͽ� ����� �ֽ��ϴ�." << endl;

					}


				}
				if (num[i] != lecture[i])
				{
					num[array++] = lecture[i];
				}

			}
			else 
				break;
			


		}


	}


	void put_bag() //8. put_bag() : 3�� ���� ��û Ȯ�� ��� �Լ�
	{
		cout << "======== My ��ٱ��� ========" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << j + 1 << "." << num[j] << endl;
		}
		cout << endl;
	}


	void print() //9. print() : 1�� ��ٱ��� ��� �Լ��� ���� ����� �迭�� �޾Ƽ� ����ϱ�
	{
		cout << "======== ���Ǹ�� ========" << endl;
		for (int k = 0; k < 3; k++)
		{
			cout << "[" << k + 1 << "]" << lecture[k] << " >> " << "000" << k + 1 << endl;
		}
		cout << endl;
	}

};

int main()
{
	string Name, ID;
	int Password;
	int number;

	string lesson[3] = { {"c++ ���α׷���"},{"linux ���α׷���"},{"������"} };
	string bag[3] = { {" "},{" "},{" "} };

	while (1) {  
		cout << "------------------ ���￩�ڴ��б� ���������ý��� ------------------" << endl;
		cout << "1. ȸ������" << endl;
		cout << "2. �α���" << endl << endl;
		cout << "��ȣ�� �Է��ϼ��� >> ";
		int input;
		cin >> input;
		cout << "-------------------------------------------------------------------" << endl;

		if (input == 1)
		{
			Name = setName();
			ID = setId();
			Password = setPassword();

			cout << "=== ȸ������ ���� ===" << endl << endl;
		}
		else if (input == 2)
		{
			Member user;
			user.login(Name, ID, Password);
			break;  
		}
		else
			cout << "1 �Ǵ� 2�� �Է����ּ���" << endl << endl;
	}

	while (1) {  

		cout << "========================" << endl;
		cout << "1. ��ٱ���" << endl;
		cout << "2. ���� ���" << endl;
		cout << "3. ������û" << endl;
		cout << "4. �α׾ƿ�" << endl;
		cout << "��ȣ�� �Է��ϼ���: ";
		int input;
		cin >> input;
		cout << endl;

		if (input == 1)  
		{
			Cart a;
			a.print();
		}
		

		else if (input == 3)  
		{
			cout << "========= My ��ٱ��� =========" << endl;  
			cout << "1. " << bag[0] << endl;
			cout << "2. " << bag[1] << endl;
			cout << "3. " << bag[2] << endl << endl;
		}

		else if (input == 4)  
		{
			cout << "---------------- �α׾ƿ� ----------------" << endl;
			cout << "�α׾ƿ� �Ǿ����ϴ�. �ȳ��� ������." << endl;
			break;
		}
	}
}