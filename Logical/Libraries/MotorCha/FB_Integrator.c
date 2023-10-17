
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
void FB_Integrator(struct FB_Integrator* inst)
{
	inst->dt = delta_t; 
	inst->out = inst->dt * inst->in + inst->prev_value;
	inst->prev_value = inst->out;
}
