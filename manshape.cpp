#include<graphics.h>

int main(){
    int gdrive = DETECT,gmode;
    initgraph(&gdrive,&gmode,"");
    setcolor(3);
    rectangle(300,50,350,110);
    line(317,83,333,83);
    line(317,83,325,75);
    line(325,75,333,83);

    circle(310,60,5);
    circle(340,60,5);
    rectangle(310,90,340,100);
    rectangle(260,120,390,250);
    rectangle(260,260,300,400);
    rectangle(350,260,390,400);
    rectangle(230,120,250,250);
    rectangle(400,120,420,250);


    getch();
    closegraph();

return 0;
}

