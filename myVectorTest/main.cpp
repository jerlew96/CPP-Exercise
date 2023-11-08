#include <iostream>
#include "myVector.h"
using namespace std;

int main() {
    MyVector<int> mv1(10);
    for(int i =0; i<mv1.getSize(); i++){
        mv1[i] = 100+i;
    }
    cout<<mv1;

    MyVector<int> mv2(mv1);
    cout<<mv2[3]<<" "<<mv2[5]<<endl;

    MyVector<int> mv3;
    mv3 = mv1;
    cout<<mv2[3]<<" "<<mv2[5]<<endl;
    cout<<mv3<<endl;
    cout<<mv1;

    return 0;
}
