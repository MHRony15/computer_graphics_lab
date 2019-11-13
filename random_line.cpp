#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gdrive = DETECT,gmode;
    initgraph(&gdrive,&gmode,"");
    int c=0;
    while(1){
            c++;
        setcolor(rand()%20);
        line(rand()%800,rand()%800,rand()%800,rand()%800);
        delay(50);
        if(c>30){
            cleardevice();
            c=0;
        }
    }
    getch();
    closegraph();

return 0;
}

