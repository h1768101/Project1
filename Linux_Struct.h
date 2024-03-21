#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Ŀ�����������Ϣ
struct ServerInfo {
    string hostname; //Ŀ��������
    string arch; // Ŀ�������ļܹ�
    string cpu; //Ŀ������cpu��Ϣ
    string cpuPhysical; //Ŀ����������cpu����
    string cpuCore; //Ŀ����������CPU������
    string free; //Ŀ�����������ڴ�
    string Hardware_model; //Ӳ���ͺ�
    string version;  //Ŀ�������汾��Ϣ
    string is_internet; // �������
};

struct LinUser {
    string name;
    string passwd;
    string uid;
    string gid;
    string description;
    string pwd;
    string bash;
    bool login;
    string lastPasswd;
    string passwdExpired;
    string lose;
    string userExpired;
    string maxPasswd;
};

struct Logindefs {
    string passMaxDays;
    string passMinDays;
    string passWarnAge;
    string umask;
    string encryptMethod;
};

struct Pwquality {
    string minlen;
    string dcredit;
    string ucredit;
    string lcredit;
    string ocredit;
    string minclass;
    string maxrepeat;
    string maxsequence;
};

struct PortList {
    string netid;
    string state;
    string local;
    string process;
};

struct SSH {
    bool permitRootLogin;
    bool passwordAuthentication;
    bool permitEmptyPasswords;
    string protocol;
    string maxAuthTries;
};

struct FileListPer {
    string name;
    string permission;
    string size;
    string uid;
    string gid;
    string lastReadTime;
    string lastWriteTime;
};

struct FireListWalld {
    string name;
    string status;
};

struct Data {
    ServerInfo info;
    vector<LinUser> user;
    vector<Logindefs> createUser;
    vector<Pwquality> quality;
    vector<PortList> port;
    vector<SSH> configSSH;
    vector<FileListPer> filePer;
    vector<FireListWalld> fileWalld;
};
