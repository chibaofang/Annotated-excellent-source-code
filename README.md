learnc
======

this is used for C/C++, including source code and details need paying attention to.

i++和++i间的区别：
i++: a = i; i = i+1;
++i: i = i+1; a =i; 

int (*p)(int,int):声明一个指针*p，指向函数，函数返回类型是int‘
int *p(int,int):声明一个函数p（int，int），返回类型是指向int类型的指针*。
因此（）不可省，因为（）的优先级高于*。

 #ifndef <标识>
 #define <标识>
	...
#endif
以上结构是为了必买您头文件的重复使用。

extern用法：声明全局变量。


根据C99标准，为边界对齐，结构体可以给成员增加填充字节。实际上，大多数的编译器会使结构体中的每个成员与结构体最大的成员有相同的大小


malloc()函数其实就是在内存当中找一篇指定大小的空间，然后将这个空间的首地址范围给一个指针变量，这里的指针变量可以是一个单独的指针，也可以是一个数组的首地址，这要看malloc()函数中参数size的具体内容；malloc()分配的内存空间在逻辑上是连续的，而在物理上可以是连续的，也可以是不连续的。
malloc()与free()的区别：
主要体现在内存分配和释放方法：
（1）malloc()只管分配内存，而不负责初始化，新的内存中的值是随机的；
（2）malloc()必须由我们计算要字节数，并且返回后强行转换为实际类型的指针：
	int *p;
	p = (int *)malloc(sizeof(int))
而new返回指定类型的指针，并且可以自动计算所需要的大小：
	int *p;
	p = new int;
