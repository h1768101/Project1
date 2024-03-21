#include <libssh/libssh.h>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <iostream>
#include"Login.h"
#include"Command_Excute.h"
#include"Linux_Struct.h"
#include"Padding.h"
int main(int argc, char** argv)
{   
    ssh_session session = initialize_ssh_session("192.168.181.133", "root", "root");
    if (session == NULL)
    {
        return -1;
    }
    vector<event> Event;
    fun(Event, session);
    cout << Event[0].result << endl;
    ssh_disconnect(session);
    ssh_free(session);

    
    return 0;
}

