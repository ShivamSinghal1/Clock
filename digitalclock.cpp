#include<stdio.h>
#include<time.h>
#include<graphics.h>

int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    time_t rawTime;
    struct tm* currentTime;
    char a[100];
    while(1){
        rawTime = time(NULL);
        currentTime = localtime(&rawTime);
        strftime(a,100,"%I:%M:%S",currentTime);
        setcolor(11);
        settextstyle(3,0,10);
        outtextxy(120,100,a);
        strftime(a,100,"%p",currentTime);
        settextstyle(3,0,2);
        outtextxy(520,180,a);
        strftime(a,100,"%a, %d %b, %Y",currentTime);
        settextstyle(3,0,5);
        outtextxy(130,270,a);
        delay(1000);
        cleardevice();
    }
    getch();
    closegraph();
}
