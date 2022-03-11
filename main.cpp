#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    const int SIZE = 1000;
    int massiv[SIZE], massiv1[SIZE], massiv2[SIZE], massiv3[SIZE], massiv4[SIZE],
        massiv5[SIZE], massiv6[SIZE], massiv7[SIZE], massiv8[SIZE], massiv9[SIZE];

    int count = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0,
        count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    // Loop for adding 1000 values for 10 arrays.
    for (int i = 0; i<SIZE; i++) {
        int random = rand() % 100 - 50;
        int random1 = rand() % 100 - 50;
        int random2 = rand() % 100 - 50;
        int random3 = rand() % 100 - 50;
        int random4 = rand() % 100 - 50;
        int random5 = rand() % 100 - 50;
        int random6 = rand() % 100 - 50;
        int random7 = rand() % 100 - 50;
        int random8 = rand() % 100 - 50;
        int random9 = rand() % 100 - 50;
        massiv[i] = random;
        massiv1[i] = random1;
        massiv2[i] = random2;
        massiv3[i] = random3;
        massiv4[i] = random4;
        massiv5[i] = random5;
        massiv6[i] = random6;
        massiv7[i] = random7;
        massiv8[i] = random8;
        massiv9[i] = random9;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv[j] < massiv[j + 1]) {
                int a = massiv[j];
                massiv[j] = massiv[j + 1];
                massiv[j + 1] = a;
                count++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv1[j] < massiv1[j + 1]) {
                int b = massiv1[j];
                massiv1[j] = massiv1[j + 1];
                massiv1[j + 1] = b;
                count1++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv2[j] < massiv2[j + 1]) {
                int c = massiv2[j];
                massiv2[j] = massiv2[j + 1];
                massiv2[j + 1] = c;
                count2++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv3[j] < massiv3[j + 1]) {
                int d = massiv3[j];
                massiv3[j] = massiv3[j + 1];
                massiv3[j + 1] = d;
                count3++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv4[j] < massiv4[j + 1]) {
                int e = massiv4[j];
                massiv4[j] = massiv4[j + 1];
                massiv4[j + 1] = e;
                count4++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv5[j] < massiv5[j + 1]) {
                int f = massiv5[j];
                massiv5[j] = massiv5[j + 1];
                massiv5[j + 1] = f;
                count5++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv6[j] < massiv6[j + 1]) {
                int g = massiv6[j];
                massiv6[j] = massiv6[j + 1];
                massiv6[j + 1] = g;
                count6++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv7[j] < massiv7[j + 1]) {
                int h = massiv7[j];
                massiv7[j] = massiv7[j + 1];
                massiv7[j + 1] = h;
                count7++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv8[j] < massiv8[j + 1]) {
                int k = massiv8[j];
                massiv8[j] = massiv8[j + 1];
                massiv8[j + 1] = k;
                count8++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i; j++) {
            if (massiv9[j] < massiv9[j + 1]) {
                int l = massiv9[j];
                massiv9[j] = massiv9[j + 1];
                massiv9[j + 1] = l;
                count9++;
            }
        }
    }

    cout << "Stats: " << endl;
    cout << count << endl;
    cout << count1 << endl;
    cout << count2 << endl;
    cout << count3 << endl;
    cout << count4 << endl;
    cout << count5 << endl;
    cout << count6 << endl;
    cout << count7 << endl;
    cout << count8 << endl;
    cout << count9 << endl;

    int result = (count+count1+count2+count3+count4+count5+count6+count7+count8+count9) / 10;

    cout << "Result: " << result;

    return 0;
}
