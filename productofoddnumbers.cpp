#include <iostream>

using namespace std;

int main(void)

{

int n, Product;

Product = 1;

for (n = 1; n <= 20; n += 2)

Product *= n;

cout << "\nProduct of odd numbers from 1 to 20 = " << Product << "\n";

return 0;

}
