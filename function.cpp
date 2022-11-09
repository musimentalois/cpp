
# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout<<"MENU\n";
  cout<<"1.Add\n";
  cout<<"2.substract\n";
  cout<<"3.multiply\n";
  cout<<"4.Divide\n";
  cout<<"5.Modulus\n";

  cout << "Enter your choice: ";
  cin >> op;

  cout << "Enter your two numbers ";
  cin >> num1 >> num2;

  switch(op) {

    case '1':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '2':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '3':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '4':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
       case '5':
      cout << num1 << " % " << num2 << " = " << num1 % num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
