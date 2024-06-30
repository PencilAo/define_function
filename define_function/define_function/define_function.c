#define _CRT_SECURE_NO_WARNINGS
//define定义宏
//宏是有参数的
//#define add(x,y) ((x)+(y))  //add为宏名，x,y为参数，参数是无类型的，((x)+(y))为宏体
                                 //内存    一个内存会划分为一个个的内存单元(一个内存的大小:1byte)每个内存单元都存有一个编号
//int a = 10;
//int* p = &a;
 //要把a的地址存起来的时候要用到&   
//如把a的地址存在p里   
// int* p = &a;   int*中的*说名p是指针变量，int说明p指向的对象(a)是int类型的
//p就是指针变量   地址也被称为指针,存放指针(地址)的变量就是指针变量
// ex char ch = "a"; 
//    char* p = &ch;
                                     //指针大小  
//不管是什么类型的指针，都是在创造指针变量
//指针变量使用来存放地址的
//指针变量的大小取决于一个地址存放的时候需要多大的空间
//32位机器上的地址:32bit位 - 4byte,所以指针变量的大小是4个字节
//64位机器上的地址:64bit位 - 8byte,所以指针变量的大小是8个字节
//int  main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(int*));      //sizeof一般用%zu打印
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));//都是8
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}
//#define定义标识符
// 
//#define后面不要加;

//#define定义宏
//#define SQUARE(X) X*X
//注意这里的X必须要于SQUARE挨着，不能加空格
//int main()
//{
//    int r = SQUARE(5); // 25
//
//    int m = SQUARE(5 + 1); //11
//    int m = 5 + 1 * 5 + 1;
//    所以一般在宏中多用括号，因为宏是替换而不是计算
//    printf("%d ", r);
//    return 0;
//}


//#和##
//int main()
//{
//    //pirntf("hello world\n");
//    //printf("hello""world\n");
//    //#
//    return 0;
//}

//
////#undef
////移除一个宏
//#define M 100
//int main()
//{
//    printf("%d", M); //能打印
//#undef M
//    printf("%d", M); //不能打印
//    return 0;
//}'


////条件编译
// 
// 
// 
// 
//#define __DEBUG__
//int main()
//{
//    int i;
//    int arr[10];
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//#ifdef __DEBUG__
//        printf("%d", arr[i]);  //如果__DEBUG__被定义则进入，不想进入就注释掉__DEBUG__ ， //__DEBUG__
//#endif
//    }
//    return 0;
//}
// 
// 
//多分支的条件编译
//#define M 3
//int main()
//{
//#if M<5
//    printf("hehe\n"); //打印
//#elif M==5
//    printf("haha\n");
//#else
//    printf("huhu\n");
//#endif
//    return 0;
//}
//
// 
//判断是否被定义
//#if defined(symbol)
//或
//#ifdef symbol
//
//if !defined(symbol)
//或
//ifndef(symbol)
//#define MAX 100
//int main()
//{
//#if defined(MAX)
//    printf("max");
//#endif
////或
//#ifdef MAX
//    printf("max");
//#endif
//
//
//#if !defined(MAX);
//    printf("max");
//#endif
////或
//#ifndef MAX
//    printf("max");
//#endif
//    return  0;
//}
//
//
//嵌套指令
//类似if语句