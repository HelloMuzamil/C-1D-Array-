#include <iostream>
using namespace std;
int main() {
    int rows = 4; 
 for (int i = 1; i <= rows; ++i) 
{
        for (int k = 1; k <= rows ; ++k) 
		{
           cout << " ";
        } 
        for (int j = 1; j <= 2 * i - 1; ++j) 
		{
          
           cout<<j;
        }

        cout << "\n"; 
        cout << "\n"; 
}

    return 0;
}

