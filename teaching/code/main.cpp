#include "Integer.h"

int main() {
    Integer i(4);
    // cout << i.m_i;
    cout << i.getIntValue() << endl;
    Integer j(5);
    Integer k = i + j;
    // cout << k.getIntValue() << endl;
    cout << k << endl;
    system("pause");
    return 1;
}
