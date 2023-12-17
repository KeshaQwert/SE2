#include <iostream>
#include "mycomplex.h"

using namespace std; 

int main()            //тестирование класса комплексных чисел
{
    Complex A, B(-4), C( 23.0, 45.9 ); 

    cout << A << "," << B << "," << C << endl; 
    cout << "A = B + C, A = " << B + C << endl; 

//-----------------------------------------------------------

    Complex M = B - C; 

    cout << "M = B - C, M = " << M << endl;
    cout << "M * A = " << M * A << endl; 
    cout << "M / 4.45 = " << M / 4.45 << endl; 

//-----------------------------------------------------------

    Complex D; 

  	cout << "Enter complex number D = "; 
    cin >> D; 
    A += C + D; 
    cout << "D = " << D << "\nA = " << A << endl; 

    return 0; 
} 
