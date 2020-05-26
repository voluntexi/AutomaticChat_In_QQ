#include<iostream>;
#include<Windows.h>;
#include<string>;
using namespace std;
int main()
{
	cout << "-----------***刷屏器***-----------BY:XI" << endl << "             *注意事项*"<<endl;
	cout << "**使用之前请打开要刷屏的QQ好友聊天框**" << endl;
	cout << "---------不可打开多个对话框！------------" << endl;
	cout << "然后输入完后将鼠标光标移动到输入框！" << endl;
	cout << "*******刷屏为发送你复制的内容！*******" << endl;
	cout << "----------------------------------------" << endl;
	int Continue = 0;

	while (Continue!=-1) {
		string a;
		cout << "请输入好友的备注名:";
		cin >> a;
		cout << "请输入需要的次数：" << endl;
		int i = 0, num;
		cin >> num;
		cout << "请输入刷屏模式----" << endl;
		cout << "输入1：快速模式" << endl << "输入2：正常模式" << endl << "输入3：慢速模式" << endl;
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
		cout << "是否继续？？" << endl << "输入 -1 退出,输入任意键继续" << endl;;
		cin >> Continue;

	}
		return 0;

	
}