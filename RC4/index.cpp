#include<iostream>

//Controllers
#include "Controller/FileController.cpp";
#include "Controller/RC4.cpp";
//Views
#include"Views/Menu.cpp"

using namespace std;

void RC4op(string file, string key);
string randKey(int length =16);

int main() {
	RC4menus* menu = new RC4menus;
	menu->home();
	cout << "退出请直接关闭";
	system("pause");
	while (cin) {
		system("cls");
		string file;
		string key;
		menu->inputFile();
		cin >> file;

		int op1 = 99;
		int op2 = 99;
		menu->menu1();
		cin >> op1;
		switch (op1)
		{
		case 1:
		loop2:
			system("cls");
			menu->menu11();
			cin >> op2;
			switch (op2)
			{
			case 1:
				key=randKey();
				menu->showKey();
				cout << key<<endl;
				break;
			case 2:
				menu->inputKey();
				cin >> key;
				break;
			default:
				menu->error1();
				goto loop2;
				break;
			}
			RC4op(file, key);
			break;
		case 2:
			menu->inputKey();
			cin >> key;
			RC4op(file, key);
			break;
		default:
			break;
		}


		system("pause");
	}
}

void RC4op(string file, string key) {
	RC4files *fi = new RC4files(file);
	string content = fi->file_content;
	RC4 *rc4 = new RC4(key, content);
	fi->write(rc4->RC4_data);
}

string randKey(int length) {
	string key;
	for (int i = 0; i < length;i++) {
		int f = rand() % 3;
		if (f == 0)
			key += 'A' + rand() % 26;
		else if (f == 1)
			key += 'a' + rand() % 26;
		else
			key += '0' + rand() % 10;
	}
	return  key;
}