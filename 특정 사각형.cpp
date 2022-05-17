#include <iostream>
using namespace std;

class Box // class ����
{
// ���� X - private 
// ���� : ������� ���� ������ private

	char f1;
	int width, height;


public:


	Box(int w, int h) //������
	{
		width = w;
		height = h;
	}

	//���� ���� �Լ�, ��jƮ�� ����.
	char setFil(char f = '*')
	{
		f1 = f;
		return f;

	}
	//�簢�� ũ�� ���� �Լ�
	int setSize(int w, int h)
	{

		width = w;
		height = h;
		return w, h;

	}
	//�簢�� ��� �Լ�
	void draw(int w, int h) 
	{

		int i, j;


		for (i = 1; i <= h; i++) //���� h�� 
		{

			for (j = 0; j <= w; j++) //���� w��
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
	square1.setFil(); //����Ʈ���� �����ص׾���
	square1.setSize(3, 4);
	square1.draw(3,4);

	cout << endl;

	Box square2(6, 10); 
	square2.setFil('^');
	square2.setSize(6, 10);
	square2.draw(6,10);

}