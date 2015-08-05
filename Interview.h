#ifndef		__INTERVIEW__H__
#define		__INTERVIEW__H__
#include <stdio.h>
#include <string.h>
#include <memory.h>

//#ifndef _DEBUG
//#define _DEBUG
//#endif

#ifdef _DEBUG
//#define DEBUGMSG(msg,date) printf(msg);printf(“%d%d%s”,date,_LINE_,_FILE_)
#define DEBUGMSG do{printf("debug_info==>");printf("%s line:%d %s <%s>\n",__FUNCTION__,__LINE__,__FILE__,__DATE__);}while(0)

#else
      #define DEBUGMSG
#endif

#endif
