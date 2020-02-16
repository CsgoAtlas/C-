#include <iostream>
using namespace std;

int i;
int j;
char sign;
int option;
float height;
int write() {
    cout << "Укажите символ для рисования фигур: ";
    cin >> sign;
    cout << "Какую фигуру нарисовать: \n1)Равнобедреный треугольник \n2)Развернутый треугольник\n3)Ромб \n4)Прямоугольный треугольник\n";
    cin >> option;
    cout << "Укажите высоту (не < 2): ";
    cin >> height;
    if (height < 2) {
        cout << "Ошибка, число менше 2";
    }
    return sign, option, height;
}
void figure() {
    write();
    if (option == 1)
    {
        for (i = 0; i < height; i++)
        {
            for (j = 1; j < height - i; j++)
            {
                cout << ' ';
            }
            for (j = height - 2 * i; j <= height; j++)
            {
                cout << sign;
            }
            cout << "\n";
        }
    }

    if (option == 2)
    {
        for (i = 1; i <= height; i++) {
            for (j = 1; j < i; j++)
            {
                cout << " ";
            }
            if (i == height)
            {
                cout << sign;
            }

            else if (i == 1)
            {
                for (j = 1; j <= (height * 2 - 1); j++)
                {
                    cout << sign;
                }
            }
            else
            {
                cout << sign;
            }
            for (j = 1; j <= 2 * ((height - i + 1) - 2) + 1; j++)
            {
                cout << sign;
            }

        }
    }
    if (option == 3)
    {
        for (i = 0; i < 2 * height - 1; ++i)
        {
            for (j = 0; j < abs(height - i - 1); ++j) {
                cout << ' ';
            }

            for (j = 0; j < ((i < height) ? (2 * i + 1) : (4 * height - 2 * i - 3)); ++j)
                cout << sign;

            cout << "\n";
        }
    }
    if (option == 4)
    {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < height; x++)
                if (x <= y)
                    cout << sign;
                else
                    cout << " ";
            cout << "\n";


        }
    }
    else
    {
        cout << "Некоректная фигура!";
    }
}
int main() {
    setlocale(LC_ALL, "rus");
    figure();
}
