
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	i = 0;// ������������ - ��������
}

void _CYCLIC ProgramCyclic(void)
{
	if (Click == 1){
		Led[0] = !Led[0]; // ������� �������, ������� �������� �� ������ ��������� 
		if(i%2==0) {
			Led[1] = !Led[1]; // ... �� ������ ���������
		}
		if(i%4==0){
			Led[2] = !Led[2]; // ... �� ������ ���������
		}
		if(i%8==0){
			Led[3] = !Led[3]; // ... �� �������� ���������
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

