#include <iostream> 
#include <Windows.h> 
using namespace std;


class Point {
    int x;
    int y;
public:
    void Init()
    {
        cin >> x >> y;
    }
    void Print()
    {
        cout << x << endl << y << endl;
    }

};

int main()
{
    setlocale(LC_ALL, "RUS");


}