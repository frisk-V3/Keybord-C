#include <stdio.h>
#include <conio.h>

int main() {
    char key;

    printf("キーボードを押してください！（'q' で終了します）\n");

    while (1) {
        key = _getch(); 

        if (key == 'q') {
            printf("\nプログラムを終了します。\n");
            break;
        }

        printf("押したキーは '%c' です。\n", key);
    }

    return 0;
}
