#include <iostream>

// The first step in building a new type is often to organize the elements
// it needs into a data structure : a struct
struct Vector
{
    int size;     // number of elements
    double *elem; // pointer to elements
};

Vector v;
// The defined v cannot do so much things since elem does not point
// to anything. We should init it.
void vector_init(Vector &v, int s)
{
    v.elem = new double[s]; // allocate an array of s doubles
    v.size = s;
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v, s); // allocate s element for v

    double sum = 0;
    int i = 0;
    for(i=0; i!=s; i++)
        sum += v.elem[i]; // takes the sum of the elements
    return sum;
}

void f(Vector v, Vector& rv, Vector* pv)
{
    int i1 = v.size; // access through name
    int i2 = rv.size; // access through reference
    int i4 = pv -> size; // access through pointer
}

int main() {
    int s {6};
    int res = read_and_sum(s);
    std::cout << res; // print 0 since the elements are 0 there.
}