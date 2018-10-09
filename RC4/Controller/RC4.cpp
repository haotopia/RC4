#ifndef HEADER_FILES
#include"FileController.cpp"
#endif

#include<iostream>
#include<string>
using namespace std;

class RC4 {
private:
	string RC4_key;
	unsigned int s_box[256];
	int RC4_key_len;
public:
	string RC4_data;
	RC4(string key, string data) {
		RC4_key = key;
		RC4_data = data;
		RC4_key_len = key.length();
		unsigned int k[256];
		for (int i = 0; i < 256; i++)
		{
			s_box[i] = i;
			k[i] = RC4_key[i%RC4_key_len];
		}
		int j = 0;
		for (int i = 0; i < 256; i++)
		{
			j = (j + s_box[i] + k[i]) % 256;
			swap(s_box[i], s_box[j]);
		}
		int i = 0;
		j = 0;
		for (int k = 0; k < RC4_data.length(); k++)
		{
			i = (i + 1) % 256;
			j = (j + s_box[i]) % 256;
			swap(s_box[i], s_box[j]);
			int t = (s_box[i] + s_box[j]) % 256;
			RC4_data[k] ^= s_box[t];
		}
	}
};