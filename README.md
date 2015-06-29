学习优秀的源码，并标注一些需要注意的问题
======

##C/C++
i++和++i间的区别：
i++: a = i; i = i+1;
++i: i = i+1; a =i; 

int (*p)(int,int):声明一个指针*p，指向函数，函数返回类型是int‘
int *p(int,int):声明一个函数p（int，int），返回类型是指向int类型的指针*。
因此（）不可省，因为（）的优先级高于*。
```
 #ifndef <标识>
 #define <标识>
	...
 #endif
```
以上结构是为了避免头文件的重复使用。

extern用法：声明全局变量。


根据C99标准，为边界对齐，结构体可以给成员增加填充字节。实际上，大多数的编译器会使结构体中的每个成员与结构体最大的成员有相同的大小


malloc()函数其实就是在内存当中找一篇指定大小的空间，然后将这个空间的首地址范围给一个指针变量，这里的指针变量可以是一个单独的指针，也可以是一个数组的首地址，这要看malloc()函数中参数size的具体内容；malloc()分配的内存空间在逻辑上是连续的，而在物理上可以是连续的，也可以是不连续的。
malloc()与free()的区别：
主要体现在内存分配和释放方法：
（1）malloc()只管分配内存，而不负责初始化，新的内存中的值是随机的；
（2）malloc()必须由我们计算要字节数，并且返回后强行转换为实际类型的指针：
	```
	int *p;
	p = (int *)malloc(sizeof(int))
	```
而new返回指定类型的指针，并且可以自动计算所需要的大小：
	```
	int *p;
	p = new int;
	```
###C++中创建类时的一些注意事项
####类声明：
　　类函数必须先在类体中作原型声明，然后在类外定义，也就是*说类体的位置应在函数定义之前*，否则编译时会出错。
####成员函数：
　　类的成员函数（简称类函数）是函数的一种,属于一个类的成员.有的函数并不是准备为外界调用的，而是为本类中的成员函数所调用的，就应该将它们指定为private。这种函数的作用是支持其它函数的操作，是类中其它成员的工具函数(utility function)，类外用户不能调用这些私有的工具函数。
　　关于inline成员函数，如果成员函数不在类体内定义，而在类体外定义，系统并不把它默认为内置(inline)函数，调用这些成员函数的过程和调用一般函数的过程是相同的。如果想将这些成员函数指定为内置函数，应当用inline作显式声明。如果在类体外定义inline函数，则必须将类定义和成员函数的定义都放在同一个头文件中(或者写在同一个源文件中)，否则编译时无法进行置换(将函数代码的拷贝嵌入到函数调用点)。
```
class Student
{
	public :
		inline void display( );//声明此成员函数为内置函数
	private :
		int num;
       		string name;
       		char sex;
};
inline void Student::display( ) // 在类外定义display函数为内置函数
{
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
}
```
###Python
####遍历打开文件的方法：
```
f = open('/etc/passwd')
for line in f:
    print(line)
f.close()
```
然而有一种更好的打开文件的方法：
```
with open("etc/passwd") as f:
    for line in f:
        print line
```
在 “with” 打开的代码块内，文件是打开的，而且可以自由读取。然而，一旦Python代码从 “with” 负责的代码段退出，文件会自动关闭。所以，通过使用 “with”，你避免了显式地关闭文件的操作。Python 会以一种不那么有 Python 风格的方式在幕后神奇而静静地替你关闭文件。<br>
####build up modules:
To group many *.py files put them in a folder. Any folder with an __init__.py is considered a module by python and you can call them a package
