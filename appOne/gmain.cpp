#include"libOne.h"
void gmain() {
    window(1000, 1000);
    struct CIRCLE {
        float x, y;//ˆÊ’u
        float r;//”¼Œa radius
    };
    struct CIRCLE c1, c2;
    //’ê•ÓaA‚‚³bAÎ•Ódistance
    float a, b, distance;
    //‰~‚P‚Ì‰Šú’l
    c1.x = width / 2;
    c1.y = height / 2;
    c1.r = 120;
    //‰~‚Q‚Ì‰Šú’l
    c2.x = 0;
    c2.y = 0;
    c2.r = 80;
    while (notQuit) {
        //‰~‚Q‚ÌˆÊ’u‚ğŒˆ’è
        c2.x = mouseX;
        c2.y = mouseY;
        //‰~‚P‚Æ‰~‚Q‚Ì‹——£‚ğ‹‚ß‚é
        a = c1.x - c2.x;
        b = c1.y - c2.y;
        distance = sqrt(a * a + b * b);
        //“–‚½‚è”»’è
        if (distance <= c1.r + c2.r) {
            fill(255, 0, 0, 200);
        }
        else {
            fill(160, 200, 255);
        }
        //•`‰æ
        clear(160);
        circle(c1.x, c1.y, c1.r * 2);
        circle(c2.x, c2.y, c2.r * 2);
        //’¼ŠpOŠpŒ`
        line(c1.x, c1.y, c2.x, c2.y);
        line(c1.x, c1.y, c2.x, c1.y);
        line(c2.x, c1.y, c2.x, c2.y);
        //ƒeƒLƒXƒgî•ñ
        textSize(50);
        text("‹——£=" + (let)distance, 0, 60);
    }
}
