#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
 
void floodfillalgo(int x, int y, int color)
{
    if (getpixel(x, y) == color)
    {
        putpixel(x, y, 5);
        floodfillalgo(x + 1, y, color);
        floodfillalgo(x - 1, y, color);
        floodfillalgo(x, y + 1, color);
        floodfillalgo(x, y - 1, color);
    }
    else return;
}
 
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    rectangle(100, 100, 200, 200);
    floodfillalgo(110, 110, getpixel(110, 110));
    getch();
    closegraph();
 
    return 0;
}
