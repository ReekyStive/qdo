#ifndef _TIP_CPP_
#define _TIP_CPP_

#include <iostream>
#include <string>
#include "include/messeage.hpp"

enum TipType
{
    TooFewParameters,
    UserRequestedHelp,
    InvalidSyntax,
    CheckNeedTag,
    DeleteNeedTag,
    AddNeedTag,
    AddNeedTarget
};

void tip(TipType tip_type)
{
    string tip;

    switch (tip_type)
    {
    case TooFewParameters:
        tip = Messeages.too_few_parameters;
        tip += Messeages.simple_help;
        break;
    
    case UserRequestedHelp:
        tip = Messeages.full_help;
        break;

    case InvalidSyntax:
        tip = Messeages.usage;
        break;

    case CheckNeedTag:
        tip = Messeages.check_need_tag;
        break;
    
    case DeleteNeedTag:
        tip = Messeages.delete_need_tag;
        break;
    
    case AddNeedTag:
        tip = Messeages.add_need_tag;
        break;

    case AddNeedTarget:
        tip = Messeages.add_need_target;
        break;

    default:
        tip = Messeages.simple_help;
        break;
    }

    cout << tip;
}

#endif
