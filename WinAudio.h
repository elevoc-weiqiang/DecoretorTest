#pragma once
#include "AudioFunc.h"

class CWinAudio :
    public CAudioFunc
{   
public:
    ~CWinAudio()
    {
        std::cout << "CWinAudio Exit" << std::endl;
    }
    virtual void GetDescription();
    virtual void Method();
};

