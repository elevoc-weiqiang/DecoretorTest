#pragma once
#include "AudioFunc.h"

class CDecorator : public CAudioFunc
{
public:
	virtual void GetDescription() = 0;
	virtual void Method() = 0;
};