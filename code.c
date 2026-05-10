#include <stdio.h>
#include <conio.h>

int main() {
    char key;

    printf("キーボードを押してください！\n");

    key = _getch();
    printf("押したキーは '%c' です。\n",key);
    
    getchar();
    return 0;
    }