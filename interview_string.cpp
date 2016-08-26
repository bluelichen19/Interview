#include "base.h"

/* 2016-08-26 五 11:22 上午 by lichen  */
/* ----------------------------------------------------------------------------*/
/**
 * @Synopsis  is_contain 判断字符串中所有字符是否有相同，&用来按位取 |用来置位
 *
 * @Param p[]
 * @Param len
 *
 * @Returns  0没有重复 1有重复 
 */
/* ----------------------------------------------------------------------------*/
int is_contain(char p[], int len)
{
    int ret = 0;
    int m;
    int hash = 0;
    for(m=0;m<len;m++)
    {
        if((hash & 1<<(p[m]-'a')) > 0)
        {
            ret = 1;
            return ret;
        }
        hash |= 1<<(p[m]-'a');
    }
    return ret;
}
