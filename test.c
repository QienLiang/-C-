#define  _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <math.h>









//int ADD(int x, int y); //这里是函数的声明！ //通常运用在不同源文件实现不同模块 的时候先声明在使用！
//int main()       //函数的声明和定义
//{
//	int a = 10;
//	int b = 20;
//	int c;
//
//	c = ADD(a, b); //使用时未声明
//	printf("%d",c);
//	return 0;
//}
//	int ADD(int x,int y)    //这里叫函数的定义
//{						//当函数写在主函数的后面的时 会报警告 说ADD未定义 
//	int z = x + y;			// 因为代码扫描 从上至下 但第一次看到ADD时 发现没有
//	return z;
//}                       //详见project2 




//int main()             //函数的嵌套调用(套娃)和   链式访问（把一个函数的返回值作为另一个函数的参数） 
//{
//	int len = 0;
//	//方式1
//	len = strlen("acd");
//	printf("%d",len);
//	//方式二   就是把strlend 的函数返回值作为printf 函数的参数
//	printf("%d\n", strlen("acd"));
//	
//	printf("%d",printf("%d",printf("%d",43)));   //printf();函数的返回值是打印字符的个数
//	return 0;
//}



//				//写一个函数，实现一个有序整形数组的二分查找
//				//找到了返回下标，找不到返回-1；
//int binary_search( int arr[],int k,int sz)         //本质上arr这里收到了一个指针
//{
//	//算法的实现
//	int left=0;							// 所以这里sizeof(arr)是计算一个地址的大小 不是4(X32)就是8 (X64)                                          
//	int right = sz-1;                   //sizeof(arr[0]) 首元素是个整型 所以是4 这里就求不来数组 个数 了
//	
//
//	while (left <= right) 
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{ 
//			return mid;
//		
//		}
//	}
//	
//			return -1;		
//		
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k =7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k  ,sz); //设置一个变量接收返回值
//											//这里arr传过去的是数组 首元素地址 
//	if (ret == -1)
//	{
//		printf("没有这个数");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//
//	return 0;
//}





//
//int num_add(int* pnum)	//写一个函数 每调用一次这个函数 将num的值+1
//{
//	(*pnum)++;         //++的优先级比*要高  假如写成*pnum ++;是错误的！
//	return *pnum;
//}
//int main()
//{
//	int num = 0;
//	
//	while (1) 
//	{
//		int f;
//		int n;
//		printf("是否运行函数(1/0)");
//		scanf("%d",&f);
//
//		if (f == 1)
//		{
//			n = num_add(&num);
//			printf("%d",n);
//		}
//		else if (f == 0)
//		{
//			printf("不运行\n");
//		}
//		else
//		{
//			printf("输入错误程序结束\n");
//			break;
//		}
//	}
//
//	return 0;
//}












//void judge_year(int* py)
//{
//	if (((*py % 4 == 0) && (*py % 10 == 0)) || (*py % 400 == 0))
//	{
//		printf("%d是闰年", *py);
//	}
//	else
//		printf("%d不是闰年",*py);
//}
//
//int main()   //写一个函数判断一年是不是闰年
//{
//	int y;
//
//	printf("请输入一个年份");
//	scanf("%d",&y);
//	judge_year(&y);
//
//	return 0;
//}


//void judge(int* pa)
//{
//	int i=2;
//	for (i = 2; i < *pa; i++)
//	{
//		if ((*pa % i) == 0)
//		{
//			printf("%d不是素数\n", *pa);
//			break;
//		}
//		
//	}
//    if (i == *pa)
//	printf("%d是素数",*pa);
//}
//
//int main()            //写一个函数判断一个数是不是素数
//{
//	int a;
//	printf("请输入一个数\n");
//	scanf("%d",&a);
//	
//	judge(&a);
//
//	return 0;
//}







