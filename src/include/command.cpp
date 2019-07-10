#ifndef _COMMAND_CPP_
#define _COMMAND_CPP_

#include <iostream>
#include <fstream>
#include "messeage.hpp"
#include "tip.cpp"
#include "config.cpp"
#include "../run.cpp"
#include "../list.cpp"
#include "../check.cpp"
#include "../add.cpp"
#include "../del.cpp"

using namespace std;

void exeTag(char tag[])
{
    bool valid = false;
    
    // Determine if the tag is valid here
    cout << "Running tag: " << tag << endl;

    if (!valid)
    {
        cout << "'" << tag << "'";
        tip(InvalidSyntax);
    }
}

void listTag()
{
    cout << "Listing tag..." << endl;
}

void checkTag(char tag[])
{
    cout << "Checking tag..." << endl;
    cout << "Tag: " << tag << endl;
}

void addTag(char tag[], char target[])
{
    cout << "Adding tag..." << endl;
    cout << "Tag: " << tag << endl;
    cout << "Target: " << target << endl;
}

void delTag(char tag[])
{
    cout << "Deleting tag..." << endl;
    cout << "Tag: " << tag << endl;
}

#endif
