#include <iostream>
#include "WinFunc.h"
#include "WinAudio.h"

int main()
{
	std::shared_ptr<CAudioFunc> pWin = std::make_shared<CWinAudio>();
	pWin = std::make_shared<CMicGainFunc>(pWin);

	pWin = std::make_shared<CAECFunc>(pWin);

	pWin = std::make_shared<CMuteFunc>(pWin);

	pWin->GetDescription();
	pWin->Method();
	return 0;
}