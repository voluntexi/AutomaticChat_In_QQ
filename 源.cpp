#include<iostream>;
#include<Windows.h>;
#include<string>;
using namespace std;
int main()
{
	cout << "-----------***ˢ����***-----------BY:XI" << endl << "             *ע������*"<<endl;
	cout << "**ʹ��֮ǰ���Ҫˢ����QQ���������**" << endl;
	cout << "---------���ɴ򿪶���Ի���------------" << endl;
	cout << "Ȼ���������������ƶ��������" << endl;
	cout << "*******ˢ��Ϊ�����㸴�Ƶ����ݣ�*******" << endl;
	cout << "----------------------------------------" << endl;
	int Continue = 0;

	while (Continue!=-1) {
		string a;
		cout << "��������ѵı�ע��:";
		cin >> a;
		cout << "��������Ҫ�Ĵ�����" << endl;
		int i = 0, num;
		cin >> num;
		cout << "������ˢ��ģʽ----" << endl;
		cout << "����1������ģʽ" << endl << "����2������ģʽ" << endl << "����3������ģʽ" << endl;
		int model, speed;
		cin >> model;
		switch (model)
		{
		case(1):
			speed = 50;
			break;
		case(2):
			speed = 500;
			break;
		case(3):
			speed = 1000;
			break;
		default:
			break;
		}
		Sleep(1500);
		while (i < num)
		{
			HWND wnd;
			wnd = FindWindow(NULL, a.c_str());
			SendMessage(wnd, WM_PASTE, 0, 0);
			keybd_event(VK_RETURN, 0, 0, 0);
			i++;
			Sleep(speed);
		}
		cout << "�Ƿ��������" << endl << "���� -1 �˳�,�������������" << endl;;
		cin >> Continue;

	}
		return 0;

	
}