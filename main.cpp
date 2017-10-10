#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

vector<int> table;
for(int row=1; row < 13; row++)
{
    for(int col=1; col < 13; col++)
    {
        if( (row * col) < 10)
        {
            cout << row * col << "   |";
        }
        else if( (row * col) < 100)
        {
            cout << row * col << "  |";
        }
        else
        {
            cout << row * col << " |";
        }

    }
cout << endl;
}





    return 0;
}
