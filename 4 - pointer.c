#include<stdio.h>

void replace_blank(char str[])
{
    int len = strlen(str) + 1;
    int i = 0;
    int num_blank = 0;
    char *p = str;
    char *q = str;

    if(str != NULL)//�����������Ϸ������
    {
        /*1��ȷ���ո������*/
        for(i = 0; i < len; i++)
        {
            if(str[i] == ' ')
            {
                num_blank ++;//ȷ���ո�����������ƶ���Ĵ�СΪnum_blank*2 + len
            }
        }
        /*2���ƶ�p��q��������Ҫ��λ��p�ڴ����ַ�����ĩβ��q���޸ĺ��ַ�����ĩβ*/
        p += len;
        q += (len + num_blank * 2);
        /*3����ʼ�ƶ�ֱ��p=q��Ϊ��ʱ˵���пո���Ѿ��滻���*/
        while(p != q)
        {
            /*4��������ֿո�����滻*/
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
