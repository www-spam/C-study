#include <iostream>
#include <string>
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
int setPassword() //4-3. setPassword() 회원가입할 때 이름 입력받기
{  
	int Password;
	cout << "비밀번호 : ";
	cin >> Password;
	return Password;
}

class Member  //5. 클래스 Member : 로그인 구현 코드
{
public:
	void login(string Name, string Id, int Password)
	{  
		cout << "아이디 : ";
		string id;
		cin >> id;

		cout << "비밀번호 : ";
		int pw;
		cin >> pw;

		if (Id == id && Password == pw)
		{
			cout << "=== 로그인 성공 ===" << endl;
			cout << Name << "님 환영합니다" << endl;
		}
		else
			cout << "아이디 혹은 비밀번호가 틀렸습니다" << endl;
	}

};



class Cart //6. 클래스 Cart : 메인 구현 코드
{

public:

	int array = 0;
	string lecture[3] = { "C++ 프로그래밍", "Linux 프로그래밍", "리버싱" }; 
	string lecture_n[3] = { "0001", "0002", "0003" }; 
	string num[3] = {}; 
	string num2; 
	

	void bag_course() //7. bag_course() : 2번 강의 담기 기능 함수
	{

		
		cout << "추가할 학수 번호 >>";
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
						cout << "이미 My 장바구니에 담겨져 있습니다." << endl;

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


	void put_bag() //8. put_bag() : 3번 수강 신청 확인 기능 함수
	{
		cout << "======== My 장바구니 ========" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << j + 1 << "." << num[j] << endl;
		}
		cout << endl;
	}


	void print() //9. print() : 1번 장바구니 기능 함수로 강의 목록을 배열로 받아서 출력하기
	{
		cout << "======== 강의목록 ========" << endl;
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

	string lesson[3] = { {"c++ 프로그래밍"},{"linux 프로그래밍"},{"리버싱"} };
	string bag[3] = { {" "},{" "},{" "} };

	while (1) {  
		cout << "------------------ 서울여자대학교 종합정보시스템 ------------------" << endl;
		cout << "1. 회원가입" << endl;
		cout << "2. 로그인" << endl << endl;
		cout << "번호를 입력하세요 >> ";
		int input;
		cin >> input;
		cout << "-------------------------------------------------------------------" << endl;

		if (input == 1)
		{
			Name = setName();
			ID = setId();
			Password = setPassword();

			cout << "=== 회원가입 성공 ===" << endl << endl;
		}
		else if (input == 2)
		{
			Member user;
			user.login(Name, ID, Password);
			break;  
		}
		else
			cout << "1 또는 2만 입력해주세요" << endl << endl;
	}

	while (1) {  

		cout << "========================" << endl;
		cout << "1. 장바구니" << endl;
		cout << "2. 강의 담기" << endl;
		cout << "3. 수강신청" << endl;
		cout << "4. 로그아웃" << endl;
		cout << "번호를 입력하세요: ";
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
			cout << "========= My 장바구니 =========" << endl;  
			cout << "1. " << bag[0] << endl;
			cout << "2. " << bag[1] << endl;
			cout << "3. " << bag[2] << endl << endl;
		}

		else if (input == 4)  
		{
			cout << "---------------- 로그아웃 ----------------" << endl;
			cout << "로그아웃 되었습니다. 안녕히 가세요." << endl;
			break;
		}
	}
}
