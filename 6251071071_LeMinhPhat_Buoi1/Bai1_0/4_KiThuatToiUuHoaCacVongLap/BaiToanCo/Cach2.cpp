// Xét bài toán cổ sau:
// Vừa gà vừa chó, bó lại cho tròn, ba mươi sáu con ,một trăm chân chẳn.
// Hỏi có bao nhiêu gà bao nhiêu chó ?
#include <iostream>
using namespace std;
int main()
{
    for (int x = 1; x <= 24; x++)
    {
        int y = 36 - x;
        if (2 * x + 4 * y == 100)
        {

            cout << "x= " << x << " & y = " << y << endl;
        }
    }
}