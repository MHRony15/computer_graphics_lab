#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gdrive = DETECT,gmode;
    initgraph(&gdrive,&gmode,"");
    int c=0;
    while(1){
            c++;
        setcolor(rand()%16);
        circle(rand()%800,rand()%800,rand()%80);
        delay(10);
        /*if(c>100){
            cleardevice();
            c=0;
        }*/
    }
    getch();
    closegraph();

return 0;
}



