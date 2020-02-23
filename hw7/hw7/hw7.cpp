#include <ctime>
#include <iostream>

using namespace std;

int dim1;
int dim2;
int** ary;

void osi() {
    for (int i = 0; i < dim1; i++) {
        for (int j = dim1 - 1; j > -1; j--) {
            cout << ary[i][j] << " ";
        }
        cout << endl;
    }
}
void left() {
    for (int j = dim1 - 1; j > -1; j--) {
        for (int i = 0; i < dim1; i++) {
            cout << ary[i][j] << " ";
        }
        cout << endl;
    }

}
void right() {
    for (int i = 0; i < dim1; i++) {
        for (int j = dim1 - 1; j > -1; j--) {
            cout << ary[j][i] << " ";
        }
        cout << endl;
    }



}
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    cout << "какой размер масива :";
    cin >> dim1;
    dim2 = dim1;
    ary = new int* [dim1];
    for (int i = 0; i < dim1; i++) {
        ary[i] = new int[dim2];
    }
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            ary[i][j] = rand() % 81 + 10;
            cout << ary[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "по оси:" << endl;
    osi();
    cout << endl << "на лево:" << endl;
    left();
    cout << endl << "на право:" << endl;
    right();
}
