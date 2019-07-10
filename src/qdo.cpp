#include <cstring>
#include "tip.cpp"
#include "command.cpp"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc <= 1)
        tip(TooFewParameters);
    else if (!strcmp(argv[1], "--help"))
        tip(UserRequestedHelp);
    else // Decision command
    {
        if (!strcmp(argv[1], "-list"))
            listTag();
        else if (!strcmp(argv[1], "-check"))
        {
            if (argc >=3)
                checkTag(argv[2]);
            else
                tip(CheckNeedTag);
        }
        else if (!strcmp(argv[1], "-del"))
        {
            if (argc >=3)
                delTag(argv[2]);
            else
                tip(DeleteNeedTag);
        }
        else if (!strcmp(argv[1], "-add"))
        {
            if (argc >=4)
                addTag(argv[2], argv[3]);
            else if (argc == 3)
                tip(AddNeedTarget);
            else // argc == 2
                tip(AddNeedTag);
        }
        else
        {
            exeTag(argv[1]);
        }
    }
    
    return 0;
}
