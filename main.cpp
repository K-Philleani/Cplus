#include <iostream>

using namespace std;

/* *常量的定义方式
 * 1.#define 宏常量
 * 2.const修饰的常量
 */

/* 标识符命名规则
 * 1.标识符不可以是关键字
 * 2.标识符是由字母，数字，下划线构成
 * 3.标识符第一个字符只能是字母或者下划线
 * 4.标识符是区分大小写的
 */
#define Day 7

int main() {
    int a = 10;
    cout << "a = " << a << endl;
    cout << "一周一共有" << Day << "天" << endl;
    const int MONTH = 12;
    cout << "一年一共有" << MONTH << "个月" << endl;
}
