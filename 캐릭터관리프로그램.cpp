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
		cout << "******캐릭터 정보*******" << endl;
		cout << "캐릭터 이름: " << name << endl;
		cout << "캐릭터 나이: " << age << endl;
		cout << "캐릭터 직업: " << job << endl << endl;
	} 

	GameCharacter(const char* name, int age, const char* job);  //생성자 선언
	GameCharacter(const GameCharacter& character);  //복사 생성자 선언
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
		string menu[5] = { "캐릭터 생성", "캐릭터 복사", "캐릭터 정보 확인", "캐릭터 정보 수정", "종료" }; //반복문으로 메뉴 출력
		cout << "======== 캐릭터 관리 ========" << endl;
		for (int i = 0; i < 5; i++)
			cout << i + 1 << ". " << menu[i] << endl;

		cout << "번호를 선택해주세요: ";
		cin >> input;
		cout << endl;



		if (input == 1)
		{
			cout << "생성할 캐릭터의 이름, 나이, 직업을 순서대로 입력해주세요.(공백으로 구분)" << endl;
			cout << "참고사항: 직업의 종류는 자유롭게!" << endl;
			cout << "--> ";
			cin >> name2 >> age2 >> job2; 
			cout << "캐릭터가 생성되었습니다." << endl;
		}
		GameCharacter person(name2, age2, job2); 
		GameCharacter copy(person); 
		if (input == 2)
		{
			cout << "캐릭터가 복사되었습니다." << endl;
			GameCharacter copy(person);
		}
		if (input == 3)
		{
			person.show_Information();
			copy.show_Information();
		}
		if (input == 4)
		{
			cout << "수정하고 싶은 캐릭터를 선택하세요.(1 or 2): ";
			int input2;
			cin >> input2;
			cout << "설정하고 싶은 이름, 나이, 직업을 입력해주세요." << endl;

			if (input2 == 1) {
				cout << "--> ";
				cin >> name3 >> age3 >> job3;
				person.change(name3, age3, job3);  
				cout << "정상적으로 수정되었습니다." << endl;
			}
			if (input2 == 2) {
				cout << "--> ";
				cin >> name3 >> age3 >> job3;
				copy.change(name3, age3, job3);  
				cout << "정상적으로 수정되었습니다." << endl;
			}

		}
		if (input == 5)  
		{
			cout << "종료되었습니다." << endl;
			break;
		}
	}
	return 0;
}