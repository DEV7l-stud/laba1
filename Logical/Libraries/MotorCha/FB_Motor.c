
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "MotorCha.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Motor(struct FB_Motor* inst)
{
	REAL a = inst->u / inst->ke - inst->w;
	REAL b = a / inst->Tm;
	
	inst->integrator.in = b;
	FB_Integrator(&inst->integrator);
	
	inst->w = inst->integrator.out;
}
