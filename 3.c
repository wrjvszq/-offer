#include<stdio.h>

#define FLASE 0
#define TRUE  1

char my_found(int *arry,int row,int col,int num)
{
    char ret = FLASE;
    int my_row = 0;
    int my_col = col - 1;

    if (arry != NULL && row > 0 && col > 0){/*�������ݺϷ�*/
        if( num > arry[row + col -1] || num < arry[0]){/*�����ж�������ݲ������ǵ����ݷ�Χֱ�Ӳ����в���*/
                ret  =FLASE;
        }else{
            while( my_row < row || my_col >= 0){
                if(num == arry[my_row * row + my_col]){
                    ret = TRUE;
                    break;
                }else{
                    if(num < arry[my_row * row + my_col]){
                            my_col --;
                    }else{
                        my_row ++;
                    }
                }
            }
        }
    }else{
        ret = -1;
    }

    return ret;
}

int main(void)
{
    int arry[4][4] = {
        {1,2,8,9},
        {2,4,9,12},
        {4,7,10,13},
        {6,8,11,15}
    };
    char ret  = FLASE;


    ret = my_found(arry,4,4,16);
    printf("%d   ",ret);

}
