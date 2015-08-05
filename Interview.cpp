#include "Interview.h"
int printfStr(char* p,int len)
{
	if(p == NULL || len <= 0)
		return -1;
	int m = 0;
	while(m<len)
	{
		printf("%c",p[m]);
		m++;
	}
	printf("\n");
	return 0;
}
void debugPrintf(const int line,const char* function)
{
	printf("debug====%s====%d\n",function,line);
}
int reverseStr(char* p,int begin,int end)
{
	DEBUGMSG;
	if(p == NULL || begin < 0 || end < 0)
		return -1;
	char tmp;
	while(begin < end)
	{
		tmp = p[begin];
		p[begin] = p[end];
		p[end] = tmp;
		begin++;
		end--;
	}
//	debugPrintf("debug====%s====%d\n",__FUNCTION__,__LINE__);
	return 0;
}
int rotataStr(char* p,int num,int len)
{
//	debugPrintf("debug====%s====%d\n",__FUNCTION__,__LINE__);
	if(p == NULL || len <= 0)
		return -1;
	num %= len;
	reverseStr(p,0,num-1);
	reverseStr(p,num,len-1);
	reverseStr(p,0,len-1);
//	debugPrintf("debug====%s====%d\n",__FUNCTION__,__LINE__);
	return 0;
}
int main(int argc,char* argv[])
{
	char p[]={'a','b','c','d','e','f'};
	printfStr(p,6);
	int ret = rotataStr(p,2,6);
	printfStr(p,6);
	printf("main function run complete!\n");
	return 0;
}
