#pragma once
#include<vector>
#include<string>
using namespace std;
struct event {
	string description; //待检查项
	string basis;//判定依据
	string command;//待检查口令
	//string value;  //待检查值的多少
	string result;//待检查的结果
};