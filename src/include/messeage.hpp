#ifndef _MESSEAGE_HPP_
#define _MESSEAGE_HPP_

#include <string>

using namespace std;

struct Messeage
{
    public:
        const string usage = " is not a tag or a qdo command. See 'qdo --help'.\n";
        const string too_few_parameters = "Too few parameters. You can use:\n\n";
        const string delete_need_tag = "Tag is needed.\nUse 'qdo [-del] <tag>' to delete a tag.\n";
        const string add_need_tag = "Tag and target command is needed.\nUse 'qdo [-add] <tag> <command>' to add a tag.\n";
        const string add_need_target = "Target command is needed.\nUse 'qdo [-add] <tag> <command>' to add a tag.\n";
        const string simple_help = "qdo <tag>\t\t\tExecute a bound operation\nqdo [-list]\t\t\tList all tags\nqdo [-check] <tag>\t\tCheck for a bound operation\nqdo [-add] <tag> <command>\tAdd a tag\nqdo [-del] <tag>\t\tDelete a tag\n\n'qdo --help' to show full help.\n";
        const string full_help = "This is full help.\n";
} Messeages;

#endif
