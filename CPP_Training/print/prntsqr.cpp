#include <iostream>
#include <cstdlib>  
#include <cstdio>  
#include <vector>
#include <string>

#include <complex>
using namespace std;

    //compute the square of a number
    double square(double x)
    {
        return x*x;
    }

    //print the square of a number
    void print_square(double x)
    {
        std::cout << "the square of " << x << " is " << square(x) << '\n';
    }

    // get binary size
    size_t get_size(size_t x)
    {
    printf("The size of x is: %ld\n", sizeof(x) );
    }

    // complex numbers function
    void complex_numbers(double Re, double Im){
    std::complex<double> mycomplex(4.0, 2.0);
    // prints the real part using the real function
    cout << "Complex(Re,Im): " << mycomplex << endl;
    cout << "Real part: " << real(mycomplex) << endl;
    cout << "Imaginary part: " << imag(mycomplex) << endl;
    cout << "Absolute Value {sqrt(Re^2 + Im^2)}: " << abs(mycomplex) << endl; 
    cout << "Norm Value Re^2 + Im^2: " << norm(mycomplex) << endl; 
    cout << "Argument Value: " << arg(mycomplex) << endl; 
    cout << "Conjugate Value: " << conj(mycomplex) << endl; 
    }


    int main()
    {
        print_square(1.0); // pr int: the square of 1.234 is 1.52276
        print_square(5.0); // pr int: the square of 5.555 is 30.858
        get_size(1);
       
        //define a complex number
        double Re = 4.0;
        double Im = 3.0;

        //calculate complex number
        complex_numbers(Re,Im);
    return 0;
    }