//void swap(int* pa,int* pb)		//int* 指针类型 函数名为pa   传过来的是地址 接受应该用指针接收
//{								//函数名后的参数叫作 形参 只有在函数调用的时候才实例化
//								//当函数调用完之后自动销毁了。因此形参只在 函数中 有效
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;					//*pa是解引用操作 即通过 a的地址  找到  a的值										
//}
//
//int main()         //写一个自定义函数交换 a b的值
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	
//	swap(&a,&b);				// &a-->对a进行取地址操作 把地址传到交换函数哪里
//									//&a &b叫做实参 实参可以是常量 变量 表达式 函数等 在进行调用的时候必须要有实际的值 以便把这些值传给形参
//	printf("a=%d,b=%d\n",a,b);    //当实参传给形参时 形参是实参的临时拷贝 形参具有自己独立的空间
								  //所以对形参的修改不会改变实参的值 故这里要用地址传参！
//	return 0;
//}								//函数的调用 1，传值调用：形参和实参分别占不同的内存块，对形参的修改不会影响实参		
//								//2，传址调用 ：可以让函数与函数外的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量
//
//
//	





//int main()
//{
//	char arr[] = "hello world ";
//	memset(arr,'*',5); 
//	//C 库函数 void *memset(void *str, int c, size_t n) 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的   前    n 个字符。
//	//str -- 指向要填充的内存块。
//	//c -- 要被设置的值。该值以 int 形式传递，但是函数在填充内存块时是使用该值的无符号字符形式。
//	//n -- 要被设置为该值的字符数。
//	
//	printf("%s", arr);
//	return 0;
//}






//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] ;
//
//	strcpy(arr2,arr1);      //C 库函数 char *strcpy(char *destination, const char *source) 把 source 所指向的字符串复制到 destination。
//							//需要注意的是如果目标数组 destination 不够大，而源字符串的长度又太长，可能会造成缓冲溢出的情况
//	printf("%s\n", arr2);
//
//	return 0;
//}







//int  Add(int x,int y)     //1.库函数 搜索c library 2.自定义函数 
//{						//IO函数  字符串操作函数  字符操作函数  内存操作函数 时间日期操作函数 数学函数 其他库函数 
//	int z=0;
//	z= x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int sum = Add(a, b);
//	printf("%d",sum);
//	return 0;
//}







//#include <stdlib.h>
//#include <windows.h>
//#include <time.h>

//void dispaly()
//{
//	printf("*******************\n");
//	printf("输入1玩***输入0结束\n");
//	printf("*******************\n");
//}
//
//void game()
//{			//time_t time(time_t * timer)
//			//参数说明: timer=NULL时得到当前日历时间（从1970-01-01 00:00:00到现在的秒数），
//			//timer=时间数值时，用于设置日历时间，time_t是一个unsigned long类型。如果 timer不为空，则返回值也存储在变量 timer中。
//			//函数功能: 得到当前日历时间或者设置日历时间
//			//函数返回 : 当前日历时间
//			//typedef __time32_t time_t;
//			//typedef __time64_t time_t;
//			//typedef long  __time32_t;  typedef __int64  __time64_t;  time_t 实际上时间的值是一个长整型
//	
//				//定义rand 的随机起点    void srand(unsigned int seed)   对应#include <stdlib.h> 
//				//seed the random-number generator with current time so that
//				// the number (seed) will be different with everytime we run; 
//				//应该是一个随机值 所以引入时间戳的概念
//	int i = 0;
//	int j;
//	i = rand()%100+1;          //对应 #include <stdlib.h>  rand 生成最大数字为0x7fff 十进制为‭32767‬
//								//对100取模 是99 再加1就是生成 1-100之间的随机值！
//	printf("请输入数字 -->:");
//	scanf("%d", &j);
//	if (j < i)
//	{
//		printf("猜小了\n");
//	}
//	if (j == i)
//	{
//		printf("猜对了\n");	
//	}
//	if (j > i)
//	{
//		printf("猜大了\n");
//	}
//	printf("%d\n", i);
//}

//int main()		    //猜数字游戏  电脑产生随机数字
//{					//猜小了就提示小了，猜大了就是提示猜大了，猜对就提示猜对了
//	
//	int input;
//	srand((unsigned int)time(NULL));  //time函数要对应头文件 <time.h>
//	while (1)
//	{
//		dispaly();
//
//		scanf("%d", &input);
//
//		if (input == 1)
//			game();
//		else if (input == 0)
//		{
//			printf("正在退出请稍等\n");
//			Sleep(100);            //对应windows.h的头文件
//			break;
//		}
//		else
//			printf("请重新输入\n");
//	}
//
//	return 0;
//}






