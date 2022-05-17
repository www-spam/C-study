#include <iostream>
using namespace std;

class Box // class 선언
{
// 선언 X - private 
// 조건 : 멤버변수 접근 지정자 private

	char f1;
	int width, height;


public:


	Box(int w, int h) //생성자
	{
		width = w;
		height = h;
	}

	//문자 세팅 함수, 디퐅트값 지정.
	char setFil(char f = '*')
	{
		f1 = f;
		return f;

	}
	//사각형 크기 지정 함수
	int setSize(int w, int h)
	{

		width = w;
		height = h;
		return w, h;

	}
	//사각형 출력 함수
	void draw(int w, int h) 
	{

		int i, j;


		for (i = 1; i <= h; i++) //세로 h번 
		{

			for (j = 0; j <= w; j++) //가로 w번
			{
				cout << f1; 
			}
			cout << endl;
		}
		cout << endl;
	}

};

int main()
{

	Box square1(3, 4); 
	square1.setFil(); //디폴트값을 지정해뒀었음
	square1.setSize(3, 4);
	square1.draw(3,4);

	cout << endl;

	Box square2(6, 10); 
	square2.setFil('^');
	square2.setSize(6, 10);
	square2.draw(6,10);

}