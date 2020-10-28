#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[255] = "", a[255] = ""; // объявление массивов символов
    int n, j, k = 0; // объявление требуемых переменных
    printf("vvedite text do 255 simvolov (primer: a = 10*2+3. b = 10+10+10+1010100): \n");
    fgets(str, 255, stdin); // ввод строки с клавиатуры
    n = strlen(str) - 1; // запись в переменную n длинны строки введенной с клавиатуры
    for (int i = 0; i < n; i++) {
        if (str[i] == '=') // поиск в введенной строке символа равно
        {
            j = i;
            do
            {
                if (isalpha(str[j])) // проверка символа на то буква ли это
                {
                    a[k] = str[j]; // запись искомого символа в новый массив символов
                    k++;
                    break;
                }
                j--;
            } while (j >= 0);
        }
    }

    for (int z = 0; z < n; z++) // вывод искомого
        printf("%c ", a[z]);

    return 0;
}