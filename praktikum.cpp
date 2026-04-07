#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int x;
    //perulangan dengan for 
    //mencetak tulisan sebanyak 5 kali
    cout << "PERULANGAN FOR" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Teknologi informasi UMY" << endl;
    }
    cout << endl;

    srand(time(0));

    //perulangan dengan while
    cout << "PERULANGAN WHILE" << endl;
    x = 1 + rand() % 10;
    while (x != 5)
    {
        cout << "Nilai x: " << x << endl;
        x = 1 + rand() % 10;
    }
    cout << "Bilangan acak while yang terakhir =" << x << endl;
    cout << endl;
}
