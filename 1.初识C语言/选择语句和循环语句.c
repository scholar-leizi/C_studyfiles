#include <stdio.h>
int main()
{
    int today = 2024;
    int birthday = 0;
    int same = 0;
    while (same <= 3)
    {
        if (same == 3)
        {
            printf("���Ĵ��������꣬���������ԣ�\n");
        }
        else
        {
            printf("���������ĳ�����ݣ�");
            scanf("%d",&birthday);
            if (birthday <= 0)
            {
                printf("����������ȷ��ݣ�\n");
            }
            else
            {
                if (today - birthday >= 18)
                {
                    printf("���ѳ��꣬�뾡��������Ϸʱ�⣡\n");
                }
                else
                {
                    printf("��δ���꣬������������Ϸʱ�䣡\n");
                }
                same+=3;
            }
        }
        same++;
    }
    return 0;
}