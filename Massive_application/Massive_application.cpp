﻿#include <iostream>
using namespace std;
void add_char();
int main()
{
    std::cout << "Hello World!\n";
    add_char();
    int massive[10];
    for (int i = 0; i < sizeof(massive) / sizeof(int); i++)
    {
        massive[i] = i;
    }
    int result = sizeof(massive) / sizeof(int);
    // 1-условно "стенки лабиринта"
    // 2-"правильный путь, выход из лабиринта"
    // 0-"ложный путь"
    int mas[33][20] = { {1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,}, // инициализация двумерного массива
                      {1,2,1,0,0,1,0,1,2,2,2,1,1,1,1,0,0,0,0,1,},
                      {1,2,1,1,0,1,0,1,2,1,2,2,2,2,1,0,1,1,0,1,},
                      {1,2,2,2,2,2,2,1,2,1,1,1,1,2,1,0,0,1,0,1,},
                      {1,1,1,1,1,1,2,1,2,1,0,0,1,2,1,1,0,1,0,1,},
                      {1,0,0,1,0,0,2,2,2,1,1,0,0,2,0,0,0,1,0,1,},
                      {1,0,1,1,0,1,1,1,1,1,0,0,1,2,1,1,1,1,0,1,},
                      {1,0,0,0,0,0,0,0,0,1,1,1,1,2,1,0,0,0,0,1,},
                      {1,1,1,1,1,1,0,1,1,1,2,2,2,2,1,0,1,1,1,1,},
                      {1,1,0,0,0,1,0,0,1,1,2,1,1,1,1,0,0,0,0,1,},
                      {1,0,0,1,0,0,0,0,0,1,2,2,2,2,1,1,1,1,0,1,},
                      {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,0,0,0,0,1,},
                      {1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,1,1,1,1,},
                      {1,2,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,},
                      {1,2,1,0,0,0,1,2,2,2,1,0,0,0,0,0,1,1,0,1,},
                      {1,2,1,1,1,1,1,2,1,2,1,1,1,0,1,0,0,0,0,1,},
                      {1,2,1,2,2,2,1,2,1,2,2,2,1,1,1,1,1,1,1,1,},
                      {1,2,1,2,1,2,1,2,1,0,1,2,2,2,2,2,2,2,2,1,},
                      {1,2,1,2,1,2,1,2,1,0,1,1,1,1,1,1,1,1,2,1,},
                      {1,2,1,2,1,2,1,2,1,0,0,0,0,0,0,0,0,0,2,1,},
                      {1,2,1,2,1,2,2,2,1,0,1,1,1,1,1,1,0,1,2,1,},
                      {1,2,1,2,1,1,1,1,1,0,0,0,1,0,1,0,0,1,2,1,},
                      {1,2,1,2,2,1,0,0,1,1,1,0,0,0,1,0,1,1,2,1,},
                      {1,2,1,1,2,1,1,0,0,0,0,0,1,0,1,0,0,1,2,1,},
                      {1,2,1,1,2,1,0,0,1,1,1,1,1,1,1,1,1,1,2,1,},
                      {1,2,1,1,2,1,1,0,1,2,2,2,2,2,2,2,2,2,2,1,},
                      {1,2,1,1,2,1,0,0,1,2,1,1,1,1,1,1,1,1,1,1,},
                      {1,2,1,1,2,1,0,1,1,2,1,1,1,1,1,1,1,1,2,2,},
                      {1,2,1,1,2,1,0,0,1,2,1,1,2,2,2,2,2,2,2,1,},
                      {1,2,1,1,2,1,0,1,1,2,1,1,2,1,1,1,1,1,1,1,},
                      {1,2,1,1,2,1,0,0,1,2,1,1,2,1,0,0,0,1,0,1,},
                      {1,2,2,2,2,1,0,1,1,2,2,2,2,0,0,1,0,0,0,1,},
                      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,} };
    // два цикла - внутренний и внешний, осуществляющие обращение к каждому элементу массива
    for (int i = 0; i < 33; i++) //переключение по строкам
    {
        for (int j = 0; j < 20; j++)// переключение по столбцам
            if (mas[i][j] == 1)
            {
                // вывести два раза символ (номер которого 176 в таблице аски) в консоль
                cout << static_cast<char>(176);
                cout << static_cast<char>(176);
            }
            else
                if (mas[i][j] == 2)
                    cout << "::";
                else
                cout << "  ";  // вывести два пробела
        cout << endl;

    }

    int my_size = sizeof(mas) / sizeof(int);
    char gas[4];
    gas[0] = 'G';
    gas[1] = 'a';
    gas[2] = 's';
    gas[3] = '\0';
    cout << gas;
    int n = 1;
    char* hat = (char*)malloc(sizeof(char));
    for (int i = 0; i <=10; i++)
    {
        n = i + 1;
        char* temp = (char*)malloc((++n) * sizeof(char));
        for (int j = 0; j < n; j++) {
            if (temp != NULL)
                temp[j] = hat[j];

            temp[n-2] = '1';
        }
        
        cout << "+\0" << endl;
        free(hat);
        hat = (char*)malloc((n)*sizeof(char));
   
            for (int j = 0; j < n; j++) {
                hat[j] = temp[j];
            }
        
        temp = nullptr;
        free(temp);
        
    }
  //  hat[] = '\0';
   // strcpy_s(hat,  sizeof(char*),"hat");
    cout << hat<<endl;

}
void add_char()
{
    char* hat = (char*)malloc(sizeof(char));
    int i = 0;
    int n = 1;
    
    char key;
    
   char key_add = 'y';
    while (key_add != 'n') {
        n = i + 1;
        cout << "Enter letter" << endl;
        cin >> key;
        char* temp = (char*)malloc((++n) * sizeof(char));
        for (int j = 0; j < n; j++) {
            if (temp != NULL)
                temp[j] = hat[j];

            temp[n - 2] = key;
        }

        cout << "+\0" << endl;
        free(hat);
        hat = (char*)malloc((n) * sizeof(char));

        for (int j = 0; j < n; j++) {
            hat[j] = temp[j];

        }


        temp = nullptr;
        free(temp);
        cout << "Go (y/n)" << endl;
        cin >> key_add;
        i++;
    }
    hat[i] = '\0';
    cout << hat;
}
