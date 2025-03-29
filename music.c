#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

int main(){
    char key;
    while(1){
        key = getch();

        switch (key){
        case '1':
            mciSendString("close 1.mp3",0,0,0);
            mciSendString("play 1.mp3",0,0,0);
            break;
        case '2':
            mciSendString("close 2.mp3",0,0,0);
            mciSendString("play 2.mp3",0,0,0);
            break;
        case '3':
            mciSendString("close 3.mp3",0,0,0);
            mciSendString("play 3.mp3",0,0,0);
            break;
        case '4':
            mciSendString("close 4.mp3",0,0,0);
            mciSendString("play 4.mp3",0,0,0);
            break;
        case '5':
            mciSendString("close 5.mp3",0,0,0);
            mciSendString("play 5.mp3",0,0,0);
            break;
        case '6':
            mciSendString("close 6.mp3",0,0,0);
            mciSendString("play 6.mp3",0,0,0);
            break;
        case '7':
            mciSendString("close 7.mp3",0,0,0);
            mciSendString("play 7.mp3",0,0,0);
            break;
        }

    }
    return 0;
}
