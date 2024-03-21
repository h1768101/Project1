#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//目标主机相关信息
struct ServerInfo {
    string hostname; //目标主机名
    string arch; // 目标主机的架构
    string cpu; //目标主机cpu信息
    string cpuPhysical; //目标主机物理cpu个数
    string cpuCore; //目标主机物理CPU核心数
    string free; //目标主机空闲内存
    string Hardware_model; //硬件型号
    string version;  //目标主机版本信息
    string is_internet; // 联网检测
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
