#include <iostream>

using namespace std;

/* *常量的定义方式
 * 1.#define 宏常量
 * 2.const修饰的常量
 */
#define Day 7

int main() {
    int a = 10;
    cout << "a = " << a << endl;
    cout << "一周一共有" << Day << "天" << endl;
    const int MONTH = 12;
    cout << "一年一共有" << MONTH << "个月" << endl;
}
