
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif
void DRIVE(struct DRIVE* inst)
{
	UINT mask=inst->STATE & 0x6f;
	if (!inst->ENABLE)
	{
		inst->CMD = CMD_SHUTDOWN;
	}
	else 
	{
		switch (mask)
		{
			case STATE_DISABLED:
			
				inst->CMD = CMD_SHUTDOWN;
				break;
			case STATE_READY:
			
				inst->CMD = CMD_ENABLED;
				break;
			case STATE_SWITCHED_ON:
			
				inst->CMD = CMD_SWITCHED_ON;
				break;
			
		}
	}
}
