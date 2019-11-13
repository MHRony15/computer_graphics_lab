#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gdrive = DETECT,gmode;
    initgraph(&gdrive,&gmode,"");


    setfillstyle(1,RED);
    circle(200,140,60);
    floodfill(200,140,WHITE);
    int x1=50,y1=50,x2=350,y2=230;
    setfillstyle(1,GREEN);
    rectangle(x1,y1,x2,y2);
    floodfill(120,120,WHITE);
    getch();
    closegraph();

return 0;
}