//int main()  //在屏幕上输出九九乘法表
//{
//	int i = 1;
//	int j = 1;
//	int acc;
//
//	for (i = 1; i <= 9; i++)
//
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			if (i < j)
//				break;
//			acc = i * j;
//			printf("%d * %d = %2d   ", i, j, acc);        //%2d 指打印两位数字 不够用空格表示 右对齐!
//		}                                                 // %-2d  指左对齐！
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()		//求十个整数的最大值
//  
//{
//	int arr1[] = { -12,-1,-2,-3,-4,-5,-6,-7,-9,-18 };
//	int max = arr1[0];
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i;
//	for (i=0;i<sz;i++ )
//	{
//		if (arr1[i] > max)
//			max = arr1[i];
//
//	}
//	printf("输出最大值为%d",max);
//
//	return 0;
//}

//int main()        //计算1/1 - 1/2 + 1/3 - 1/4+1/5....+1/99 - 1/100的值 并打印结果
//{
//	int i = 0;
//	double sum = 0.00;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum += flag*(1.0 / i);         //优化算法 正负值的选取
//			flag = -flag;
//	
//	}
//	printf("%lf", sum);
//
//	return 0;
//}


//int main()        //计算1/1 - 1/2 + 1/3 - 1/4+1/5....+1/99 - 1/100的值 并打印结果
//{
//	int i = 0;
//	double sum=0.00;
//	for (i=1 ; i<=100 ; i++ )
//	{
//		if ((i % 2) == 1)
//		{
//			sum  =sum + (1.0 / i);     
//		}
//		else if((i%2)==0)
//		{ 
//			sum = sum - (1.0 / i);
//		}
//	}
//	printf("%lf",sum);
//
//	return 0;
//}




//int main()            //在1-100之间数字9的个数
//{
//	int i;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{                      //i对10取模 余9则
//		if ((i%10)==9)     //统计个位的数字 9
//		{
//			count++;
//		}
//	
//		if ((i / 10)==9)  //i除以10 商是9的话 就是他的十位是 9
//		{
//			count++;
//		}
//	}
//	printf("一共有%d个数字9",count);
//
//	return 0;
//}
//




//
//int main()
//{
//	int i;              //因为16= 2*8 = 4*4 当存在比平方数小的值能被n值整除 后面的数就不用算了 计算量少一半
//	int j=2;
//	int count=0;
//
//	for ( i=100 ; i<=200 ;i++ )
//	{
//		for (j=2;j<=sqrt(i);j++)        //当然也可以写成i/2;
//		{
//			if ((i % j) == 0)
//				break;			
//		}
//		if (j > sqrt(i))           //数学库函数 <math.h> -->开平方 
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n 一共有%d个素数 ",count);
//	return 0;
//
//
//}

//int main()       //打印100到200之间的素数
//{				//质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；
//				//否则称为合数（规定1既不是质数也不是合数）。
//				//用试除法  确定一个数n分别除 比他小的数！
//	int i;
//	int j=2;
//	int count=0;
//
//	for ( i=100 ; i<=200 ;i++ )
//	{
//		for (j=2;j<i;j++)
//		{
//			if ((i % j) == 0)
//				break;			
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n 一共有%d个素数 ",count);
//	return 0;
//}


//int main()					//打印1000 到2000年之间的闰年
//{							//1.普通年份能被4整除，且不能被100整除的，是闰年。2,能被400整除的是闰年
//								
//	int i;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((((i % 4) == 0) && ((i % 100) != 0)) || ((i % 400) == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("一共有%d个闰年",count);
//	return 0;
//}



//
//int main()					//求自定义的两个数的最大公约数
//							//算法：辗转相除法
//{
//	int n;
//	int m;
//
//	scanf("%d%d",&n,&m);
//
//	while (n%m)
//	{
//		int r = (n % m);
//		n = m;
//		m = r;
//
//
//	}
//	printf("%d为最大公约数", m);
//	return 0;
//}



