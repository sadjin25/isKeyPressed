#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>

//#define _CRT_NONSTDC_NO_WARNINGS    // 비표준 함수를 사용했을 때 에러 방지
using namespace std;

int main() {
    char keyPress;
    int asciiValue;
    cout<<"\n\t\tPress any key\n\n\t\t Press ESC to EXIT\n\n\n";
    while(1) {
        keyPress = getch();
        asciiValue = keyPress;

        if(asciiValue == 27) break;//ESC
        cout << "\t\t\tKEY Pressed -> \" "<<keyPress<<" \" Ascii Value ->" <<asciiValue<<"\n\n";
    }
}