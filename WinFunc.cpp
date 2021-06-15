#include "WinFunc.h"

void CMicGainFunc::GetDescription()
{
	std::cout << "this class support MicGain function" << std::endl;
	m_pAudioFunc->GetDescription();
}
void CMicGainFunc::Method()
{
	std::cout << "MicGain function effect" << std::endl;
	m_pAudioFunc->Method();
}

void CAECFunc::GetDescription()
{
	std::cout << "this class support AEC function" << std::endl;
	m_pAudioFunc->GetDescription();
}
void CAECFunc::Method()
{
	std::cout << "AEC function effect" << std::endl;
	m_pAudioFunc->Method();
}

void CMuteFunc::GetDescription()
{
	std::cout << "this class support Mute function" << std::endl;
	m_pAudioFunc->GetDescription();
}
void CMuteFunc::Method()
{
	std::cout << "Mute function effect" << std::endl;
	m_pAudioFunc->Method();
}