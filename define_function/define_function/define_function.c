#define _CRT_SECURE_NO_WARNINGS
//define�����
//�����в�����
//#define add(x,y) ((x)+(y))  //addΪ������x,yΪ�����������������͵ģ�((x)+(y))Ϊ����
                                 //�ڴ�    һ���ڴ�Ữ��Ϊһ�������ڴ浥Ԫ(һ���ڴ�Ĵ�С:1byte)ÿ���ڴ浥Ԫ������һ�����
//int a = 10;
//int* p = &a;
 //Ҫ��a�ĵ�ַ��������ʱ��Ҫ�õ�&   
//���a�ĵ�ַ����p��   
// int* p = &a;   int*�е�*˵��p��ָ�������int˵��pָ��Ķ���(a)��int���͵�
//p����ָ�����   ��ַҲ����Ϊָ��,���ָ��(��ַ)�ı�������ָ�����
// ex char ch = "a"; 
//    char* p = &ch;
                                     //ָ���С  
//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//ָ�����ʹ������ŵ�ַ��
//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���Ŀռ�
//32λ�����ϵĵ�ַ:32bitλ - 4byte,����ָ������Ĵ�С��4���ֽ�
//64λ�����ϵĵ�ַ:64bitλ - 8byte,����ָ������Ĵ�С��8���ֽ�
//int  main()
//{
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(int*));      //sizeofһ����%zu��ӡ
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(float*));//����8
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}
//#define�����ʶ��
// 
//#define���治Ҫ��;

//#define�����
//#define SQUARE(X) X*X
//ע�������X����Ҫ��SQUARE���ţ����ܼӿո�
//int main()
//{
//    int r = SQUARE(5); // 25
//
//    int m = SQUARE(5 + 1); //11
//    int m = 5 + 1 * 5 + 1;
//    ����һ���ں��ж������ţ���Ϊ�����滻�����Ǽ���
//    printf("%d ", r);
//    return 0;
//}


//#��##
//int main()
//{
//    //pirntf("hello world\n");
//    //printf("hello""world\n");
//    //#
//    return 0;
//}

//
////#undef
////�Ƴ�һ����
//#define M 100
//int main()
//{
//    printf("%d", M); //�ܴ�ӡ
//#undef M
//    printf("%d", M); //���ܴ�ӡ
//    return 0;
//}'


////��������
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
//        printf("%d", arr[i]);  //���__DEBUG__����������룬��������ע�͵�__DEBUG__ �� //__DEBUG__
//#endif
//    }
//    return 0;
//}
// 
// 
//���֧����������
//#define M 3
//int main()
//{
//#if M<5
//    printf("hehe\n"); //��ӡ
//#elif M==5
//    printf("haha\n");
//#else
//    printf("huhu\n");
//#endif
//    return 0;
//}
//
// 
//�ж��Ƿ񱻶���
//#if defined(symbol)
//��
//#ifdef symbol
//
//if !defined(symbol)
//��
//ifndef(symbol)
//#define MAX 100
//int main()
//{
//#if defined(MAX)
//    printf("max");
//#endif
////��
//#ifdef MAX
//    printf("max");
//#endif
//
//
//#if !defined(MAX);
//    printf("max");
//#endif
////��
//#ifndef MAX
//    printf("max");
//#endif
//    return  0;
//}
//
//
//Ƕ��ָ��
//����if���