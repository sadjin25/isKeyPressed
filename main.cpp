#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <iostream>
#include <conio.h>

//#define _CRT_NONSTDC_NO_WARNINGS    // 비표준 함수를 사용했을 때 에러 방지
using namespace std;

void setColsoleView() {
    system("mode con:cols=50 lines=20");
    system("title isKeyPressed");
}

int main() {
    setColsoleView();
    char keyPress;
    int asciiValue;
    cout<<"\n\tPress any key\n\tPress ESC to EXIT\n\n\n";
    while(1) {
        keyPress = getch();
        asciiValue = keyPress;

        if(asciiValue == 27) break;     //ESC
        cout << "\tKEY Pressed -> \" "<<keyPress<<" \" Ascii Value ->" <<asciiValue<<"\n\n";
    }
    return 0;
}