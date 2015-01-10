#include<stdio.h>

int my_sort(int arry_a[],int n,int arry_b[],int m,int max_size)
{
    int old_index = 0;
    int new_index = 0;
    int b_index = 0;
    int ret = new_index;

    old_index = n - 1;
    b_index = m - 1;

    if(n <= 0)
        old_index = 0;
    if(m <= 0)
       b_index = 0;
    if((n <= 0)&&(m <= 0))
        new_index = 0;
    else
        new_index = n + m - 1;

    ret = new_index;


    /*1、合法性判断*/
    if(new_index < max_size)
    {
        /*开始比较进行移动*/
        while(new_index >= 0)
        {
            if(arry_a[old_index] < arry_b[b_index])/*b数组中的值大*/
            {
                arry_a[new_index --] = arry_b[b_index --];
            }else
            {
                arry_a[new_index --] = arry_a[old_index --];
            }
        }
    }
    return ret + 1;
}

void main(void)
{
    int arry_a[18] = {};
    int arry_b[4] = {};
    int i = 0;
    int index = 0;

    index = my_sort(arry_a,0,arry_b,0,18);

    for(i = 0;i < index; i++)
    {
        printf("%d ",arry_a[i]);
    }
}
