#include <iostream>
using namespace std;


int total(int* a, int* b, int* c, int* d)
{
	//��� ���� ���� �ݾ��� �� ��= total �Լ��� ���ϱ�

	return *a + *b + *c + *d;

}
void myaccounts(string *one, string *we, string *shin, string *people) // myaccount �Լ� = �Լ� ���� �� ���� ���º� �ݾ� ���
{

	cout << "-----------------���� �� ��������-----------------" << endl;

	cout << "|  " << *one << "  |  " << *we << "  |  " << *shin << "  |  " << *people << "   |" << endl;


	cout << "|  5000  " << "|  4000  " << "|   0    " << "|   10    |" << endl;

	cout << "--------------------------------------------------";


}
//total �Լ��� ������ �������� ���� main �Լ��� ���;� �ϰ�, ������ main�Լ��� ������ total_money �� �����ؾ� ��. 

int main()
{
	string bank_name[4] = { "�ϳ�", "�츮", "����", "����" }; 
	int bank[4] = { 5000, 4000, 0, 10 }; // ���� ���� -  bank_name[1] = �츮 / bank[1] = 4000
	int total_money;

	total_money = total (& bank[0], & bank[1], & bank[2], & bank[3]);

	cout << "**************SWING �ڻ� ���� ����**************" << endl;

	myaccounts(&bank_name[0], &bank_name[1], &bank_name[2], &bank_name[3]);

	cout << endl;

	cout << "���� SWING �ڻ� ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� " << total_money << "�� �Դϴ�." << endl;
	cout << "**************************************************" << endl;


}