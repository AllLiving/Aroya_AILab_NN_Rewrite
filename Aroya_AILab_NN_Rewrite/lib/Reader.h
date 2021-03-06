#ifndef	Aroya_READER
#define Aroya_READER
#include<string>
#include<vector>
#include<fstream>
#include<iostream>
#include<sstream>

using namespace std;

//时间计数器
#define START_DAY 1
#define START_MONTH 1
#define START_YEAR 2000

class AroyaReader {
private:
	vector<vector<string>>data;		//全部以string暂存
	stringstream internalSst;		//转换使用
	int rows, columns;
public:
	AroyaReader();
	void read(const char*fileName);
	string getStringData(const int&rows, const int&columns);
	double getDoubleData(const int&rows, const int&columns);
	int findTable(const char*tableName);
	int getRows();
	int getColumns();
	void setTableName(const char*origin, const char*new_);
	void deleteTable(const int&col);

	//空值处理:删除空值行
	void deleteRow(const int&row);
	//非连续数字→离散table
	void discrete(const int&column);
	//自动搜索所有列，自动转所有非数字连续列为离散的列
	void discrete();
};

#endif