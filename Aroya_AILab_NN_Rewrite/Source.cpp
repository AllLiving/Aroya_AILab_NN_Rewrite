#include<iostream>
#include"lib\Reader.h"
using namespace std;

int main() {
	AroyaReader train;
	train.read("train.csv");
	//��Ϊ�Ѿ�����
	train.deleteTable(train.findTable("dteday"));
	

	system("pause");
}