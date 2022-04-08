
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	i = 0;// ѕеремененна€ - счЄетчик
}

void _CYCLIC ProgramCyclic(void)
{
	if (Click == 1){
		Led[0] = !Led[0]; // Ёлемент массива, который отвечает за первый светодиод 
		if(i%2==0) {
			Led[1] = !Led[1]; // ... за второй светодиод
		}
		if(i%4==0){
			Led[2] = !Led[2]; // ... за третий светодиод
		}
		if(i%8==0){
			Led[3] = !Led[3]; // ... за четвЄртый светодиод
		}
		i++;}
	else{
		Led[0] = LED1;
		Led[1] = LED2;
		Led[2] = LED3;
		Led[3] = LED4;
	}
	

}

void _EXIT ProgramExit(void)
{
	
}

