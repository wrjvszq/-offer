#include<stdio.h>

void replace_blank(char str[])
{
    int len = strlen(str) + 1;
    int i = 0;
    int num_blank = 0;
    char *p = str;
    char *q = str;

    if(str != NULL)//如果传入参数合法则进行
    {
        /*1、确定空格的数量*/
        for(i = 0; i < len; i++)
        {
            if(str[i] == ' ')
            {
                num_blank ++;//确定空格的数量我们移动后的大小为num_blank*2 + len
            }
        }
        /*2、移动p和q到我们需要的位置p在传入字符串的末尾，q在修改后字符串的末尾*/
        p += len;
        q += (len + num_blank * 2);
        /*3、开始移动直到p=q因为此时说明有空格的已经替换完毕*/
        while(p != q)
        {
            /*4、如果出现空格进行替换*/
            if((*p) == ' ')
            {
                *(q--)= '0';
                *(q--)= '2';
                *(q--)= '%';
            }else
            {
                *(q--) = *p;
            }
            p --;
        }

    }

}

void main(void)
{
    char str[100] = "ab ";

    printf("%s\n",str);
    replace_blank(str);
    printf("%s\n",str);
}
