#ifndef _CONFIG_CPP_
#define _CONFIG_CPP_

#include <iostream>
#include <fstream>
#include <map>
#include "tip.cpp"

using namespace std;

class Config
{
    public:

};

void initConfig()
{
    ifstream fin("qdo.conf");
    if (!fin) // 'qdo.conf' does not exist
    {
        fin.clear();
        fin.close();

        tip(ConfigNotExist);
        ofstream fout("qdo.conf"); // create 'qdo.conf'
        fout << Messeages.init_messeage;

        fin.open("qdo.conf");
        if (fin) // created
            tip(CreateSuccess);
        else // failed
            tip(CreateFailed);
        
        fout.clear();
        fout.close();
    }
    fin.clear();
    fin.close();
}

int readConfig()
{
    return 0;
}

#endif
