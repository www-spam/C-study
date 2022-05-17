#include <iostream>
using namespace std;

// 주석으로 제시된 조건 표기

class Shape
{
private:
	string NAME;
	int A;  //가로1
	int B;  //세로
	int C;  //가로2

public:
	Shape(int x=0, int y=0, int z=0)
	{
		A = x;
		B = y;
		C = z;
	}

	int getA(int x) //1. getA() : A값 리턴
	{  
		A = x;
		return A;
	}
	int getB(int y) //2. getB() : B값 리턴
	{  
		B = y;
		return B;
	}
	int getC(int z) //3. getC() : C값 리턴
	{  
		C = z;
		return C;
	}

	double AreaOval() //4. AreaOval() : 타원 넓이 출력해주는 함수
	{
		double AreaOval = A * B * 3.14;  //타원 넓이 = 가로 x 세로 x π
		cout << "타원의 넓이는" << AreaOval << "이다" << endl;
		NAME = "CircleA";
		return 0;
	}
	int AreaRect()  //5. AreaRect() : 직사각형 넓이 출력해주는 함수
	{
		int AreaRect = A * B;  
		cout << "직사각형의 넓이는" << AreaRect << "이다" << endl;
		NAME = "Rectangular";
		return 0;
	}
	int AreaLadder()  //6. AreaLadder() : 사다리꼴 넓이 출력해주는 함수
	{
		int AreaLadder = (A + C) * B / 2;  
		cout << "사다리꼴의 넓이는" << AreaLadder << "이다" << endl;
		NAME = "Ladder";
		return 0;
	}

	void setTwo(int x, int y)  //7. setTwo() : 타원의 A,B나 직사각형의 A, B를 설정해주는 함수
	{
		A = x;
		B = y;
	}
	void setThree(int x, int y, int z)  //8. setThree() : 사다리꼴의 A, B, C 길이를 설정해주는 함수
	{
		A = x;
		B = y;
		C = z;
	}




	~Shape()
	{
		cout << "Shape 소멸 " << NAME << "클래스" << endl;
	}
};




int main()
{
	Shape a; //타원
	a.setTwo(5, 1); // 조건 속 타원의 장축이 x축이므로 (1,5)가 아닌 (5,1)
	a.AreaOval();

	Shape b(10, 20); //직사각형
	b.setTwo(10, 20);
	b.AreaRect();

	Shape c(3, 7, 4); //사다리꼴
	c.setThree(3, 7, 4);
	c.AreaLadder();
	c.setThree(5, 10, 6);
	c.AreaLadder();

}