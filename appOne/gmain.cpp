#include"libOne.h"
void gmain() {
    window(1000, 1000);
    struct CIRCLE {
        float x, y;//�ʒu
        float r;//���a radius
    };
    struct CIRCLE c1, c2;
    //���a�A����b�A�Ε�distance
    float a, b, distance;
    //�~�P�̏����l
    c1.x = width / 2;
    c1.y = height / 2;
    c1.r = 120;
    //�~�Q�̏����l
    c2.x = 0;
    c2.y = 0;
    c2.r = 80;
    while (notQuit) {
        //�~�Q�̈ʒu������
        c2.x = mouseX;
        c2.y = mouseY;
        //�~�P�Ɖ~�Q�̋��������߂�
        a = c1.x - c2.x;
        b = c1.y - c2.y;
        distance = sqrt(a * a + b * b);
        //�����蔻��
        if (distance <= c1.r + c2.r) {
            fill(255, 0, 0, 200);
        }
        else {
            fill(160, 200, 255);
        }
        //�`��
        clear(160);
        circle(c1.x, c1.y, c1.r * 2);
        circle(c2.x, c2.y, c2.r * 2);
        //���p�O�p�`
        line(c1.x, c1.y, c2.x, c2.y);
        line(c1.x, c1.y, c2.x, c1.y);
        line(c2.x, c1.y, c2.x, c2.y);
        //�e�L�X�g���
        textSize(50);
        text("����=" + (let)distance, 0, 60);
    }
}
