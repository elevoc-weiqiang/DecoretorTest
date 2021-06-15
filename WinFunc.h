#pragma once
#include "Decorator.h"
#include <memory>

class CMicGainFunc : public CDecorator
{
	std::shared_ptr<CAudioFunc> m_pAudioFunc;
public:
	CMicGainFunc(std::shared_ptr<CAudioFunc>pAudioFunc) :m_pAudioFunc(pAudioFunc)
	{}

	~CMicGainFunc()
	{
		std::cout << "CMicGainFunc Exit" << std::endl;
	}

	virtual void GetDescription();
	virtual void Method();
};

class CAECFunc : public CDecorator
{
	std::shared_ptr<CAudioFunc> m_pAudioFunc;
public:
	CAECFunc(std::shared_ptr<CAudioFunc>pAudioFunc) :m_pAudioFunc(pAudioFunc)
	{}

	~CAECFunc()
	{
		std::cout << "CAECFunc Exit" << std::endl;
	}

	virtual void GetDescription();
	virtual void Method();
};

class CMuteFunc : public CDecorator
{
	std::shared_ptr<CAudioFunc> m_pAudioFunc;
public:
	CMuteFunc(std::shared_ptr<CAudioFunc>pAudioFunc) :m_pAudioFunc(pAudioFunc)
	{}

	~CMuteFunc()
	{
		std::cout << "CMuteFunc Exit" << std::endl;
	}

	virtual void GetDescription();
	virtual void Method();
};