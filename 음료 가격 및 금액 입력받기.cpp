//이름 입출력 받기, 음료 가격 및 금액 입력받기

#include <iostream> //C++ 표준 입출력을 위한 클래스와 객체가 선언되어 있어 키보드 입력 및 화면 출력시에 필요
using namespace std; /* namespace : 이름 충돌 방지
					 std 이름 공간에 선언된 모든 이름에 std:: 생략*/
int main()
{

	cout << "당신의 이름은 무엇입니까?  "; 

	char name0[12];
	cin.getline(name0, 12, '\n'); // getline : 공백 포함한 문자열 입력받을 수 있음

	cout << "반갑습니다." << name0 << "님 \n\n";

	cout << "----------SWING 30----------" << "\n";
	//가격
	int coke;
	int water;
	int fanta;

	//개수
	int c_num;
	int w_num;
	int f_num;

	cout << "음료의 가격 입력을 시작합니다.\n\n";

	cout << "콜라의 가격 :  ";
	cin >> coke;

	cout << "삼다수의 가격 :  ";
	cin >> water;

	cout << "환타의 가격 :  "; 
	cin >> fanta;
	cout << "" << endl;


	cout << "개수를 입력해주세요.\n\n";

	cout << "콜라 수량 : ";
	cin >> c_num;

	cout << "삼다수 수량 : ";
	cin >> w_num;

	cout << "환타 수량 : ";
	cin >> f_num;

	cout << "----------------------------" << endl; // endl는 출력 버퍼를 비워주는 과정(flush)가 있어서 속도면에서 \n 보다 느리다. 

	int price;
	price = (coke * c_num) + (water * w_num) + (fanta * f_num);

	cout << "500원을 할인받아 총" << price - 500 << "원 입니다." << endl;

}