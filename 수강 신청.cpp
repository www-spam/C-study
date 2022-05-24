#include <iostream>
using namespace std;



//주석으로 조건 나열


string getName(string Name) // 1. getName() : Name 값 리턴
{
	return Name;
}
string getId(string Id) //2. getId() : Id값 리턴
{
	return Id;
}
int getPassword(int Password) //3. getPassword : Password 값 리턴
{
	return Password;
}

string setName() //4-1. setName() 회원가입할 때 이름 입력받기
{
	string Name;
	cout << "이름 : ";
	cin >> Name;
	return Name;
}
string setId() //4-2. setId() 회원가입할 때 아이디 입력받기
{
	string Id;
	cout << "아이디 : ";
	cin >> Id;
	return Id;
}
int setPassword() //4-3. setPassword() 회원가입할 때 비밀번호 입력받기
{
	int Password;
	cout << "비밀번호 : ";
	cin >> Password;
	return Password;
}

class Member  //5. 클래스 Member : 로그인 구현 코드
{
	void login(string Name, string Id, int Password)
	{
		cout << "아이디 : ";
		string id;
		cin >> id;

		cout << "비밀번호 : ";
		int pw;
		cin >> pw;

		if (Id == id || Password == pw)
		{
			cout << "=== 로그인 성공 ===" << endl;
			cout << Name << "님 환영합니다" << endl;
		}
		else
			cout << "아이디 혹은 비밀번호가 틀렸습니다" << endl;
	}

};

