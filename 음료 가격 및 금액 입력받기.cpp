//�̸� ����� �ޱ�, ���� ���� �� �ݾ� �Է¹ޱ�

#include <iostream> //C++ ǥ�� ������� ���� Ŭ������ ��ü�� ����Ǿ� �־� Ű���� �Է� �� ȭ�� ��½ÿ� �ʿ�
using namespace std; /* namespace : �̸� �浹 ����
					 std �̸� ������ ����� ��� �̸��� std:: ����*/
int main()
{

	cout << "����� �̸��� �����Դϱ�?  "; 

	char name0[12];
	cin.getline(name0, 12, '\n'); // getline : ���� ������ ���ڿ� �Է¹��� �� ����

	cout << "�ݰ����ϴ�." << name0 << "�� \n\n";

	cout << "----------SWING 30----------" << "\n";
	//����
	int coke;
	int water;
	int fanta;

	//����
	int c_num;
	int w_num;
	int f_num;

	cout << "������ ���� �Է��� �����մϴ�.\n\n";

	cout << "�ݶ��� ���� :  ";
	cin >> coke;

	cout << "��ټ��� ���� :  ";
	cin >> water;

	cout << "ȯŸ�� ���� :  "; 
	cin >> fanta;
	cout << "" << endl;


	cout << "������ �Է����ּ���.\n\n";

	cout << "�ݶ� ���� : ";
	cin >> c_num;

	cout << "��ټ� ���� : ";
	cin >> w_num;

	cout << "ȯŸ ���� : ";
	cin >> f_num;

	cout << "----------------------------" << endl; // endl�� ��� ���۸� ����ִ� ����(flush)�� �־ �ӵ��鿡�� \n ���� ������. 

	int price;
	price = (coke * c_num) + (water * w_num) + (fanta * f_num);

	cout << "500���� ���ι޾� ��" << price - 500 << "�� �Դϴ�." << endl;

}