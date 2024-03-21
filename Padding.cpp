#include"Linux_Struct.h"
#include"Event.h"
#include"Command_Excute.h"
#include<libssh/libssh.h>
#include"Padding.h"
void fun(vector<event>& Event, ssh_session session) {
	//2.1检查口令生存周期
	event password_lifetime;
	password_lifetime.description = "检查口令生存周期";
	password_lifetime.basis = "推荐值<=90";
	password_lifetime.command = "awk '/^PASS_MAX_DAYS/ && $2 <= 90 {exit 0} END {exit 1}' / etc / login.defs && echo true || echo false";
	password_lifetime.result = execute_commands(session, password_lifetime.command);
	Event.push_back(password_lifetime);
}