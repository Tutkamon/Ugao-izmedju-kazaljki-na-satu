#include <stdio.h>

float apsolutna (float f)
{
	if(f<0)
	 f = -f;	 
   return f;	 
}

void main()
{
	int s,m;
	printf("Unesite vreme:\n");
	label1:
	scanf("%d:%d",&s,&m);
	if(s<0)
	{
		printf("Broj sati ne moze biti manji od 0, unesite novo vreme:\n");
		goto label1;
	}
	if(s>23)
	{
		printf("Broj sati ne moze biti veci od 23, unesite novo vreme:\n");
		goto label1;
	}
	if(m<0)
	{
		printf("Broj minuta ne moze biti manji od 0, unesite novo vreme:\n");
		goto label1;
	}
	if(m>59)
	{
		printf("Broj minuta ne moze biti veci od 59, unesite novo vreme:\n");
		goto label1;
	}
	if(s>12)
	 s-=12;
	float ugaoS = 0;
	float ugaoM = 0;
	float ugao = 0;
	int ugaos;
	int ugaom;
	ugaoM = (float) m * 6.0;
	ugaoS = (float)(s * 60.0 + m)*0.5;
	ugao = apsolutna(ugaoM-ugaoS);
	if(ugao>180)
	 ugao = apsolutna(ugao-360);
	ugaos = (int)ugao;
	ugaom = (ugao - ugaos) * 60;
	if(ugaom!=0)
		printf("\nUgao izmedju kazaljki je %d stepeni i %d minuta\n",ugaos,ugaom);
	else
		printf("\nUgao izmedju kazaljki je %d stepeni\n",ugaos);
	
	int Do_Not_Close;
	scanf("%d",&Do_Not_Close);
}