//int main()							//打印0-100之间三的倍数
//{
//	int i=1;
//	for (i = 1; i < 101; i++)         //for 语句之间用的是( ; ; )
//	{
//		if ((i%3) == 0)
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}



//int main()               //从大到小输出三个数 
//
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	
//	printf("请输入第一个数\n");
//	scanf("%d", &x);
//
//	printf("请输入第二个数\n");
//	scanf("%d", &y);
//
//	printf("请输入第三个数\n");
//	scanf("%d", &z);
//
//	if (x < y)                                //简洁 就输出固定位置
//												//比较后交换位置即可
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//
//	}
//	if (x < z)
//	{
//		int tmp = x;
//		x = z;
//		z = tmp;
//	}
//	if (y < z)
//	{
//		int tmp = y;
//		y = z;
//		z = tmp;
//
//	}
//	printf("%d %d %d", x, y, z);
//
//	return 0;
//}
//


//
//int main()               //从大到小输出三个数 
//
//{
//	int x=0;
//	int y=0;
//	int z=0;
//
//		printf("请输入第一个数\n");
//		scanf("%d", &x);
//
//		printf("请输入第二个数\n");
//		scanf("%d", &y);
//		
//		printf("请输入第三个数\n");
//		scanf("%d", &z);
//	
//
//	if (x > y)
//	{
//		if (x > z)
//		{
//			if (y > z )
//				printf("%d > %d > %d", x, y, z);
//			else
//			{
//				if (y != z)
//					printf("%d > %d > %d", x, z, y);
//				else
//					printf("%d > %d = %d", x, y, z);
//			}
//		}
//		else
//		{
//			if (x != z)
//				printf("%d > %d > %d", z, x, y);
//			else
//				printf("%d = %d > %d", x, z, y);
//		}
//	}
//	else if (x != y)
//	{
//		if (x > z)
//		{
//			printf("%d > %d > %d", y, x, z);
//		}
//		else if (x != z)
//		{
//			if (y > z)
//				printf("%d > %d > %d", y, z, x);
//			else if (z != y)
//				printf("%d > %d > %d", z, y, x);
//			else
//				printf("%d = %d > %d", z, y, x);
//		}
//		else 
//			printf("%d > %d = %d", y, x, z);
//	}
//	else 
//	{
//		if (x > z)
//			printf("%d = %d > %d", y, x, z);
//		else if (z != x)
//			printf("%d > %d = %d", z, x, y);
//		else
//			printf("%d = %d = %d", x, y, z);
//	}
//
//
//
//	return 0;
//}





//int main()           //实现模拟用户登录情况 并且只能登录三次 成功提示登录成功 错误三次提醒错误退出程序
//{
//	char arr1[] = "1234546";
//	char arr2[20] = {0};
//	int n = 0;
//	while (1)
//	{
//		printf("请输入密码>:");
//		scanf("%s", &arr2);
//		
//		if (strcmp(arr1,arr2) == 0 )          //arr1 == arr2 是错误的 等号不能用来比较字符串
//			                                //应该用一个库函数strcmp(char ,char);
//		{									//若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数
//			printf("输入正确");
//			break;
//		}
//		else
//			printf("输入错误请重新输入\n");
//		n++;
//		if (n == 3) 
//		{
//			printf("输入错误 请退出程序");
//			break;
//		}
//
//	}
//
//	return 0;
//}





//#include <stdio.h>
//#include <math.h>
//#include <windows.h>     //sleep() 要用
//#include <string.h>   //字符数组头文件
//#include <stdlib.h>
//
//
//
//int main()         //编写代码 演示多个字母从两端移动向中间汇聚
//{  
//	char arr1[] = "welcome to the world";
//	char arr2[] = "####################";
//
//
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]-2);  
//	int right = strlen(arr1) - 1;     //计算字符串的长度 因为结束标志符的存在 故减一
//	
//	while(1)                
//	{
//		arr2[left] = arr1[left];                 //把数组1的左边值赋给数组2
//		arr2[right] = arr1[right];               //把数组1的右边值赋给数组2
//		printf("%s\n",arr2);
//		Sleep(1000);            //睡眠1000毫秒  达到延迟显示的效果   对应 windows.h 头文件
//		system("cls");      //每次显示时清空该显示的内容         对应  是<stdlib.h> 
//		left++;
//		right--;
//		if (left >= right)
//			break;
//
//	}
//
//	return 0;
//}




