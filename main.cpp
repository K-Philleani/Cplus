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

    // 数据类型的存在意义: 给变量分配合适的内存空间

    // 整型
    // 1.短整型 (-32758 ~ 32767)
    short num1 = 10;
    // 2.整型
    int num2 = 10;
    // 3.长整型
    long num3 = 10;
    // 4.长长整型
    long long num4 = 10;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;

    // sizeof
    cout << "short占用内存空间为：" << sizeof(short) << endl;
    cout << "int占用内存空间为：" << sizeof(int) << endl;
    cout << "long占用内存空间为：" << sizeof(long) << endl;
    cout << "long long占用内存空间为：" << sizeof(long long) << endl;
    // 整型大小比较: short < int <= long <= long long
}
