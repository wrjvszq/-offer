#include<stdio.h>

void replace_blank(char str[])
{
    int len = strlen(str) + 1;
    int i = 0;
    int num_blank = 0;
    int old_index = len;
    int new_index = len;

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
        old_index += len;
        new_index += (len + num_blank * 2);
        /*3����ʼ�ƶ�ֱ��p=q��Ϊ��ʱ˵���пո���Ѿ��滻���*/
        while(old_index != new_index)
        {
            /*4��������ֿո�����滻*/
            if(str[old_index] == ' ')
            {
                str[new_index --] = '0';
                str[new_index --] = '2';
                str[new_index --] = '%';
            }else
            {
                str[new_index --] = str[old_index];
            }
            old_index --;
        }

    }

}

void main(void)
{
    char str[100] = "";

    printf("%s\n",str);
    replace_blank(str);
    printf("%s\n",str);
}
