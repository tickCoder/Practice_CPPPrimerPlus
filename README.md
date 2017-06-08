# Practice_CPPPrimerPlus

随书练习：C++ Primer Plus

## 常用命令

- `g++ hello.cpp -o hello.o`
- `g++ -std=c++11 hello.cpp`
- `g++ -std=gnu++11 hello.cpp`

## 基本类型

分为两组，一组为`存储为整形`，一组为`存储为浮点格式`。

1. 整形

从小到大依次为：

- bool
- char
- signed char
- unsigned char
- short，至少16位
- unsigned short
- int，至少与short一样长
- unsigned int
- long，至少32位，至少与int一样长
- unsigned long
- long long  (c++11新增)
- unsigned long long (c++11新增)

另外有：`wchar_t`，它的序列取决于实现。C++确保了`char`足够大，能够存储系统基本字符集中的任何成员，而`wchar_t`可以存储系统扩展字符集中的任意成员。

C++11新增类型`char16_t`、`char32_t`，它们的宽度足以分别存储16和32位的字符编码

2. 浮点格式

- float
- double
- long double
