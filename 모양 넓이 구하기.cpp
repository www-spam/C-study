#include <iostream>
using namespace std;

// �ּ����� ���õ� ���� ǥ��

class Shape
{
private:
	string NAME;
	int A;  //����1
	int B;  //����
	int C;  //����2

public:
	Shape(int x=0, int y=0, int z=0)
	{
		A = x;
		B = y;
		C = z;
	}

	int getA(int x) //1. getA() : A�� ����
	{  
		A = x;
		return A;
	}
	int getB(int y) //2. getB() : B�� ����
	{  
		B = y;
		return B;
	}
	int getC(int z) //3. getC() : C�� ����
	{  
		C = z;
		return C;
	}

	double AreaOval() //4. AreaOval() : Ÿ�� ���� ������ִ� �Լ�
	{
		double AreaOval = A * B * 3.14;  //Ÿ�� ���� = ���� x ���� x ��
		cout << "Ÿ���� ���̴�" << AreaOval << "�̴�" << endl;
		NAME = "CircleA";
		return 0;
	}
	int AreaRect()  //5. AreaRect() : ���簢�� ���� ������ִ� �Լ�
	{
		int AreaRect = A * B;  
		cout << "���簢���� ���̴�" << AreaRect << "�̴�" << endl;
		NAME = "Rectangular";
		return 0;
	}
	int AreaLadder()  //6. AreaLadder() : ��ٸ��� ���� ������ִ� �Լ�
	{
		int AreaLadder = (A + C) * B / 2;  
		cout << "��ٸ����� ���̴�" << AreaLadder << "�̴�" << endl;
		NAME = "Ladder";
		return 0;
	}

	void setTwo(int x, int y)  //7. setTwo() : Ÿ���� A,B�� ���簢���� A, B�� �������ִ� �Լ�
	{
		A = x;
		B = y;
	}
	void setThree(int x, int y, int z)  //8. setThree() : ��ٸ����� A, B, C ���̸� �������ִ� �Լ�
	{
		A = x;
		B = y;
		C = z;
	}




	~Shape()
	{
		cout << "Shape �Ҹ� " << NAME << "Ŭ����" << endl;
	}
};




int main()
{
	Shape a; //Ÿ��
	a.setTwo(5, 1); // ���� �� Ÿ���� ������ x���̹Ƿ� (1,5)�� �ƴ� (5,1)
	a.AreaOval();

	Shape b(10, 20); //���簢��
	b.setTwo(10, 20);
	b.AreaRect();

	Shape c(3, 7, 4); //��ٸ���
	c.setThree(3, 7, 4);
	c.AreaLadder();
	c.setThree(5, 10, 6);
	c.AreaLadder();

}