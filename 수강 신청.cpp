#include <iostream>
#include <string>
using namespace std;

//주석으로 조건 나열

class Member //5. 클래스 Member : 로그인 구현 코드
{
	string Name, Id;
	int Password;
public:
	string getName() //1. getName() : Name 값 리턴
	{
		return Name;
	}
	string getId() //2. getId() : Id값 리턴
	{
		return Id;
	}
	int getPassword() //3. getPassword : Password 값 리턴
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
	int setPassword() //4-3. setPassword() 회원가입할 때 이름 입력받기
	{
		int Password;
		cout << "비밀번호 : ";
		cin >> Password;
		return Password;
	}
	void login(string Name, string ID, int Password) 
	{  
		cout << "아이디: ";
		string id;
		cin >> id;

		cout << "비밀번호: ";
		int pw;
		cin >> pw;

		if (ID == id && Password == pw)
		{
			cout << "=== 로그인 성공 ===" << endl;
			cout << Name << "님 환영합니다" << endl;
		}
		else
			cout << "아이디 혹은 비밀번호가 틀렸습니다" << endl;
	}
};







int main()
{
	string Name, Id;
	int Password{};

	while (1)
	{
		cout << "------------------ 서울여자대학교 종합정보시스템 ------------------" << endl;
		cout << "1. 회원가입" << endl;
		cout << "2. 로그인" << endl << endl;
		cout << "번호를 입력하세요 >> ";
		int input;
		cin >> input;
		cout << "-------------------------------------------------------------------" << endl;

		if (input == 1)
		{
			Member member;
			member.setName();
			member.setId();
			member.setPassword();

			cout << "=== 회원가입 성공 ==="  << endl;
		}
		else if (input == 2)
		{
			Member mEmber;
			mEmber.login(Name, Id, Password);
			break;  
		}
		else
			cout << "1 또는 2만 입력해주세요"  << endl;
	}

}

