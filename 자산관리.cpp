#include <iostream>
using namespace std;


int total(int* a, int* b, int* c, int* d)
{
	//모든 은행 계좌 금액의 총 합= total 함수로 구하기

	return *a + *b + *c + *d;

}
void myaccounts(string *one, string *we, string *shin, string *people) // myaccount 함수 = 함수 실행 시 은행 계좌별 금액 출력
{

	cout << "-----------------은행 별 계좌정보-----------------" << endl;

	cout << "|  " << *one << "  |  " << *we << "  |  " << *shin << "  |  " << *people << "   |" << endl;


	cout << "|  5000  " << "|  4000  " << "|   0    " << "|   10    |" << endl;

	cout << "--------------------------------------------------";


}
//total 함수로 총합을 구했으니 이제 main 함수가 나와야 하고, 총합을 main함수의 변수인 total_money 에 저장해야 함. 

int main()
{
	string bank_name[4] = { "하나", "우리", "신한", "국민" }; 
	int bank[4] = { 5000, 4000, 0, 10 }; // 과제 조건 -  bank_name[1] = 우리 / bank[1] = 4000
	int total_money;

	total_money = total (& bank[0], & bank[1], & bank[2], & bank[3]);

	cout << "**************SWING 자산 관리 서비스**************" << endl;

	myaccounts(&bank_name[0], &bank_name[1], &bank_name[2], &bank_name[3]);

	cout << endl;

	cout << "현재 SWING 자산 관리 서비스에 등록된 회원님의 총 자산은 " << total_money << "원 입니다." << endl;
	cout << "**************************************************" << endl;


}