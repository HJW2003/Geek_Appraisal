
#include<stdio.h> 
int main()
{double h;
double a;
double y;
printf("�����벽����");
h=0.001;
printf("�������ֵf��0��=") ;
a=1;
double z=a-y;
int n=0;
double t=0;
double w;
double m;
printf("�����붨����0.M��  M="); 
m=25;
while(z>0.001*h&&w<m){y=a-a*h;
w=t+h;
t=w;
z=a-y;
a=y;
n++;
printf("x=%f      f(x%d)=%f      f(x%d)-f(x%d)=%f\n",w,n,y,n,n-1,z);
}

printf("΢�ַ��̵����ն�̬=%f ��ʱx��ȡֵΪ%f",y,w);
return 0;
}
