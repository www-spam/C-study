#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {

	int random, num, multi, i, k, j, n;

	srand(time(NULL));
	random = (rand() % 100) + 1;

	cout << "랜덤한 수: " << random << endl;

	cout << "특정배수 개수: "; // 특정배수 개수를 입력받기
	cin >> n;
	cout << "<특정배수만 출력하는 프로그램>" << endl;

	for (i = 0; i < n; i++) 
	{ 

		cout << i << "번째 특정 배수: ";
		cin >> multi; // 특정 배수를 입력받기
		cout << "<특정배수만 출력하는 프로그램>" << endl;
		for (k = 1; k <= random; k++) 
		{
			if (k % multi == 0) // 입력한 수의 배수를 나머지가 0임을 활용하여 구하기
				cout << k << ", ";
		}
		cout << endl;

		cout << "<특정배수 제외 출력하는 프로그램>" << endl;
		for (j = 1; j <= random; j++) 
		{
			if (j % multi == 0)
				continue; // 입력한 수의 배수면(나머지가 0임을 활용) 반복문으로 돌아간다.
			else cout << j << ", "; // 입력한 수의 배수가 아니면 그 수를 출력한다.
		}
		cout << endl;
	}

	return 0;
}