#pragma once

#include <ntifs.h>

class CDriver
{
public:
	void
	Install(
		extinterface::CORE_PAYLOAD payloadId
		)
	{		
		switch (payloadId)
		{
			case extinterface::CORE_PAYLOAD::PingEchoE:
			{
				PingEcho();
				break;
			}
		default:
			break;
		}
	}
private:
	void
	PingEcho()
	{
		//you can use also classical printf (wrapper for DbgPrint in kernel mode)
		DbgPrint("\n\n><- Cpl0 developing starts! ->< \n\n");
	}
};
