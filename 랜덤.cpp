#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {

	int random, num, multi, i, k, j, n;

	srand(time(NULL));
	random = (rand() % 100) + 1;

	cout << "������ ��: " << random << endl;

	cout << "Ư����� ����: "; // Ư����� ������ �Է¹ޱ�
	cin >> n;
	cout << "<Ư������� ����ϴ� ���α׷�>" << endl;

	for (i = 0; i < n; i++) 
	{ 

		cout << i << "��° Ư�� ���: ";
		cin >> multi; // Ư�� ����� �Է¹ޱ�
		cout << "<Ư������� ����ϴ� ���α׷�>" << endl;
		for (k = 1; k <= random; k++) 
		{
			if (k % multi == 0) // �Է��� ���� ����� �������� 0���� Ȱ���Ͽ� ���ϱ�
				cout << k << ", ";
		}
		cout << endl;

		cout << "<Ư����� ���� ����ϴ� ���α׷�>" << endl;
		for (j = 1; j <= random; j++) 
		{
			if (j % multi == 0)
				continue; // �Է��� ���� �����(�������� 0���� Ȱ��) �ݺ������� ���ư���.
			else cout << j << ", "; // �Է��� ���� ����� �ƴϸ� �� ���� ����Ѵ�.
		}
		cout << endl;
	}

	return 0;
}