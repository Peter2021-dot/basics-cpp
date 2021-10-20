#include <iostream>
#include <typeinfo>
#include <complex>

// Defining custom types
using std::complex;
typedef complex<double> dcomp;
typedef complex<int> ncomp;
typedef short int userAge;


int main () {
    // Declaration and initialization
    float x;
    int i {7}; 

    // Assignation of value 
    x += i;
    i *= x;

    std::cout << typeid(x).name() << " " << i << std::endl; // x is still a float but logs as an integer

    // {} >>>>> = ....
    int bad = 2.18; // bad becomes 2
    // int good {2.18}; // compile time error

    // Using defined user age
    userAge age {21};
    std::cout << age;

    // Semantic use of types 
    dcomp realValueComplex {3.14, 2.18};
    ncomp integerValueComplex {10, 17};

    // Implicit declaration
    auto willBeChar = 'c';
    auto dependsOnReturn = sqrt(1);
}