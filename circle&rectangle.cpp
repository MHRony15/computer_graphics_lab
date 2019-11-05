#include<graphics.h>

int main(){
    int gdrive = DETECT,gmode;
    initgraph(&gdrive,&gmode,"");
    setcolor(3);
    circle(300,300,50);
    rectangle(200,200,400,400);
    line(200,200,300,100);
    line(400,200,300,100);
    getch();
    closegraph();

return 0;
}
