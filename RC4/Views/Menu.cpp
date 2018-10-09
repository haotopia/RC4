#define HEADER_MENU

#include<iostream>
#include<string>
using namespace std;

class RC4menus {
	
private:
	string __HOME__ = "欢迎使用RC4加密系统";
	//MENUS
	string __INPUT_FILE__ = "请输入文件所在的绝对路径：\n（例:c:\\usr\\abc.txt)\n注：目前仅支持文本加密";
	string __MENU_1__ = "请选择您的需要的功能： \n  1.RC4加密 \n  2.RC4解密";
	
	string __MENU_1_1__ = "请选择加密方式： \n 1.随机秘钥加密 \n 2.自设秘钥加密";
	string __MENU_2__ = "请选择加密方式： \n 1.覆盖加密 \n 2.新建文件加密";
	
	string __INPUT_KEY__ = "请输入秘钥：";
	string __SHOW__KEY__ = "请牢记您的秘钥:";

	
	//ERRORS
	string __ERROR1__ = "输入错误，请重新输入";

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