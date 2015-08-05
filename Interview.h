#ifndef		__INTERVIEW__H__
#define		__INTERVIEW__H__
#include <stdio.h>
#include <string.h>
#include <memory.h>

#ifndef _DEBUG
#define _DEBUG
#endif

//#ifdef _DEBUG
//#define DEBUGMSG(msg) printf(msg);printf(“%s%d%s”,__DATE__,__LINE__,__FILE__)
//#else
//#define DEBUGMSG(msg,date) 
//#endif
//
//#endif

#ifdef _DEBUG
//#define DEBUGMSG(msg,date) printf(msg);printf(“%d%d%s”,date,_LINE_,_FILE_)
#define DEBUGMSG printf("msg\n");printf(“%d%d%s”,date,_LINE_,_FILE_)

#else
      #define DEBUGMSG(msg,date)
#endif

#endif
