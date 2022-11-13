#include<stdio.h>
#include<math.h>
//输出斐波拉契数的第n项值
 /*int fibo(int n)
 {
 	int f;
 	if(n==1||n==2)
 	return 1;
 	else
 	return f=fibo(n-1)+fibo(n-2);
 	
 }
int main()
{
	int n,f;
	printf("输入所查项数；");
	scanf("%d",&n);
	f=fibo(n); 
	
	printf("第%d项的值为%d",n,f);
 } */
 //逆序输出一个整数
 /*void reserve(int n)
 {
 	if(n<10 && n>0)
 	printf("%d",n);
 	else
 	{
	printf("%d",n%10);
 	reserve(n/10);
    }
 }
 int main()
 {
 	int n;
 	printf("输入该整数；");
 	scanf("%d",&n);
 	if(n<0)
 	{n=-n;putchar('-');}
 	reserve(n);
 	return 0;
 	
 	
  }*/ 
 
 //输出100~1000范围内的回文素数。回文素数既是回文数又是素数
 /*int f1(int n)
 {
 	if(n/100==n%10)
 	return 1;
 	else
 	return 0;
 }
 int f2(int n)
 {
 	int i;
 	for(i=2;i<=sqrt(n);i++)
 	if(n%i==0)
 	return 0;
 	if(i>sqrt(n))
 	return 1;
 }
 int main()
 {
 	int n,flag;
 	for(n=100;n<=1000;n++)
 	{
 		flag=f1(n);
 		if(!flag)
 		continue;
 		flag=f2(n);
 		if(!flag)
 		continue;
 		else
 		printf("%3d\t",n);
	 }
 	return 0;
   }  */
   /*double mycos(double x)
   {
   	int n=1;
   	double sum=0,tmp=1.0;
   	while(fabs(tmp)>1e-6)
   	{
   		sum+=tmp;
   		tmp=-pow(x,2)/(2*n-1)*(2*n);
   		n++;
	   }
	   return sum;
   }
   int main()
   {
   	double x;
   	scanf("%lf",&x);
   	printf("cos(%f)=%f\n",x,mycos(x));
   	return 0;
   }*/
   fun(int k)
   {
   	static int i;
   	int j=0;
   	return ++i+k+j++;
   }
   int main()
   {
   	static int i,n;
   	for(i=0;i<4;i++)
   	n+=fun(i);
   	printf("%3d",n);
   	return 0;
   }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
