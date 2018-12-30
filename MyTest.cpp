#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
    using namespace MyLib;
    ArrayList<int> a;
    a.add(10);
    a.add(20);
    cout << "Size of my ArrayList: " << a.size() << endl;
}

