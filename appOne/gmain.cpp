#include"libOne.h"
void gmain() {
    window(1000, 1000);
    struct CIRCLE {
        float x, y;//Κu
        float r;//Όa radius
    };
    struct CIRCLE c1, c2;
    //κΣaA³bAΞΣdistance
    float a, b, distance;
    //~PΜϊl
    c1.x = width / 2;
    c1.y = height / 2;
    c1.r = 120;
    //~QΜϊl
    c2.x = 0;
    c2.y = 0;
    c2.r = 80;
    while (notQuit) {
        //~QΜΚuπθ
        c2.x = mouseX;
        c2.y = mouseY;
        //~PΖ~QΜ£πίι
        a = c1.x - c2.x;
        b = c1.y - c2.y;
        distance = sqrt(a * a + b * b);
        //½θ»θ
        if (distance <= c1.r + c2.r) {
            fill(255, 0, 0, 200);
        }
        else {
            fill(160, 200, 255);
        }
        //`ζ
        clear(160);
        circle(c1.x, c1.y, c1.r * 2);
        circle(c2.x, c2.y, c2.r * 2);
        //ΌpOp`
        line(c1.x, c1.y, c2.x, c2.y);
        line(c1.x, c1.y, c2.x, c1.y);
        line(c2.x, c1.y, c2.x, c2.y);
        //eLXgξρ
        textSize(50);
        text("£=" + (let)distance, 0, 60);
    }
}
