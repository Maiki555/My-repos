# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin  >> num1;
    cout << "Enter two operands: ";
    cin  >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:

            cout << "Error! operator is not correct";
            break;
    }
            cout << "\n\nProgrammed by: mike Linnel Dinamling";
    return 0;
}
