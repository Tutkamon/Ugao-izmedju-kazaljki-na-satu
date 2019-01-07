#include <stdio.h>
#include <math.h>
int main()
{
    int h,m;
    float ugao = 0;
    float ugaoM = 0;
    float ugaoH = 0;
    printf("Unesite vreme:\n");
    while (1)
    {
        scanf("%d:%d",&h,&m);
        if(h<0||h>23)
        {
            printf("Sati moraju biti izmedju 0 i 23, unesite novo vreme:");
            continue;
        }
        if(m<0||m>59)
        {
            printf("Minuti moraju biti izmedju 0 i 60, unesite novo vreme:");
            continue;
        }
        if(h>11)
            h-=12;
        break;
    }
    ugaoM=(float)m*(360.0/60.0);
    ugaoH=(360.0/12.0) * (float)h+(1.0/12.0)*ugaoM;
    ugao=ugaoH-ugaoM;
    if(ugao<0.0)
    {
        ugao=0.0-ugao;
    }
    if(ugao>180.0)
    {
        ugao=360.0-ugao;
    }
    printf("Ugao izmedju satne i minutne kazaljke je:%6.2f\n", ugao);
    getchar();
    return 0;
}