//						//查找有序数列中的某值；
//int main()           //二分查找算法 折半查找方法   最坏的情况下是约等于  [log(2下标)n] 次  
//{               
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);      //计算元素个数   //sizeof(arr)注意这个不可以加写为"arr[]"
//	int left=0;   //左边数的下标
//	int right = sz-1;  //右边数的下标
//	int mid;         
//	int k = 7;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("find it,number is %d", mid);
//			break;
//		}
//	}
//
//	if (left >right)
//	{
//		printf("not found");
//	}
//
//	return 0;
//}

//int main()              //计算 1！+2！...+10！
//{
//	int i = 1;
//	int n = 1;
//	int sum = 0;
//	for (i=1;i<11;i++)
//		{
//		n = n * i;
//		sum +=  n;     //相当于 sum= sum + n 
//		}
//	printf("%d", sum);
//	return 0;
//}



//int main()               //计算n的阶乘 
//
//{
//	int n;
//	int i;
//	int sum = 1;
//	
//	scanf("%d", &n);
//	for (i=1; i<=n ; i++)
//	{
//		sum = sum * i;
//
//	}
//	printf("%d", sum);
//	return 0;
//}




//int main()			//do while 
//{
//	int i=0;
//	do
//		{
//			printf("%d\n", i);
//			i++;
//		} 
//	while (i < 10);
//
//	return 0;
//}


//int main()
//{
//	for (; ; )			//for循环的初始化 调整 判断 都可以省略
//						//但是判断部分若被省略 默认判断条件：恒为正  但不建议随便省略 
//	{
//		printf("11");
//	}
//	return  0;
//}



//int main()      //for 循环    for( 初始化部分 ; 条件判断部分  ;调整部分  ){循环语句}
//{                  //break   continue   的作用在for中的作用跟while一样
//	int i;
//	for ( i = 0; i < 11; i++)    //建议1  不可  在for循环体内修改循环变量，防止for失去控制
//									//2.建议 for语句循环控制变量的采用“前闭后开区间”
//	{
//		printf("%d\n", i);
//	}
//
//	return 0;
//}//



//int main()
//
//{
//	int ch;
//	while ((ch = getchar()) !=  EOF)     //输入非字符数据不输出
//			{
//				if (ch < '0'|| ch >'9')   //
//				continue;
//				putchar(ch);
//
//			}
//
//	return 0;
//}


//int main()     //while的使用例子             1月29日  
//{
//    char password[20] = { 0 };
//    int ret;
//    char ch;
//    printf("输入密码 ");
//    scanf("%s", &password);
//    printf("请确认（Y/N）:> " ); 
//
//    while (    (ch = getchar()) != '\n')    //做个while循环接受 防止误判结束获得字符判断
//    {
//        ;              //一个空语句；
//    }
//
//    ret = getchar();  //假如前面没有getchar就会把结束符‘/n’当做ret进行判断；
//    if (ret == 'Y') 
//        printf("确认成功");
//    if (ret == 'N')
//        printf("取消确认");
//   
//    
//    return 0;
//    
//}


//int main()  //循环打印 一到十       一月28日
//{
//	int i=1;
//	while (1)
//
//	{
//		printf("%d\n", i);
//		i++;
//		if (i == 10)
//			break;        //跳出本次循环；continue 是结束当前循环 （continue后面的不执行，跳回判断while的条件）



//
//
//int main()           //  2021年1月27日    输出奇偶数
//{
//	int a;
//	int b;
//	scanf("%d",&a);            //scanf 输入中文没有意义；%d是整型  %s是字符串  %c 是输入单个字符 


//	b = a % 2;
//	if (b == 1)
//		printf("%d 是奇数", a);
//	else
//		printf("%d 是偶数", a);
//
//
//	return 0;
//}             



