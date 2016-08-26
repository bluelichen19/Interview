#include <stdio.h>
#include <string.h>
#include <memory.h>

#include "base.h"

#ifndef _DEBUG
#define _DEBUG
#endif

#ifdef _DEBUG
////#define DEBUGMSG(msg,date) printf(msg);printf(“%d%d%s”,date,_LINE_,_FILE_)
#define DEBUGMSG do{printf("debug_info==>");printf("%s line:%d %s <%s>\n",__FUNCTION__,__LINE__,__FILE__,__DATE__);}while(0)
//
#else
      #define DEBUGMSG
      #endif

void PrintBuffer(void* pBuff, unsigned int nLen)
{
    unsigned int i = 0;

    const int nBytePerLine = 16;
    unsigned char* p = (unsigned char*)pBuff;
    //char szHex[3*nBytePerLine+1] = {0};
    char szHex[3*nBytePerLine+1];
    memset(szHex,0,3*nBytePerLine+1);
    if (NULL == pBuff || 0 == nLen)
    {
        printf("input ptr is NULL\n");
        return;
    }
    printf("-----------------begin-------------------\n");
    for (i=0; i<nLen; ++i)
    {
        int idx = 3 * (i % nBytePerLine);
        if (0 == idx)
        {
            memset(szHex, 0, sizeof(szHex));
        }
#ifdef WIN32
        sprintf_s(&szHex[idx], 4, "%02x ", p[i]);// buff长度要多传入1个字节
#else
        snprintf(&szHex[idx], 4, "%02x ", p[i]); // buff长度要多传入1个字节
#endif
        
        // 以16个字节为一行，进行打印
        if (0 == ((i+1) % nBytePerLine))
        {
            printf("%s\n", szHex);
        }
    }

    // 打印最后一行未满16个字节的内容
    if (0 != (nLen % nBytePerLine))
    {
        printf("%s\n", szHex);
    }

    printf("------------------end-------------------\n");
}

int PrintfByte(char p[],int len)
{
    int m = 0;
    for(m = 0;m<len;m++)
    printf("-%c-",p[m]);
    printf("\n");
    printf("printf complete");
    return 0;
}

int main(int argc ,char* argv[])
{
    int ret;
    ret = 0;
    DEBUGMSG;
    char p[]="abcdef";
//    char p[]="abcdea";
//    ret = is_contain(p,sizeof(p)/sizeof(char));
    ret = reverse_str(p,sizeof(p)/sizeof(char));
    DEBUGMSG;
    printf("ret is %d\n",ret);
    PrintfByte(p,sizeof(p)/sizeof(char));
    return ret;
}
