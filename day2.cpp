#include <iostream>
#include <typeinfo>
#include <complex>
#include <vector>

// Defining custom types
using std::complex;
using std::vector;
typedef complex<double> dcomp;
typedef complex<int> ncomp;
typedef int userAge;

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
    std::cout << age << std::endl;

    // Semantic use of types 
    dcomp realValueComplex {3.14, 2.18};
    ncomp integerValueComplex {10, 17};

    // Implicit declaration
    auto willBeChar = 'c';
    auto dependsOnReturn = sqrt(1);

    // Constants in C++
    const userAge ageNahum {21};
    userAge changeableAge {21};
    constexpr userAge twiceAgeNahum {2*ageNahum}; // Err is ageNahum is not const
    const userAge twiceChangeableAge {2*changeableAge}; // Ok, may be evaluated at run time

    double sum(const vector<double>&); // sum will not modify its arg
    //vector<double> v {2.18, 6.28, 3.14};
    //const double s1 {sum(v)};
    // constexpr double s2 {sum(v)}; // err since sum(v is not const)

    // pointers, arrays and loops
    userAge listAges[7]; // an array of 7 elements 
    userAge* p = &listAges[3]; // p points to the fourth element of listAges
    std::cout << *p << std::endl;
    
}
