#define HEADER_MENU

#include<iostream>
#include<string>
using namespace std;

class RC4menus {
	
private:
	string __HOME__ = "��ӭʹ��RC4����ϵͳ";
	//MENUS
	string __INPUT_FILE__ = "�������ļ����ڵľ���·����\n����:c:\\usr\\abc.txt)\nע��Ŀǰ��֧���ı�����";
	string __MENU_1__ = "��ѡ��������Ҫ�Ĺ��ܣ� \n  1.RC4���� \n  2.RC4����";
	
	string __MENU_1_1__ = "��ѡ����ܷ�ʽ�� \n 1.�����Կ���� \n 2.������Կ����";
	string __MENU_2__ = "��ѡ����ܷ�ʽ�� \n 1.���Ǽ��� \n 2.�½��ļ�����";
	
	string __INPUT_KEY__ = "��������Կ��";
	string __SHOW__KEY__ = "���μ�������Կ:";

	
	//ERRORS
	string __ERROR1__ = "�����������������";

public:
	void home() {
		cout << __HOME__ << endl;
	}

	/**
		MENUES
	*/
	void inputFile() {
		cout << __INPUT_FILE__ << endl;
	}
	void inputKey() {
		cout << __INPUT_KEY__ << endl;
	}
	void menu1() {
		cout << __MENU_1__ << endl;
	}
	void menu2() {
		cout << __MENU_2__ << endl;
	}
	void menu11() {
		cout << __MENU_1_1__ << endl;
	}
	void showKey() {
		cout << __SHOW__KEY__ << endl;
	}
	/**
		ERRORS
	*/
	void error1() {
		cout << __ERROR1__ << endl;
	}
		
};