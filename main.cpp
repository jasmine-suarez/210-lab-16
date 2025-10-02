// COMSC-210 | Lab 16 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;
public:
    // constructors
    Color()                        { red = 0; green = 0; blue = 0; } // default
    Color(int r)                   { red = r; green = 0; blue = 0; } // partial
    Color(int r, int g, int b)     { red = r; green = g; blue = b; } // full parameter
    // setters and getters
    int getRed()            { return red; }
    void setRed(int r)      { red = r; }
    int getGreen()          { return green; }
    void setGreen(int g)    { green = g; }
    int getBlue()           { return blue; }
    void setBlue(int b)     { blue = b; }

    void print() {
        cout << "Red value: " << red << endl;
        cout << "Green value: " << green << endl;
        cout << "Blue value: " << blue << endl;
    }
};

void print(Color);

int main() {
    // color 1
    Color c1;
    c1.setRed(249);
    c1.setGreen(52);
    c1.setBlue(82);
    c1.print();
    print(c1);

    // color 2
    Color c2;
    c2.setRed(178);
    c2.setGreen(248);
    c2.setBlue(41);
    c2.print();
    print(c2);

    // color 3
    Color c3;
    c3.setRed(3);
    c3.setGreen(56);
    c3.setBlue(240);
    c3.print();
    print(c3);

    // color 4
    Color c4;
    c4.print();
    print(c4);

    // color 5
    Color c5(234);
    c5.print();
    print(c5);

    // color 6
    Color c6(96, 25, 31);
    c6.print();
    print(c6);

    return 0;
}

void print(Color c) {
    cout << "(" << c.getRed() << ", " << c.getGreen() << ", "
         << c.getBlue() << ")" << endl << endl;
}