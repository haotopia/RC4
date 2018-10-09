#define HEADER_FILES
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class RC4files {
public:
	string file_site;
	string file_content;
	string file_size;

	RC4files(string site) {
		fstream _file;
		_file.open(site, ios::in);
		if (!_file) {
			cout << "文件不存在" << endl;
			exit;
		}
		else {
			file_site = site;
			getline(_file, file_content);
			file_size = file_content.length();
		}
	}

	//输出文件
	void write(string RC4_out,string goal="out.txt") {
		fstream _file;
		_file.open(goal, ios::out);
		_file << RC4_out;
		_file.close();
	}
	
};