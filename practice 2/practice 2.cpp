#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::pow;

void first_task() {
    double h, R, r, l;
    cout << "Type height, Radius 1 and radius 2, l: ";
    cin >> h >> R >> r >> l;

    cout << "V = " << (1./3) * M_PI * h * (pow(R, 2) + R * r + pow(r, 2)) << endl;
    cout << "S = " << M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2)) << endl;
}

void second_task() {
    double a, x;
    cout << "Type a, x: ";
    cin >> a >> x;

    if (x == 0) {
        cout << "Cant solve" << endl; return;
    }

    if (abs(x) < 1) {
        cout << a * log(x) << endl;
        return;
    }
    else if (a < pow(x, 2)) {
        cout << "Cant solve" << endl; return;
    }
    cout << sqrt(a - pow(x, 2)) << endl;
}

void third_task() {
    double x, y, b;
    cout << "Type x, y, b: ";
    cin >> x >> y >> b;

    if (b - y <= 0 || b - x < 0) {
        cout << "Cant solve" << endl; return;
    }
    cout << log(b - y) * sqrt(b - x);
}

void order() {
    int n;
    cout << "Input n: ";
    cin >> n;

    for (int i = n; i < n + 10; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

void tabulation() {
    double top, bot;
    for (double x = -4; x <= 4;) {
        top = pow(x, 2) - 2 * x + 2;
        bot = x - 1;
        if (bot != 0) {
            cout << "x: " << x << " y: " << top / bot << endl;
        }
        else {
            cout << "x: " << x << " y: inf" << endl;
        }
        x += 0.5;
    }
}

int main()
{
    first_task();
    second_task();
    third_task();
    order();
    tabulation();
}

